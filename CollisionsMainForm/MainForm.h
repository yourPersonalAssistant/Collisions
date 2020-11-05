#pragma once

_declspec(dllexport) int CallCollisionsCudaKernel(int maxParticles, double rBasic, double sigma, double sigmaS, double wallThickness);

namespace CollisionsMainForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStripMainForm;
	protected:

	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  startCalculationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editXMLToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBoxRadius;

	private: System::Windows::Forms::Label^  labelRadius;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ProgressBar^  progressBarCalculation;

	private: System::Windows::Forms::Button^  buttonProgress;


	private: System::Windows::Forms::TextBox^  textBoxWallThickness;


	private: System::Windows::Forms::Label^  labelWallThickness;
	private: System::Windows::Forms::ComboBox^  comboBoxMaterials;

	private: System::Windows::Forms::Label^  labelMaterial;
	private: String^ xmlFilePath = gcnew String("Materials.xml");
	private: System::Windows::Forms::Label^  labelMaxParticles;
	private: System::Windows::Forms::TextBox^  textBoxMaxParticles;



	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStripMainForm = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->startCalculationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editXMLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBoxRadius = (gcnew System::Windows::Forms::TextBox());
			this->labelRadius = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->progressBarCalculation = (gcnew System::Windows::Forms::ProgressBar());
			this->buttonProgress = (gcnew System::Windows::Forms::Button());
			this->textBoxWallThickness = (gcnew System::Windows::Forms::TextBox());
			this->labelWallThickness = (gcnew System::Windows::Forms::Label());
			this->comboBoxMaterials = (gcnew System::Windows::Forms::ComboBox());
			this->labelMaterial = (gcnew System::Windows::Forms::Label());
			this->labelMaxParticles = (gcnew System::Windows::Forms::Label());
			this->textBoxMaxParticles = (gcnew System::Windows::Forms::TextBox());
			this->menuStripMainForm->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStripMainForm
			// 
			this->menuStripMainForm->Font = (gcnew System::Drawing::Font(L"Corbel", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStripMainForm->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStripMainForm->Location = System::Drawing::Point(0, 0);
			this->menuStripMainForm->Name = L"menuStripMainForm";
			this->menuStripMainForm->Size = System::Drawing::Size(700, 24);
			this->menuStripMainForm->TabIndex = 0;
			this->menuStripMainForm->Text = L"mainFormMenu";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->startCalculationToolStripMenuItem,
					this->editXMLToolStripMenuItem, this->helpToolStripMenuItem, this->aboutToolStripMenuItem, this->quitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// startCalculationToolStripMenuItem
			// 
			this->startCalculationToolStripMenuItem->Name = L"startCalculationToolStripMenuItem";
			this->startCalculationToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->startCalculationToolStripMenuItem->Text = L"Start calculation";
			this->startCalculationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::startCalculationToolStripMenuItemClick);
			// 
			// editXMLToolStripMenuItem
			// 
			this->editXMLToolStripMenuItem->Name = L"editXMLToolStripMenuItem";
			this->editXMLToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->editXMLToolStripMenuItem->Text = L"Edit XML file with scatters";
			this->editXMLToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::editXMLToolStripMenuItemClick);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::aboutToolStripMenuItemClick);
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->Size = System::Drawing::Size(201, 22);
			this->quitToolStripMenuItem->Text = L"Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::QuitToolStripMenuItemClick);
			// 
			// textBoxRadius
			// 
			this->textBoxRadius->Location = System::Drawing::Point(518, 154);
			this->textBoxRadius->Name = L"textBoxRadius";
			this->textBoxRadius->Size = System::Drawing::Size(40, 21);
			this->textBoxRadius->TabIndex = 1;
			// 
			// labelRadius
			// 
			this->labelRadius->AutoSize = true;
			this->labelRadius->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelRadius->Location = System::Drawing::Point(518, 136);
			this->labelRadius->Name = L"labelRadius";
			this->labelRadius->Size = System::Drawing::Size(114, 15);
			this->labelRadius->TabIndex = 2;
			this->labelRadius->Text = L"Distance to the wall";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(262, 49);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 250);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// progressBarCalculation
			// 
			this->progressBarCalculation->Location = System::Drawing::Point(12, 365);
			this->progressBarCalculation->Name = L"progressBarCalculation";
			this->progressBarCalculation->Size = System::Drawing::Size(508, 23);
			this->progressBarCalculation->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBarCalculation->TabIndex = 4;
			// 
			// buttonProgress
			// 
			this->buttonProgress->Enabled = false;
			this->buttonProgress->Location = System::Drawing::Point(526, 365);
			this->buttonProgress->Name = L"buttonProgress";
			this->buttonProgress->Size = System::Drawing::Size(162, 23);
			this->buttonProgress->TabIndex = 5;
			this->buttonProgress->Text = L"Enter data";
			this->buttonProgress->UseVisualStyleBackColor = true;
			this->buttonProgress->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::buttonProgressMouseClick);
			// 
			// textBoxWallThickness
			// 
			this->textBoxWallThickness->Location = System::Drawing::Point(518, 62);
			this->textBoxWallThickness->Name = L"textBoxWallThickness";
			this->textBoxWallThickness->Size = System::Drawing::Size(40, 21);
			this->textBoxWallThickness->TabIndex = 6;
			// 
			// labelWallThickness
			// 
			this->labelWallThickness->AutoSize = true;
			this->labelWallThickness->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelWallThickness->Location = System::Drawing::Point(518, 44);
			this->labelWallThickness->Name = L"labelWallThickness";
			this->labelWallThickness->Size = System::Drawing::Size(84, 15);
			this->labelWallThickness->TabIndex = 7;
			this->labelWallThickness->Text = L"Wall Thickness";
			// 
			// comboBoxMaterials
			// 
			this->comboBoxMaterials->FormattingEnabled = true;
			this->comboBoxMaterials->Location = System::Drawing::Point(12, 58);
			this->comboBoxMaterials->Name = L"comboBoxMaterials";
			this->comboBoxMaterials->Size = System::Drawing::Size(211, 21);
			this->comboBoxMaterials->TabIndex = 8;
			this->comboBoxMaterials->DropDown += gcnew System::EventHandler(this, &MainForm::comboBoxMaterialsDropDown);
			// 
			// labelMaterial
			// 
			this->labelMaterial->AutoSize = true;
			this->labelMaterial->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMaterial->Location = System::Drawing::Point(12, 40);
			this->labelMaterial->Name = L"labelMaterial";
			this->labelMaterial->Size = System::Drawing::Size(77, 15);
			this->labelMaterial->TabIndex = 9;
			this->labelMaterial->Text = L"Wall Material";
			// 
			// labelMaxParticles
			// 
			this->labelMaxParticles->AutoSize = true;
			this->labelMaxParticles->Font = (gcnew System::Drawing::Font(L"Corbel", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMaxParticles->Location = System::Drawing::Point(12, 94);
			this->labelMaxParticles->Name = L"labelMaxParticles";
			this->labelMaxParticles->Size = System::Drawing::Size(78, 15);
			this->labelMaxParticles->TabIndex = 10;
			this->labelMaxParticles->Text = L"Max Particles";
			// 
			// textBoxMaxParticles
			// 
			this->textBoxMaxParticles->Location = System::Drawing::Point(12, 112);
			this->textBoxMaxParticles->Name = L"textBoxMaxParticles";
			this->textBoxMaxParticles->Size = System::Drawing::Size(40, 21);
			this->textBoxMaxParticles->TabIndex = 11;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(700, 400);
			this->ControlBox = false;
			this->Controls->Add(this->textBoxMaxParticles);
			this->Controls->Add(this->labelMaxParticles);
			this->Controls->Add(this->labelMaterial);
			this->Controls->Add(this->comboBoxMaterials);
			this->Controls->Add(this->labelWallThickness);
			this->Controls->Add(this->textBoxWallThickness);
			this->Controls->Add(this->buttonProgress);
			this->Controls->Add(this->progressBarCalculation);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->labelRadius);
			this->Controls->Add(this->textBoxRadius);
			this->Controls->Add(this->menuStripMainForm);
			this->Font = (gcnew System::Drawing::Font(L"Corbel", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->menuStripMainForm;
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->Text = L"Collisions";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainFormLoad);
			this->menuStripMainForm->ResumeLayout(false);
			this->menuStripMainForm->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void GetMaterialsNamesFromXML() {

		}
#pragma region ToolStripMenuItemMethods

		private: System::Void startCalculationToolStripMenuItemClick(System::Object^  sender, System::EventArgs^  e) {
			buttonProgress->Enabled = false;
			progressBarCalculation->Value = 0;

			if (comboBoxMaterials->Text == "") {
				buttonProgress->Text = "Choose material";
				return;
			}
			if (textBoxMaxParticles->Text == "") {
				buttonProgress->Text = "Enter particles number";
				return;
			}
			if (textBoxWallThickness->Text == "") {
				buttonProgress->Text = "Enter thickness";
				return;
			}
			if (textBoxRadius->Text == "") {
				buttonProgress->Text = "Enter distance";
				return;
			}

			buttonProgress->Text = "Calculation in progress";

			
			/* (int maxParticles, double rBasic, double sigma, double sigmaS, double wallThickness) */

			/* Get max particles value */
			int maxParticles;
			Int32::TryParse(textBoxMaxParticles->Text, maxParticles);

			/* Get distance to the wall value */
			double distance;
			Double::TryParse(textBoxRadius->Text, distance);

			/* Get wall thickness value */
			double wallThickness;
			Double::TryParse(textBoxWallThickness->Text, wallThickness);

			/* Get Sigma values for current material */
			String^ MaterialName = gcnew String(comboBoxMaterials->Text);
			String^ SigmaString;
			String^ SigmaSString;
			XmlTextReader^ reader = gcnew XmlTextReader(xmlFilePath);
			while (reader->Read()) {
				if (reader->NodeType == XmlNodeType::Element) {
					if (reader->Name == "Material" && reader->GetAttribute(0) == MaterialName) {
						do {
							reader->Read();
						} while (reader->NodeType != XmlNodeType::Text);
						SigmaString = gcnew String(reader->Value);
						Console::WriteLine(L"Sigma: {0}", reader->Value);
						do {
							reader->Read();
						} while (reader->NodeType != XmlNodeType::Text);
						SigmaSString = gcnew String(reader->Value);
						Console::WriteLine(L"SigmaS: {0}", reader->Value);
					}
				}
			}
			reader->Close();
			progressBarCalculation->Value = 10;

			/* Parsing Sigma values to double */
			double sigma, sigmaS;
			Double::TryParse(SigmaString, sigma);
			Double::TryParse(SigmaSString, sigmaS);
			progressBarCalculation->Value = 20;
			for (double i = 0.0001; i < 1; i += 0.001) {
				int PassRate = CallCollisionsCudaKernel(maxParticles, distance, sigma, sigmaS, i/*wallThickness*/);
				if (PassRate == 0) break;
			}
			/* Here calculation will take place */

			progressBarCalculation->Value = 100;
			buttonProgress->Text = "Open result file";
			buttonProgress->Enabled = true;
		}

		private: System::Void editXMLToolStripMenuItemClick(System::Object^  sender, System::EventArgs^  e) {
			System::Diagnostics::Process::Start("Notepad.exe", "Materials.xml");
		}

		private: System::Void aboutToolStripMenuItemClick(System::Object^  sender, System::EventArgs^  e) {
			MessageBox::Show("Collisions\n\nCreated by Ilya Bausov\n2015", "About");
		}
		
		private: System::Void QuitToolStripMenuItemClick(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit();
		}

#pragma endregion

		private: System::Void comboBoxMaterialsDropDown(System::Object^  sender, System::EventArgs^  e) {
			comboBoxMaterials->Items->Clear();
			XmlTextReader^ reader = gcnew XmlTextReader(xmlFilePath);
			/*Structure is needed*/
			while (reader->Read()) {
				if (reader->NodeType == XmlNodeType::Element) {
					if (reader->Name == "Material") {
						comboBoxMaterials->Items->Add(reader->GetAttribute(0));
					}
				}
			}
			reader->Close();
		}

		private: System::Void MainFormLoad(System::Object^  sender, System::EventArgs^  e) {
		}
		
		private: System::Void buttonProgressMouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			System::Diagnostics::Process::Start("Notepad.exe", "Result.dat");
		}
	};
}
