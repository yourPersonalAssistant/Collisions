#include "CollisionsCudaKernel.h"
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "curand_kernel.h"

__device__ double GenerateRandomNumber(int seed) {
	int result;
	double y;
	curandState_t state;
	int tid = blockIdx.x;

	curand_init(seed * tid, 0, tid, &state);

	result = curand(&state) % 100;

	y = (double) 1 / ((result + 1));

	return y;
}
__global__ void CollisionsKernel(int *dev_isParticlePassedThroughTheWall, double *dev_debug, int maxParticles, double rBasic, double sigma, double sigmaS, double wallThickness) {
	double pi = 3.14;

	int tid = blockIdx.x;

	if (tid < maxParticles) {
		// Cycle that emulates one particle lifecycle
		for (int i = 0; ; i++) {
			// Generate random number
			double y = GenerateRandomNumber(i);
			dev_debug[tid] = y;

			// Calculate random CosFi
			double cosFi = cos(2 * pi * y);
			if (cosFi < 0) {
				cosFi = cosFi * (-1);
			}

			// Calculate distance to the wall (r) if this is the first run
			double r;
			if (i == 0) {
				r = rBasic / cosFi;
			}
			else {
				r = 0;
			}

			// Calculate Epsilon
			double epsilonX;
			epsilonX = (-1 * (1 / sigma) * log(y) + r) * cosFi;
			if (i != 0) {
				epsilonX += rBasic;
			}

			// Determine is collision is inside the wall
			if (epsilonX >= rBasic && epsilonX <= rBasic + wallThickness) {
				// That means that the collision happened in the wall
				// Now we need to "calculate" fate of the particle
				if (y < sigmaS / sigma) {
					// In this case particle was absorbed
					// We will not count this particle
					dev_isParticlePassedThroughTheWall[tid] = 0;
					break;
				}
				else {
					// In this case particle wasn't absorbed, so we can run another itteration of particle lifecycle
				}
			}
			if (epsilonX < rBasic) {
				// In this case particle left the wall on the source side
				// We will not count this particle
				dev_isParticlePassedThroughTheWall[tid] = 0;
				break;
			}
			if (epsilonX > rBasic + wallThickness) {
				// In this case particle has passed through the wall
				// We will count this particle
				dev_isParticlePassedThroughTheWall[tid] = 1;
				break;
			}
		}
	}
}

int CallCollisionsCudaKernel(int maxParticles, double rBasic, double sigma, double sigmaS, double wallThickness) {
	int *arrayOfParticlesStatuses = new int [maxParticles];
	int *dev_arrayOfParticlesStatuses;

	double *debug = new double [maxParticles];
	double *dev_debug;

	cudaMalloc((void**)&dev_arrayOfParticlesStatuses, maxParticles * sizeof(int));
	cudaMalloc((void**)&dev_debug, maxParticles * sizeof(double));

	CollisionsKernel<<<maxParticles, 1>>> (dev_arrayOfParticlesStatuses, dev_debug, maxParticles, rBasic, sigma, sigmaS, wallThickness);
	
	cudaMemcpy(arrayOfParticlesStatuses, dev_arrayOfParticlesStatuses, maxParticles * sizeof(int), cudaMemcpyDeviceToHost);
	cudaFree(dev_arrayOfParticlesStatuses);

	cudaMemcpy(debug, dev_debug, maxParticles * sizeof(double), cudaMemcpyDeviceToHost);
	cudaFree(dev_debug);

	int countOfParticlesPassedThroughTheWall = 0;
	FILE *f;
	fopen_s(&f, "Result.dat", "a");
	fprintf_s(f, "Wall Thickness: %f, ", wallThickness);
	for (int i = 0; i < maxParticles; i++) {
		if (arrayOfParticlesStatuses[i] == 1) {
			countOfParticlesPassedThroughTheWall++;
		}
		/*fprintf_s(f, "Thread ID: %d, Particle passed through the wall: %d\n", i, arrayOfParticlesStatuses[i]);*/
	}

	int passRate = (double) countOfParticlesPassedThroughTheWall / maxParticles * 100;
	fprintf_s(f, "PassRate: %d\n", passRate);
	fclose(f);

	return countOfParticlesPassedThroughTheWall;
}