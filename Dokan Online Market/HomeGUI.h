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
	private: System::Windows::Forms::Button^ button1;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pn_logo = (gcnew System::Windows::Forms::Panel());
			this->pn_home->SuspendLayout();
			this->SuspendLayout();
			// 
			// pn_home
			// 
			this->pn_home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
				static_cast<System::Int32>(static_cast<System::Byte>(155)));
			this->pn_home->Controls->Add(this->button1);
			this->pn_home->Controls->Add(this->pn_logo);
			this->pn_home->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_home->Location = System::Drawing::Point(0, 0);
			this->pn_home->Name = L"pn_home";
			this->pn_home->Size = System::Drawing::Size(1291, 819);
			this->pn_home->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(420, 577);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(450, 77);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Start your journey";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// pn_logo
			// 
			this->pn_logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pn_logo.BackgroundImage")));
			this->pn_logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pn_logo->Location = System::Drawing::Point(184, 165);
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
			this->Text = L"Dokan Online Market";
			this->pn_home->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion




};
}
