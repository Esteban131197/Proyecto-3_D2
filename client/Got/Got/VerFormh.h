#pragma once

namespace Got {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for VerFormh
	/// </summary>
	public ref class VerFormh : public System::Windows::Forms::Form
	{
	public:
		VerFormh(void)
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
		~VerFormh()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ Tablausuarios;
	protected:


	private: System::Windows::Forms::RichTextBox^ txtUsuario;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ imgProductImage;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ BorrarBoton;

	private: System::Windows::Forms::NumericUpDown^ IDStock;
	private: System::Windows::Forms::RichTextBox^ DCBox;
	private: System::Windows::Forms::Label^ DCLabel;
	private: System::Windows::Forms::TextBox^ NRBox;
	private: System::Windows::Forms::TextBox^ NUBox;
	private: System::Windows::Forms::Label^ NRLabel;
	private: System::Windows::Forms::Label^ NULabel;
	private: System::Windows::Forms::Button^ CambiarBoton;
	private: System::Windows::Forms::Button^ ActualizarBoton;
	private: System::Windows::Forms::Label^ IDLabel;
	private: System::Windows::Forms::Button^ button1;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Tablausuarios = (gcnew System::Windows::Forms::DataGridView());
			this->txtUsuario = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imgProductImage = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->CambiarBoton = (gcnew System::Windows::Forms::Button());
			this->ActualizarBoton = (gcnew System::Windows::Forms::Button());
			this->IDLabel = (gcnew System::Windows::Forms::Label());
			this->IDStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->DCBox = (gcnew System::Windows::Forms::RichTextBox());
			this->DCLabel = (gcnew System::Windows::Forms::Label());
			this->NRBox = (gcnew System::Windows::Forms::TextBox());
			this->NUBox = (gcnew System::Windows::Forms::TextBox());
			this->NRLabel = (gcnew System::Windows::Forms::Label());
			this->NULabel = (gcnew System::Windows::Forms::Label());
			this->BorrarBoton = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tablausuarios))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProductImage))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IDStock))->BeginInit();
			this->BorrarBoton->SuspendLayout();
			this->SuspendLayout();
			// 
			// Tablausuarios
			// 
			this->Tablausuarios->AllowUserToAddRows = false;
			this->Tablausuarios->AllowUserToDeleteRows = false;
			this->Tablausuarios->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Tablausuarios->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->Tablausuarios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Tablausuarios->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->Tablausuarios->Location = System::Drawing::Point(343, 12);
			this->Tablausuarios->MultiSelect = false;
			this->Tablausuarios->Name = L"Tablausuarios";
			this->Tablausuarios->ReadOnly = true;
			this->Tablausuarios->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->Tablausuarios->Size = System::Drawing::Size(404, 437);
			this->Tablausuarios->TabIndex = 0;
			this->Tablausuarios->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VerFormh::usuarios_CellClick);
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(168, 12);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->ReadOnly = true;
			this->txtUsuario->Size = System::Drawing::Size(169, 147);
			this->txtUsuario->TabIndex = 2;
			this->txtUsuario->Text = L"";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(176, 20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 50);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// imgProductImage
			// 
			this->imgProductImage->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->imgProductImage->Location = System::Drawing::Point(0, 12);
			this->imgProductImage->Name = L"imgProductImage";
			this->imgProductImage->Size = System::Drawing::Size(162, 147);
			this->imgProductImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgProductImage->TabIndex = 4;
			this->imgProductImage->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->BorrarBoton);
			this->tabControl1->Location = System::Drawing::Point(0, 165);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(337, 284);
			this->tabControl1->TabIndex = 5;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->CambiarBoton);
			this->tabPage1->Controls->Add(this->ActualizarBoton);
			this->tabPage1->Controls->Add(this->IDLabel);
			this->tabPage1->Controls->Add(this->IDStock);
			this->tabPage1->Controls->Add(this->DCBox);
			this->tabPage1->Controls->Add(this->DCLabel);
			this->tabPage1->Controls->Add(this->NRBox);
			this->tabPage1->Controls->Add(this->NUBox);
			this->tabPage1->Controls->Add(this->NRLabel);
			this->tabPage1->Controls->Add(this->NULabel);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(329, 258);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Actualizar";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// CambiarBoton
			// 
			this->CambiarBoton->Location = System::Drawing::Point(233, 23);
			this->CambiarBoton->Name = L"CambiarBoton";
			this->CambiarBoton->Size = System::Drawing::Size(76, 28);
			this->CambiarBoton->TabIndex = 19;
			this->CambiarBoton->Text = L"Cambiar";
			this->CambiarBoton->UseVisualStyleBackColor = true;
			// 
			// ActualizarBoton
			// 
			this->ActualizarBoton->Location = System::Drawing::Point(27, 166);
			this->ActualizarBoton->Name = L"ActualizarBoton";
			this->ActualizarBoton->Size = System::Drawing::Size(270, 55);
			this->ActualizarBoton->TabIndex = 18;
			this->ActualizarBoton->Text = L"Actualizar";
			this->ActualizarBoton->UseVisualStyleBackColor = true;
			// 
			// IDLabel
			// 
			this->IDLabel->AutoSize = true;
			this->IDLabel->Location = System::Drawing::Point(3, 126);
			this->IDLabel->Name = L"IDLabel";
			this->IDLabel->Size = System::Drawing::Size(18, 13);
			this->IDLabel->TabIndex = 17;
			this->IDLabel->Text = L"ID";
			// 
			// IDStock
			// 
			this->IDStock->Location = System::Drawing::Point(27, 124);
			this->IDStock->Name = L"IDStock";
			this->IDStock->Size = System::Drawing::Size(60, 20);
			this->IDStock->TabIndex = 16;
			// 
			// DCBox
			// 
			this->DCBox->Location = System::Drawing::Point(103, 80);
			this->DCBox->Name = L"DCBox";
			this->DCBox->Size = System::Drawing::Size(218, 46);
			this->DCBox->TabIndex = 15;
			this->DCBox->Text = L"";
			// 
			// DCLabel
			// 
			this->DCLabel->AutoSize = true;
			this->DCLabel->Location = System::Drawing::Point(-1, 80);
			this->DCLabel->Name = L"DCLabel";
			this->DCLabel->Size = System::Drawing::Size(100, 13);
			this->DCLabel->TabIndex = 14;
			this->DCLabel->Text = L"Descripcion Commit";
			// 
			// NRBox
			// 
			this->NRBox->Location = System::Drawing::Point(105, 51);
			this->NRBox->Name = L"NRBox";
			this->NRBox->Size = System::Drawing::Size(113, 20);
			this->NRBox->TabIndex = 13;
			// 
			// NUBox
			// 
			this->NUBox->Location = System::Drawing::Point(105, 20);
			this->NUBox->Name = L"NUBox";
			this->NUBox->Size = System::Drawing::Size(100, 20);
			this->NUBox->TabIndex = 12;
			// 
			// NRLabel
			// 
			this->NRLabel->AutoSize = true;
			this->NRLabel->Location = System::Drawing::Point(-1, 54);
			this->NRLabel->Name = L"NRLabel";
			this->NRLabel->Size = System::Drawing::Size(100, 13);
			this->NRLabel->TabIndex = 11;
			this->NRLabel->Text = L"Nombre Repositorio";
			// 
			// NULabel
			// 
			this->NULabel->AutoSize = true;
			this->NULabel->Location = System::Drawing::Point(-1, 23);
			this->NULabel->Name = L"NULabel";
			this->NULabel->Size = System::Drawing::Size(83, 13);
			this->NULabel->TabIndex = 10;
			this->NULabel->Text = L"Nombre Usuario";
			// 
			// BorrarBoton
			// 
			this->BorrarBoton->Controls->Add(this->button1);
			this->BorrarBoton->Location = System::Drawing::Point(4, 22);
			this->BorrarBoton->Name = L"BorrarBoton";
			this->BorrarBoton->Padding = System::Windows::Forms::Padding(3);
			this->BorrarBoton->Size = System::Drawing::Size(329, 258);
			this->BorrarBoton->TabIndex = 1;
			this->BorrarBoton->Text = L"Borrar";
			this->BorrarBoton->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 205);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(302, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Borrar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// VerFormh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(759, 461);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->imgProductImage);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txtUsuario);
			this->Controls->Add(this->Tablausuarios);
			this->Name = L"VerFormh";
			this->Text = L"Commits";
			this->Load += gcnew System::EventHandler(this, &VerFormh::VerFormh_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tablausuarios))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgProductImage))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IDStock))->EndInit();
			this->BorrarBoton->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		String^ connString = "Server=localhost;port=3306;database=got;uid=root;password=admin";

		MySqlConnection^ conn = gcnew MySqlConnection(connString);

	private: System::Void VerFormh_Load(System::Object^ sender, System::EventArgs^ e) {

		try {
			conn->Open();
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT id,name,repositorio, commitdescripcion  FROM usuarios", conn);
			DataTable^ dt = gcnew  DataTable();
			adapter->Fill(dt);
			Tablausuarios->DataSource = dt;
			conn->Close();

		}
		catch (Exception^ e) {
			MessageBox::Show("No se pudo leer dos datos");
		}

	}





	private: System::Void usuarios_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		String^ currid = Tablausuarios->Rows[Tablausuarios->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
		try {
			conn->Open();
			imgProductImage->Image = nullptr;
			txtUsuario->Text = "";
			NUBox->Text = "";
			NRBox->Text = "";
			DCBox->Text = "";
			IDStock->Value = 0;


			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter("SELECT visualizaciondocumento, commitdescripcion, FROM usuarios WHERE id = " + currid, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);

			String^ commitdescripcion = dt->Rows[0]->ItemArray[1]->ToString();
			txtUsuario->Text = commitdescripcion;

			DCBox->Text = commitdescripcion;
			//NUBox->Text = usuarios->Rows[usuarios]

			array<unsigned char>^ visualizaciondocumento = (array<unsigned char>^)dt->Rows[0]->ItemArray[0];
			MemoryStream^ ms = gcnew MemoryStream(visualizaciondocumento);
			imgProductImage->Image = Image::FromStream(ms);

			conn->Close();
		}
		catch (Exception^ e) {
			//MessageBox::Show("No se puede  leer");
			conn->Close();

		}

	}
	};
}
