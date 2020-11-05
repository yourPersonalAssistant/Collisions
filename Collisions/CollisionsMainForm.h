#pragma once

namespace Collisions {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ CollisionsMainForm
	/// </summary>
	public ref class CollisionsMainForm : public System::Windows::Forms::Form
	{
	public:
		CollisionsMainForm(void)
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
		~CollisionsMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  collisionsMainFormMenuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItemFile;
	protected:

	protected:

	private: System::Windows::Forms::ToolStripMenuItem^  startCalculationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openXMLWithScattersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;

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
			this->collisionsMainFormMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItemFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->startCalculationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openXMLWithScattersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->collisionsMainFormMenuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// collisionsMainFormMenuStrip
			// 
			this->collisionsMainFormMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItemFile });
			this->collisionsMainFormMenuStrip->Location = System::Drawing::Point(0, 0);
			this->collisionsMainFormMenuStrip->Name = L"collisionsMainFormMenuStrip";
			this->collisionsMainFormMenuStrip->Size = System::Drawing::Size(684, 24);
			this->collisionsMainFormMenuStrip->TabIndex = 0;
			// 
			// toolStripMenuItemFile
			// 
			this->toolStripMenuItemFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->startCalculationToolStripMenuItem,
					this->openXMLWithScattersToolStripMenuItem, this->helpToolStripMenuItem, this->aboutToolStripMenuItem, this->quitToolStripMenuItem
			});
			this->toolStripMenuItemFile->Font = (gcnew System::Drawing::Font(L"Corbel", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItemFile->Name = L"toolStripMenuItemFile";
			this->toolStripMenuItemFile->Size = System::Drawing::Size(37, 20);
			this->toolStripMenuItemFile->Text = L"File";
			this->toolStripMenuItemFile->Click += gcnew System::EventHandler(this, &CollisionsMainForm::toolStripMenuItem1_Click);
			// 
			// startCalculationToolStripMenuItem
			// 
			this->startCalculationToolStripMenuItem->Name = L"startCalculationToolStripMenuItem";
			this->startCalculationToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->startCalculationToolStripMenuItem->Text = L"Start Calculation";
			// 
			// openXMLWithScattersToolStripMenuItem
			// 
			this->openXMLWithScattersToolStripMenuItem->Name = L"openXMLWithScattersToolStripMenuItem";
			this->openXMLWithScattersToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->openXMLWithScattersToolStripMenuItem->Text = L"Open XML with scatters";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			this->quitToolStripMenuItem->Text = L"Quit";
			// 
			// CollisionsMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(684, 361);
			this->ControlBox = false;
			this->Controls->Add(this->collisionsMainFormMenuStrip);
			this->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->collisionsMainFormMenuStrip;
			this->Name = L"CollisionsMainForm";
			this->ShowIcon = false;
			this->Text = L"Collisions";
			this->collisionsMainFormMenuStrip->ResumeLayout(false);
			this->collisionsMainFormMenuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
