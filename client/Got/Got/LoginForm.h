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
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary >
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ IDLabel;
	protected:

	private: System::Windows::Forms::Label^ NULabel;
	private: System::Windows::Forms::Label^ NRLabel;
	private: System::Windows::Forms::TextBox^ NUBox;
	private: System::Windows::Forms::TextBox^ NRBox;
	private: System::Windows::Forms::Label^ DCLabel;
	private: System::Windows::Forms::RichTextBox^ DCBox;
	private: System::Windows::Forms::Button^ CommitBoton;
	private: System::Windows::Forms::NumericUpDown^ IDStock;
	private: System::Windows::Forms::Button^ AABoton;
	private: System::Windows::Forms::PictureBox^ Imagen;




	private: System::ComponentModel::IContainer^ components;


		   //private: System::Windows::Forms::Label^ lblName;
	protected:

	protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->IDLabel = (gcnew System::Windows::Forms::Label());
			this->NULabel = (gcnew System::Windows::Forms::Label());
			this->NRLabel = (gcnew System::Windows::Forms::Label());
			this->NUBox = (gcnew System::Windows::Forms::TextBox());
			this->NRBox = (gcnew System::Windows::Forms::TextBox());
			this->DCLabel = (gcnew System::Windows::Forms::Label());
			this->DCBox = (gcnew System::Windows::Forms::RichTextBox());
			this->CommitBoton = (gcnew System::Windows::Forms::Button());
			this->IDStock = (gcnew System::Windows::Forms::NumericUpDown());
			this->AABoton = (gcnew System::Windows::Forms::Button());
			this->Imagen = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IDStock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Imagen))->BeginInit();
			this->SuspendLayout();
			// 
			// IDLabel
			// 
			this->IDLabel->AutoSize = true;
			this->IDLabel->Location = System::Drawing::Point(12, 19);
			this->IDLabel->Name = L"IDLabel";
			this->IDLabel->Size = System::Drawing::Size(18, 13);
			this->IDLabel->TabIndex = 0;
			this->IDLabel->Text = L"ID";
			// 
			// NULabel
			// 
			this->NULabel->AutoSize = true;
			this->NULabel->Location = System::Drawing::Point(13, 47);
			this->NULabel->Name = L"NULabel";
			this->NULabel->Size = System::Drawing::Size(83, 13);
			this->NULabel->TabIndex = 2;
			this->NULabel->Text = L"Nombre Usuario";
			// 
			// NRLabel
			// 
			this->NRLabel->AutoSize = true;
			this->NRLabel->Location = System::Drawing::Point(12, 73);
			this->NRLabel->Name = L"NRLabel";
			this->NRLabel->Size = System::Drawing::Size(100, 13);
			this->NRLabel->TabIndex = 3;
			this->NRLabel->Text = L"Nombre Repositorio";
			// 
			// NUBox
			// 
			this->NUBox->Location = System::Drawing::Point(103, 39);
			this->NUBox->Name = L"NUBox";
			this->NUBox->Size = System::Drawing::Size(100, 20);
			this->NUBox->TabIndex = 4;
			// 
			// NRBox
			// 
			this->NRBox->Location = System::Drawing::Point(119, 65);
			this->NRBox->Name = L"NRBox";
			this->NRBox->Size = System::Drawing::Size(113, 20);
			this->NRBox->TabIndex = 5;
			// 
			// DCLabel
			// 
			this->DCLabel->AutoSize = true;
			this->DCLabel->Location = System::Drawing::Point(16, 103);
			this->DCLabel->Name = L"DCLabel";
			this->DCLabel->Size = System::Drawing::Size(100, 13);
			this->DCLabel->TabIndex = 6;
			this->DCLabel->Text = L"Descripcion Commit";
			// 
			// DCBox
			// 
			this->DCBox->Location = System::Drawing::Point(122, 103);
			this->DCBox->Name = L"DCBox";
			this->DCBox->Size = System::Drawing::Size(218, 46);
			this->DCBox->TabIndex = 7;
			this->DCBox->Text = L"";
			// 
			// CommitBoton
			// 
			this->CommitBoton->Location = System::Drawing::Point(160, 169);
			this->CommitBoton->Name = L"CommitBoton";
			this->CommitBoton->Size = System::Drawing::Size(135, 39);
			this->CommitBoton->TabIndex = 8;
			this->CommitBoton->Text = L"Commit";
			this->CommitBoton->UseVisualStyleBackColor = true;
			this->CommitBoton->Click += gcnew System::EventHandler(this, &LoginForm::CommitBoton_Click);
			// 
			// IDStock
			// 
			this->IDStock->Location = System::Drawing::Point(36, 17);
			this->IDStock->Name = L"IDStock";
			this->IDStock->Size = System::Drawing::Size(60, 20);
			this->IDStock->TabIndex = 9;
			// 
			// AABoton
			// 
			this->AABoton->Location = System::Drawing::Point(430, 152);
			this->AABoton->Name = L"AABoton";
			this->AABoton->Size = System::Drawing::Size(113, 56);
			this->AABoton->TabIndex = 10;
			this->AABoton->Text = L"Agregar Archivo";
			this->AABoton->UseVisualStyleBackColor = true;
			this->AABoton->Click += gcnew System::EventHandler(this, &LoginForm::AABoton_Click);
			// 
			// Imagen
			// 
			this->Imagen->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Imagen->Location = System::Drawing::Point(430, 19);
			this->Imagen->Name = L"Imagen";
			this->Imagen->Size = System::Drawing::Size(113, 96);
			this->Imagen->TabIndex = 11;
			this->Imagen->TabStop = false;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 244);
			this->Controls->Add(this->Imagen);
			this->Controls->Add(this->AABoton);
			this->Controls->Add(this->IDStock);
			this->Controls->Add(this->CommitBoton);
			this->Controls->Add(this->DCBox);
			this->Controls->Add(this->DCLabel);
			this->Controls->Add(this->NRBox);
			this->Controls->Add(this->NUBox);
			this->Controls->Add(this->NRLabel);
			this->Controls->Add(this->NULabel);
			this->Controls->Add(this->IDLabel);
			this->Name = L"LoginForm";
			this->Text = L"Acceso";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IDStock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Imagen))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		String^ connString = "Server=localhost;port=3306;database=got;uid=root;password=admin";

		MySqlConnection^ conn = gcnew MySqlConnection(connString);

	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {


		//Server = localhost
		//Port = 3306  
		//Database Name = got
		//UID = root
		//Password = admin



		try {
			conn->Open();
			MessageBox::Show("Conexion con Servidor Exitosa");
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Conexion con Servidor Fallida");

		}


	}



	private: System::Void CommitBoton_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ Nombre = NUBox->Text;
		String^ NombreRepo = NRBox->Text;
		String^ DescripCommit = DCBox->Text;
		int Id = Convert::ToInt32(IDStock->Value);
		array<unsigned char>^ Archivo;


		String^ fileLocation = Imagen->ImageLocation;
		FileStream^ fs = gcnew FileStream(fileLocation, FileMode::Open, FileAccess::Read);
		BinaryReader^ br = gcnew BinaryReader(fs);
		Archivo = br->ReadBytes(fs->Length);




		bool isValid = true;

		if (Nombre->Trim()->Length <= 2) {
			MessageBox::Show("Ingrese su nombre completo");
			isValid = false;
		}

		if (NombreRepo->Trim()->Length <= 2) {
			MessageBox::Show("Ingrese un nombre de Repositorio Correcto");
			isValid = false;
		}

		if (DescripCommit->Trim()->Length <= 4) {
			MessageBox::Show("Ingrese un descripcion mas amplia");
			isValid = false;
		}

		if (isValid) {

			conn->Open();

			String^ cmdString = "INSERT INTO usuarios (id,name,repositorio,commitdescripcion,visualizaciondocumento) VALUES (@Id,@Nombre,@NombreRepo,@DescripCommit,@Archivo)";


			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);


			cmd->Parameters->AddWithValue("@Id", Id);
			cmd->Parameters->AddWithValue("@Nombre", Nombre);
			cmd->Parameters->AddWithValue("@NombreRepo", NombreRepo);
			cmd->Parameters->AddWithValue("@DescripCommit", DescripCommit);
			cmd->Parameters->AddWithValue("@Archivo", Archivo);



			try {
				cmd->ExecuteNonQuery();
				MessageBox::Show("Commit ingresado Correctamente");
				conn->Close();
			}
			catch (Exception^ e) {
				MessageBox::Show("Error al insertar datos");
			}






		}
	}
	private: System::Void AABoton_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "TXT Files *.txt|*.txt|PY Files *.py|*.py|CS Files *.cs|*.cs|JS Files *.js|*.js|CPP Files *.cpp|*.cpp|All Files *.*|*.*";

		if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK); {
			Imagen->ImageLocation = ofd->FileName;

		}




	}
	};
}


