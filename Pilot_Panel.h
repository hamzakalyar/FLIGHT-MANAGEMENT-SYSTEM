#pragma once
#include "LoggedInUser.h"

namespace AIRLINES {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for Pilot_Panel
	/// </summary>
	public ref class Pilot_Panel : public System::Windows::Forms::Form
	{
	public:
		Pilot_Panel(void)
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
		~Pilot_Panel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ ViewFlightsButton;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ MyFlights;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pilot_Panel::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->MyFlights = (gcnew System::Windows::Forms::Button());
			this->ViewFlightsButton = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->MyFlights);
			this->panel1->Controls->Add(this->ViewFlightsButton);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(406, 753);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Pilot_Panel::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(89, 107);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(222, 211);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::BurlyWood;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->Location = System::Drawing::Point(40, 597);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(310, 52);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Settings";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// MyFlights
			// 
			this->MyFlights->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->MyFlights->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MyFlights->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MyFlights->ForeColor = System::Drawing::Color::BurlyWood;
			this->MyFlights->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->MyFlights->Location = System::Drawing::Point(40, 519);
			this->MyFlights->Name = L"MyFlights";
			this->MyFlights->Size = System::Drawing::Size(310, 52);
			this->MyFlights->TabIndex = 1;
			this->MyFlights->Text = L"My Flights";
			this->MyFlights->UseVisualStyleBackColor = false;
			this->MyFlights->Click += gcnew System::EventHandler(this, &Pilot_Panel::MyFlights_Click);
			// 
			// ViewFlightsButton
			// 
			this->ViewFlightsButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->ViewFlightsButton->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewFlightsButton->ForeColor = System::Drawing::Color::BurlyWood;
			this->ViewFlightsButton->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ViewFlightsButton->Location = System::Drawing::Point(40, 443);
			this->ViewFlightsButton->Name = L"ViewFlightsButton";
			this->ViewFlightsButton->Size = System::Drawing::Size(310, 52);
			this->ViewFlightsButton->TabIndex = 0;
			this->ViewFlightsButton->Text = L"View Flights";
			this->ViewFlightsButton->UseVisualStyleBackColor = false;
			this->ViewFlightsButton->Click += gcnew System::EventHandler(this, &Pilot_Panel::ViewFlightsButton_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(401, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(784, 753);
			this->panel2->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::MidnightBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(37, 176);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(695, 395);
			this->dataGridView1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(191, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(366, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Available Flights";
			// 
			// Pilot_Panel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1186, 657);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MaximumSize = System::Drawing::Size(1204, 704);
			this->MinimumSize = System::Drawing::Size(1204, 704);
			this->Name = L"Pilot_Panel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pilot_Panel";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void ViewFlightsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// Make DataGridView and label visible
	dataGridView1->Visible = true;
	label1->Visible = true;

	this->dataGridView1->Location = System::Drawing::Point(44, 179);
	// Clear existing rows
	dataGridView1->Rows->Clear();

	// Database connection string
	String^ connectionString = "Data Source=HAMZA\\SQLEXPRESS;Initial Catalog=FlightManagementSystem;Integrated Security=True";
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		// Open connection
		connection->Open();

		// SQL query to fetch flight data based on the new table structure
		String^ query = "SELECT flight_number, origin, destination, departure_time, arrival_time, pilot_userid, crew_userid, executive_seats, business_seats "
			"FROM Flight";  // Table name updated to 'Flight'

		SqlCommand^ command = gcnew SqlCommand(query, connection);
		SqlDataReader^ reader = command->ExecuteReader();

		// Add columns dynamically to match the new schema
		dataGridView1->Columns->Clear();
		dataGridView1->Columns->Add("flight_number", "Flight Number");
		dataGridView1->Columns->Add("origin", "Origin");
		dataGridView1->Columns->Add("destination", "Destination");
		dataGridView1->Columns->Add("departure_time", "Departure Time");
		dataGridView1->Columns->Add("arrival_time", "Arrival Time");
		//dataGridView1->Columns->Add("pilot_userid", "Pilot User ID");
		//dataGridView1->Columns->Add("crew_userid", "Crew User ID");
		dataGridView1->Columns->Add("executive_seats", "Executive Seats");
		dataGridView1->Columns->Add("business_seats", "Business Seats");

		// Loop through the data and add rows to the DataGridView
		while (reader->Read()) {
			int rowIndex = dataGridView1->Rows->Add();
			DataGridViewRow^ row = dataGridView1->Rows[rowIndex];

			// Populate each cell with data from the reader
			row->Cells["flight_number"]->Value = reader["flight_number"]->ToString();
			row->Cells["origin"]->Value = reader["origin"]->ToString();
			row->Cells["destination"]->Value = reader["destination"]->ToString();
			row->Cells["departure_time"]->Value = reader["departure_time"]->ToString();
			row->Cells["arrival_time"]->Value = reader["arrival_time"]->ToString();
			//row->Cells["pilot_userid"]->Value = reader["pilot_userid"]->ToString();
			//row->Cells["crew_userid"]->Value = reader["crew_userid"]->ToString();
			row->Cells["executive_seats"]->Value = reader["executive_seats"]->ToString();
			row->Cells["business_seats"]->Value = reader["business_seats"]->ToString();
		}

		// Check if no rows are returned
		if (dataGridView1->Rows->Count == 0) {
			MessageBox::Show("No flights found in the system.");
		}
	}
	catch (Exception^ ex) {
		// Handle any errors during the query execution
		MessageBox::Show("Error: " + ex->Message);
	}
	finally {
		// Close the connection after query execution
		connection->Close();
	}
}
private: System::Void MyFlights_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentUserId = LoggedInUser::UserId;

	if (currentUserId == -1) {
		MessageBox::Show("No user is logged in.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	try {
		// Setup database connection
		String^ connectionString = "Data Source=HAMZA\\SQLEXPRESS;Initial Catalog=FlightManagementSystem;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();

		// Query to get flights where the current user is either a pilot or crew member
		String^ query = "SELECT flightid AS [Flight ID], flight_number AS [Flight Number], departure_time AS [Departure Time], "
			"arrival_time AS [Arrival Time], origin AS [Origin], destination AS [Destination] "
			"FROM Flight "
			"WHERE pilot_userid = @userId OR crew_userid = @userId";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@userId", currentUserId);

		// Create a data adapter to fill the DataTable
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
		DataTable^ dataTable = gcnew DataTable();
		dataAdapter->Fill(dataTable);

		// Close the connection
		connection->Close();

		// Bind the DataTable to the DataGridView
		dataGridView1->DataSource = dataTable;

		// Notify user if no data is found
		if (dataTable->Rows->Count == 0) {
			MessageBox::Show("You are not Flying", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


};
}
