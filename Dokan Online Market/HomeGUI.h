#pragma once

namespace DokanOnlineMarket {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HomeGUI
	/// </summary>
	public ref class HomeGUI : public System::Windows::Forms::Form
	{
	public:
		HomeGUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HomeGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pn_home;
	private: System::Windows::Forms::Panel^ pn_logo;
	private: System::Windows::Forms::Panel^ pn_logoPorder;
	private: System::Windows::Forms::Label^ label1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HomeGUI::typeid));
			this->pn_home = (gcnew System::Windows::Forms::Panel());
			this->pn_logoPorder = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pn_logo = (gcnew System::Windows::Forms::Panel());
			this->pn_home->SuspendLayout();
			this->pn_logoPorder->SuspendLayout();
			this->SuspendLayout();
			// 
			// pn_home
			// 
			this->pn_home->BackColor = System::Drawing::Color::Black;
			this->pn_home->Controls->Add(this->pn_logoPorder);
			this->pn_home->Controls->Add(this->pn_logo);
			this->pn_home->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_home->Location = System::Drawing::Point(0, 0);
			this->pn_home->Name = L"pn_home";
			this->pn_home->Size = System::Drawing::Size(1291, 819);
			this->pn_home->TabIndex = 0;
			// 
			// pn_logoPorder
			// 
			this->pn_logoPorder->BackColor = System::Drawing::Color::Black;
			this->pn_logoPorder->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pn_logoPorder->Controls->Add(this->label1);
			this->pn_logoPorder->Location = System::Drawing::Point(387, 564);
			this->pn_logoPorder->Name = L"pn_logoPorder";
			this->pn_logoPorder->Size = System::Drawing::Size(516, 95);
			this->pn_logoPorder->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(49, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(418, 54);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Start your journey";
			// 
			// pn_logo
			// 
			this->pn_logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pn_logo.BackgroundImage")));
			this->pn_logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pn_logo->Location = System::Drawing::Point(184, 116);
			this->pn_logo->Name = L"pn_logo";
			this->pn_logo->Size = System::Drawing::Size(922, 388);
			this->pn_logo->TabIndex = 0;
			// 
			// HomeGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1291, 819);
			this->Controls->Add(this->pn_home);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"HomeGUI";
			this->Text = L"HomeGUI";
			this->pn_home->ResumeLayout(false);
			this->pn_logoPorder->ResumeLayout(false);
			this->pn_logoPorder->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion



};
}
