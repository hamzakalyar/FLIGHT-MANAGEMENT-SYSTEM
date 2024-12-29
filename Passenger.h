#pragma once
#include"LoggedinUser.h"

namespace AIRLINES {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Passenger
	/// </summary>
	public ref class Passenger : public System::Windows::Forms::Form
	{
	public:
		Passenger(void)
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
		~Passenger()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ ViewFlights;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ ViewBooking;
	private: System::Windows::Forms::Button^ SearchFlight;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ BookSeat;
	private: System::Windows::Forms::Button^ button2;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Passenger::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ViewBooking = (gcnew System::Windows::Forms::Button());
			this->ViewFlights = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->BookSeat = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SearchFlight = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
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
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->ViewBooking);
			this->panel1->Controls->Add(this->ViewFlights);
			this->panel1->Location = System::Drawing::Point(2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(406, 753);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(99, 79);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 173);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button2->Location = System::Drawing::Point(30, 551);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(350, 50);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Cancel Booking";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Passenger::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->Location = System::Drawing::Point(30, 395);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(350, 50);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Book Flights.";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Passenger::button1_Click);
			// 
			// ViewBooking
			// 
			this->ViewBooking->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ViewBooking.BackgroundImage")));
			this->ViewBooking->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ViewBooking->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ViewBooking->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewBooking->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ViewBooking.Image")));
			this->ViewBooking->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ViewBooking->Location = System::Drawing::Point(30, 475);
			this->ViewBooking->Name = L"ViewBooking";
			this->ViewBooking->Size = System::Drawing::Size(350, 50);
			this->ViewBooking->TabIndex = 2;
			this->ViewBooking->Text = L"View Bookings";
			this->ViewBooking->UseVisualStyleBackColor = true;
			this->ViewBooking->Click += gcnew System::EventHandler(this, &Passenger::ViewBooking_Click);
			// 
			// ViewFlights
			// 
			this->ViewFlights->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->ViewFlights->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ViewFlights.BackgroundImage")));
			this->ViewFlights->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ViewFlights->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ViewFlights->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewFlights->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ViewFlights.Image")));
			this->ViewFlights->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->ViewFlights->Location = System::Drawing::Point(30, 318);
			this->ViewFlights->Name = L"ViewFlights";
			this->ViewFlights->Size = System::Drawing::Size(350, 50);
			this->ViewFlights->TabIndex = 0;
			this->ViewFlights->Text = L"View Flights.";
			this->ViewFlights->UseVisualStyleBackColor = false;
			this->ViewFlights->Click += gcnew System::EventHandler(this, &Passenger::ViewFlights_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->BookSeat);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->SearchFlight);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(400, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(784, 753);
			this->panel2->TabIndex = 1;
			// 
			// BookSeat
			// 
			this->BookSeat->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BookSeat.BackgroundImage")));
			this->BookSeat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BookSeat->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BookSeat->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->BookSeat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BookSeat.Image")));
			this->BookSeat->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->BookSeat->Location = System::Drawing::Point(161, 656);
			this->BookSeat->Name = L"BookSeat";
			this->BookSeat->Size = System::Drawing::Size(485, 50);
			this->BookSeat->TabIndex = 6;
			this->BookSeat->Text = L"Book Seats.";
			this->BookSeat->UseVisualStyleBackColor = true;
			this->BookSeat->Visible = false;
			this->BookSeat->Click += gcnew System::EventHandler(this, &Passenger::BookSeat_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(237, 79);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(309, 27);
			this->textBox1->TabIndex = 4;
			this->textBox1->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::MidnightBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(45, 195);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(693, 396);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(237, 126);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(309, 27);
			this->textBox2->TabIndex = 5;
			this->textBox2->Visible = false;
			// 
			// SearchFlight
			// 
			this->SearchFlight->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SearchFlight.BackgroundImage")));
			this->SearchFlight->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SearchFlight->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchFlight->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->SearchFlight->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SearchFlight.Image")));
			this->SearchFlight->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->SearchFlight->Location = System::Drawing::Point(570, 92);
			this->SearchFlight->Name = L"SearchFlight";
			this->SearchFlight->Size = System::Drawing::Size(204, 50);
			this->SearchFlight->TabIndex = 1;
			this->SearchFlight->Text = L"Search Flights.";
			this->SearchFlight->UseVisualStyleBackColor = true;
			this->SearchFlight->Visible = false;
			this->SearchFlight->Click += gcnew System::EventHandler(this, &Passenger::SearchFlight_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(14, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Origon :";
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(241, 160);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"AVAILABLE FLIGHTS";
			this->label1->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(14, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(210, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Enter Destination :";
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &Passenger::label3_Click);
			// 
			// Passenger
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
			this->Name = L"Passenger";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Passenger";
			this->Load += gcnew System::EventHandler(this, &Passenger::Passenger_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}

		private: System::Void Passenger_Load(System::Object^ sender, System::EventArgs^ e) {
			// Define columns for the DataGridView
			dataGridView1->Columns->Add("flight_number", "Flight Number");
			dataGridView1->Columns->Add("origin", "Origin");
			dataGridView1->Columns->Add("destination", "Destination");
			dataGridView1->Columns->Add("departure_time", "Departure Time");
			dataGridView1->Columns->Add("arrival_time", "Arrival Time");
			dataGridView1->Columns->Add("status", "Status");
		}

#pragma endregion
	
	
private: System::Void ViewFlights_Click(System::Object^ sender, System::EventArgs^ e)
{
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


		     


    private: System::Void SearchFlight_Click(System::Object^ sender, System::EventArgs^ e)
	{
	BookSeat->Visible = true;
	dataGridView1->Visible = true;
	// Clear existing rows in the DataGridView
	dataGridView1->Rows->Clear();

	// Get the origin and destination from the TextBoxes
	String^ origin = textBox1->Text;
	String^ destination = textBox2->Text;

	// Validate input fields
	if (String::IsNullOrWhiteSpace(origin) || String::IsNullOrWhiteSpace(destination)) {
		MessageBox::Show("Please enter both origin and destination.");
		return;
	}

	// Database connection string
	String^ connectionString = "Data Source=HAMZA\\SQLEXPRESS;Initial Catalog=FlightManagementSystem;Integrated Security=True";
	SqlConnection^ connection = gcnew SqlConnection(connectionString);

	try {
		// Open the database connection
		connection->Open();

		// SQL query to fetch flights based on origin and destination
		String^ query = "SELECT flight_number, origin, destination, departure_time, arrival_time, pilot_userid, crew_userid, executive_seats, business_seats "
			"FROM Flight WHERE origin = @origin AND destination = @destination";

		// Create and prepare the SQL command
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@origin", origin);
		command->Parameters->AddWithValue("@destination", destination);

		// Execute the query
		SqlDataReader^ reader = command->ExecuteReader();

		// Add columns to the DataGridView if not already added
		if (dataGridView1->Columns->Count == 0) {
			dataGridView1->Columns->Add("flight_number", "Flight Number");
			dataGridView1->Columns->Add("origin", "Origin");
			dataGridView1->Columns->Add("destination", "Destination");
			dataGridView1->Columns->Add("departure_time", "Departure Time");
			dataGridView1->Columns->Add("arrival_time", "Arrival Time");
			//dataGridView1->Columns->Add("pilot_userid", "Pilot User ID");
			//dataGridView1->Columns->Add("crew_userid", "Crew User ID");
			dataGridView1->Columns->Add("executive_seats", "Executive Seats");
			dataGridView1->Columns->Add("business_seats", "Business Seats");
		}

		// Populate the DataGridView with the fetched flight records
		while (reader->Read()) {
			int rowIndex = dataGridView1->Rows->Add();
			DataGridViewRow^ row = dataGridView1->Rows[rowIndex];

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

		// Show a message if no flights match the criteria
		if (dataGridView1->Rows->Count == 0) {
			MessageBox::Show("No flights found for the specified origin and destination.");
		}
	}
	catch (Exception^ ex) {
		// Show an error message if something goes wrong
		MessageBox::Show("Error: " + ex->Message);
	}
	finally {
		// Close the database connection
		connection->Close();
	}
}


private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Visible = false;
	label2->Visible = true;
	label3->Visible = true;
	textBox1->Visible = true;
	textBox2->Visible = true;
	SearchFlight->Visible = true;
	label1->Visible = false;
	
}

private: System::Void BookSeat_Click(System::Object^ sender, System::EventArgs^ e) {
	// Step 1: Prompt user for flight number
	String^ flightNumber = "";
	Form^ flightInputForm = gcnew Form();
	flightInputForm->Text = "Flight Number Input";
	flightInputForm->Size = System::Drawing::Size(300, 150);

	Label^ flightLabel = gcnew Label();
	flightLabel->Text = "Enter Flight Number:";
	flightLabel->Location = System::Drawing::Point(10, 10);
	flightLabel->Size = System::Drawing::Size(250, 20);

	TextBox^ flightTextBox = gcnew TextBox();
	flightTextBox->Location = System::Drawing::Point(10, 40);
	flightTextBox->Size = System::Drawing::Size(200, 20);

	Button^ flightSubmitButton = gcnew Button();
	flightSubmitButton->Text = "OK";
	flightSubmitButton->Location = System::Drawing::Point(10, 80);
	flightSubmitButton->Size = System::Drawing::Size(50, 30);
	flightSubmitButton->DialogResult = System::Windows::Forms::DialogResult::OK;

	flightInputForm->Controls->Add(flightLabel);
	flightInputForm->Controls->Add(flightTextBox);
	flightInputForm->Controls->Add(flightSubmitButton);
	flightInputForm->AcceptButton = flightSubmitButton;

	if (flightInputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		flightNumber = flightTextBox->Text;
	}

	if (String::IsNullOrWhiteSpace(flightNumber)) {
		MessageBox::Show("Flight number is required.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Step 2: Prompt user for seat type
	String^ seatType = "";
	Form^ seatInputForm = gcnew Form();
	seatInputForm->Text = "Seat Type Input";
	seatInputForm->Size = System::Drawing::Size(300, 150);

	Label^ seatLabel = gcnew Label();
	seatLabel->Text = "Enter Seat Type (Executive/Business):";
	seatLabel->Location = System::Drawing::Point(10, 10);
	seatLabel->Size = System::Drawing::Size(250, 20);

	TextBox^ seatTextBox = gcnew TextBox();
	seatTextBox->Location = System::Drawing::Point(10, 40);
	seatTextBox->Size = System::Drawing::Size(200, 20);

	Button^ seatSubmitButton = gcnew Button();
	seatSubmitButton->Text = "OK";
	seatSubmitButton->Location = System::Drawing::Point(10, 80);
	seatSubmitButton->Size = System::Drawing::Size(50, 30);
	seatSubmitButton->DialogResult = System::Windows::Forms::DialogResult::OK;

	seatInputForm->Controls->Add(seatLabel);
	seatInputForm->Controls->Add(seatTextBox);
	seatInputForm->Controls->Add(seatSubmitButton);
	seatInputForm->AcceptButton = seatSubmitButton;

	if (seatInputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		seatType = seatTextBox->Text;
	}

	if (String::IsNullOrWhiteSpace(seatType) ||
		!(seatType->ToLower() == "executive" || seatType->ToLower() == "business")) {
		MessageBox::Show("Invalid seat type. Please enter Executive or Business.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Step 3: Prompt user for number of seats
	String^ numberOfSeatsStr = "";
	Form^ numberOfSeatsInputForm = gcnew Form();
	numberOfSeatsInputForm->Text = "Number of Seats Input";
	numberOfSeatsInputForm->Size = System::Drawing::Size(300, 150);

	Label^ numberOfSeatsLabel = gcnew Label();
	numberOfSeatsLabel->Text = "Enter Number of Seats:";
	numberOfSeatsLabel->Location = System::Drawing::Point(10, 10);
	numberOfSeatsLabel->Size = System::Drawing::Size(250, 20);

	TextBox^ numberOfSeatsTextBox = gcnew TextBox();
	numberOfSeatsTextBox->Location = System::Drawing::Point(10, 40);
	numberOfSeatsTextBox->Size = System::Drawing::Size(200, 20);

	Button^ numberOfSeatsSubmitButton = gcnew Button();
	numberOfSeatsSubmitButton->Text = "OK";
	numberOfSeatsSubmitButton->Location = System::Drawing::Point(10, 80);
	numberOfSeatsSubmitButton->Size = System::Drawing::Size(50, 30);
	numberOfSeatsSubmitButton->DialogResult = System::Windows::Forms::DialogResult::OK;

	numberOfSeatsInputForm->Controls->Add(numberOfSeatsLabel);
	numberOfSeatsInputForm->Controls->Add(numberOfSeatsTextBox);
	numberOfSeatsInputForm->Controls->Add(numberOfSeatsSubmitButton);
	numberOfSeatsInputForm->AcceptButton = numberOfSeatsSubmitButton;

	if (numberOfSeatsInputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		numberOfSeatsStr = numberOfSeatsTextBox->Text;
	}

	if (String::IsNullOrWhiteSpace(numberOfSeatsStr)) {
		MessageBox::Show("Number of seats is required.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	int numberOfSeats = Convert::ToInt32(numberOfSeatsStr);
	if (numberOfSeats <= 0) {
		MessageBox::Show("Please enter a valid number of seats.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Step 4: Get current user ID
	int currentUserId = LoggedInUser::UserId;  // Use the logged-in user's ID
	if (currentUserId == -1) {
		MessageBox::Show("No user is logged in.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Step 5: Database operations for seat booking
	try {
		String^ connectionString = "Data Source=HAMZA\\SQLEXPRESS;Initial Catalog=FlightManagementSystem;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();

		// Check seat availability
		String^ availabilityQuery = "SELECT " + seatType->ToLower() + "_seats FROM Flight WHERE flight_number = @flightNumber";
		SqlCommand^ availabilityCommand = gcnew SqlCommand(availabilityQuery, connection);
		availabilityCommand->Parameters->AddWithValue("@flightNumber", flightNumber);

		Object^ availableSeats = availabilityCommand->ExecuteScalar();
		if (availableSeats == nullptr) {
			MessageBox::Show("Flight not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			connection->Close();
			return;
		}

		int seats = Convert::ToInt32(availableSeats);
		if (seats < numberOfSeats) {
			MessageBox::Show("Not enough seats available in the selected category.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			connection->Close();
			return;
		}

		// Update seat count and book the seats
		String^ updateSeatsQuery = "UPDATE Flight SET " + seatType->ToLower() + "_seats = " + seatType->ToLower() + "_seats - @numberOfSeats WHERE flight_number = @flightNumber";
		SqlCommand^ updateSeatsCommand = gcnew SqlCommand(updateSeatsQuery, connection);
		updateSeatsCommand->Parameters->AddWithValue("@flightNumber", flightNumber);
		updateSeatsCommand->Parameters->AddWithValue("@numberOfSeats", numberOfSeats);
		updateSeatsCommand->ExecuteNonQuery();

		// Insert booking(s) into the Booking table
		for (int i = 0; i < numberOfSeats; i++) {
			String^ bookingQuery = "INSERT INTO Booking (flight_number, userid, booking_date, seat_type) VALUES (@flightNumber, @userId, @bookingDate, @seatType)";
			SqlCommand^ bookingCommand = gcnew SqlCommand(bookingQuery, connection);
			bookingCommand->Parameters->AddWithValue("@flightNumber", flightNumber);
			bookingCommand->Parameters->AddWithValue("@userId", currentUserId);  // Use the logged-in user ID
			bookingCommand->Parameters->AddWithValue("@bookingDate", DateTime::Now.Date);
			bookingCommand->Parameters->AddWithValue("@seatType", seatType);
			bookingCommand->ExecuteNonQuery();
		}

		connection->Close();
		MessageBox::Show("Booking successful for " + numberOfSeats + " seat(s)!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}





private: System::Void SetupDataGridView() {
	// Clear any existing columns (if any)
	dataGridView1->Columns->Clear();

	// Add columns with the correct names matching your SQL query
	dataGridView1->Columns->Add("booking_id", "Booking ID");
	dataGridView1->Columns->Add("flight_number", "Flight Number");
	dataGridView1->Columns->Add("seat_type", "Seat Type");
	dataGridView1->Columns->Add("booking_date", "Booking Date");
}


private: System::Void ViewBooking_Click(System::Object^ sender, System::EventArgs^ e) {
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

		// Query to get bookings for the current user
		String^ query = "SELECT booking_id, flight_number, seat_type, booking_date FROM Booking WHERE userid = @userId";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@userId", currentUserId);

		// Execute query and read data
		SqlDataReader^ reader = command->ExecuteReader();
		String^ bookings = "";

		// Loop through the data and build the string for MessageBox
		while (reader->Read()) {
			bookings += "Booking ID: " + reader["booking_id"]->ToString() + "\n";
			bookings += "Flight Number: " + reader["flight_number"]->ToString() + "\n";
			bookings += "Seat Type: " + reader["seat_type"]->ToString() + "\n";
			bookings += "Booking Date: " + reader["booking_date"]->ToString() + "\n\n";
		}

		connection->Close();

		// Display the bookings in MessageBox or show a message if no bookings are found
		if (String::IsNullOrWhiteSpace(bookings)) {
			MessageBox::Show("No bookings found for the current user.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show(bookings, "Your Bookings", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}








private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Step 1: Get the logged-in user ID
	int currentUserId = LoggedInUser::UserId;  // Get the logged-in user ID

	if (currentUserId == -1) {
		MessageBox::Show("No user is logged in.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Step 2: Prompt user for flight number
	String^ flightNumber = "";
	Form^ flightInputForm = gcnew Form();
	flightInputForm->Text = "Flight Number Input";
	flightInputForm->Size = System::Drawing::Size(300, 150);

	Label^ flightLabel = gcnew Label();
	flightLabel->Text = "Enter Flight Number:";
	flightLabel->Location = System::Drawing::Point(10, 10);
	flightLabel->Size = System::Drawing::Size(250, 20);

	TextBox^ flightTextBox = gcnew TextBox();
	flightTextBox->Location = System::Drawing::Point(10, 40);
	flightTextBox->Size = System::Drawing::Size(200, 20);

	Button^ flightSubmitButton = gcnew Button();
	flightSubmitButton->Text = "OK";
	flightSubmitButton->Location = System::Drawing::Point(10, 80);
	flightSubmitButton->Size = System::Drawing::Size(50, 30);
	flightSubmitButton->DialogResult = System::Windows::Forms::DialogResult::OK;

	flightInputForm->Controls->Add(flightLabel);
	flightInputForm->Controls->Add(flightTextBox);
	flightInputForm->Controls->Add(flightSubmitButton);
	flightInputForm->AcceptButton = flightSubmitButton;

	if (flightInputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		flightNumber = flightTextBox->Text;
	}

	if (String::IsNullOrWhiteSpace(flightNumber)) {
		MessageBox::Show("Flight number is required.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Step 3: Prompt user for seat type
	String^ seatType = "";
	Form^ seatInputForm = gcnew Form();
	seatInputForm->Text = "Seat Type Input";
	seatInputForm->Size = System::Drawing::Size(300, 150);

	Label^ seatLabel = gcnew Label();
	seatLabel->Text = "Enter Seat Type (Executive/Business):";
	seatLabel->Location = System::Drawing::Point(10, 10);
	seatLabel->Size = System::Drawing::Size(250, 20);

	TextBox^ seatTextBox = gcnew TextBox();
	seatTextBox->Location = System::Drawing::Point(10, 40);
	seatTextBox->Size = System::Drawing::Size(200, 20);

	Button^ seatSubmitButton = gcnew Button();
	seatSubmitButton->Text = "OK";
	seatSubmitButton->Location = System::Drawing::Point(10, 80);
	seatSubmitButton->Size = System::Drawing::Size(50, 30);
	seatSubmitButton->DialogResult = System::Windows::Forms::DialogResult::OK;

	seatInputForm->Controls->Add(seatLabel);
	seatInputForm->Controls->Add(seatTextBox);
	seatInputForm->Controls->Add(seatSubmitButton);
	seatInputForm->AcceptButton = seatSubmitButton;

	if (seatInputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		seatType = seatTextBox->Text;
	}

	if (String::IsNullOrWhiteSpace(seatType) ||
		!(seatType->ToLower() == "executive" || seatType->ToLower() == "business")) {
		MessageBox::Show("Invalid seat type. Please enter Executive or Business.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Step 4: Prompt user for number of seats to cancel
	String^ numberOfSeatsStr = "";
	Form^ numberOfSeatsInputForm = gcnew Form();
	numberOfSeatsInputForm->Text = "Number of Seats Input";
	numberOfSeatsInputForm->Size = System::Drawing::Size(300, 150);

	Label^ numberOfSeatsLabel = gcnew Label();
	numberOfSeatsLabel->Text = "Enter Number of Seats to Cancel:";
	numberOfSeatsLabel->Location = System::Drawing::Point(10, 10);
	numberOfSeatsLabel->Size = System::Drawing::Size(250, 20);

	TextBox^ numberOfSeatsTextBox = gcnew TextBox();
	numberOfSeatsTextBox->Location = System::Drawing::Point(10, 40);
	numberOfSeatsTextBox->Size = System::Drawing::Size(200, 20);

	Button^ numberOfSeatsSubmitButton = gcnew Button();
	numberOfSeatsSubmitButton->Text = "OK";
	numberOfSeatsSubmitButton->Location = System::Drawing::Point(10, 80);
	numberOfSeatsSubmitButton->Size = System::Drawing::Size(50, 30);
	numberOfSeatsSubmitButton->DialogResult = System::Windows::Forms::DialogResult::OK;

	numberOfSeatsInputForm->Controls->Add(numberOfSeatsLabel);
	numberOfSeatsInputForm->Controls->Add(numberOfSeatsTextBox);
	numberOfSeatsInputForm->Controls->Add(numberOfSeatsSubmitButton);
	numberOfSeatsInputForm->AcceptButton = numberOfSeatsSubmitButton;

	if (numberOfSeatsInputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		numberOfSeatsStr = numberOfSeatsTextBox->Text;
	}

	int numberOfSeats = 0;
	if (String::IsNullOrWhiteSpace(numberOfSeatsStr) || !Int32::TryParse(numberOfSeatsStr, numberOfSeats) || numberOfSeats <= 0) {
		MessageBox::Show("Invalid number of seats.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Step 5: Database operations for seat cancellation
	try {
		String^ connectionString = "Data Source=HAMZA\\SQLEXPRESS;Initial Catalog=FlightManagementSystem;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		connection->Open();

		// Check if the user has any booking for the specified flight and seat type
		String^ checkBookingQuery = "SELECT COUNT(*) FROM Booking WHERE userid = @userId AND flight_number = @flightNumber AND seat_type = @seatType";
		SqlCommand^ checkBookingCommand = gcnew SqlCommand(checkBookingQuery, connection);
		checkBookingCommand->Parameters->AddWithValue("@userId", currentUserId);
		checkBookingCommand->Parameters->AddWithValue("@flightNumber", flightNumber);
		checkBookingCommand->Parameters->AddWithValue("@seatType", seatType);
		int bookingCount = Convert::ToInt32(checkBookingCommand->ExecuteScalar());

		if (bookingCount == 0) {
			MessageBox::Show("No bookings found for the current user on this flight with the specified seat type.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			connection->Close();
			return;
		}

		// Delete the specified number of bookings
		String^ deleteBookingsQuery = "DELETE TOP (@numberOfSeats) FROM Booking WHERE userid = @userId AND flight_number = @flightNumber AND seat_type = @seatType";
		SqlCommand^ deleteBookingsCommand = gcnew SqlCommand(deleteBookingsQuery, connection);
		deleteBookingsCommand->Parameters->AddWithValue("@userId", currentUserId);
		deleteBookingsCommand->Parameters->AddWithValue("@flightNumber", flightNumber);
		deleteBookingsCommand->Parameters->AddWithValue("@seatType", seatType);
		deleteBookingsCommand->Parameters->AddWithValue("@numberOfSeats", numberOfSeats);
		deleteBookingsCommand->ExecuteNonQuery();

		// Update the seat availability
		String^ updateSeatsQuery = "UPDATE Flight SET " + seatType->ToLower() + "_seats = " + seatType->ToLower() + "_seats + @numberOfSeats WHERE flight_number = @flightNumber";
		SqlCommand^ updateSeatsCommand = gcnew SqlCommand(updateSeatsQuery, connection);
		updateSeatsCommand->Parameters->AddWithValue("@flightNumber", flightNumber);
		updateSeatsCommand->Parameters->AddWithValue("@numberOfSeats", numberOfSeats);
		updateSeatsCommand->ExecuteNonQuery();

		connection->Close();
		MessageBox::Show("Seats canceled successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

};
}
