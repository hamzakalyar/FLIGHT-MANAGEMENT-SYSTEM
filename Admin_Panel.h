#pragma once
#include "Add_Flight.h"

using namespace System;
using namespace System::Windows::Forms;


public ref class InputDialog : public Form
{
public:
    InputDialog()
    {
        this->Text = "Enter Flight Number";
        this->Size = System::Drawing::Size(300, 150);

        Label^ label = gcnew Label();
        label->Text = "Flight Number:";
        label->Location = System::Drawing::Point(10, 20);
        label->AutoSize = true;

        textBox = gcnew TextBox();
        textBox->Location = System::Drawing::Point(120, 20);
        textBox->Width = 150;

        Button^ okButton = gcnew Button();
        okButton->Text = "OK";
        okButton->DialogResult = System::Windows::Forms::DialogResult::OK;
        okButton->Location = System::Drawing::Point(100, 60);
        okButton->Click += gcnew EventHandler(this, &InputDialog::OnOkButtonClick);

        this->Controls->Add(label);
        this->Controls->Add(textBox);
        this->Controls->Add(okButton);
        this->AcceptButton = okButton;
    }

    String^ GetInput()
    {
        return textBox->Text;
    }

private:
    TextBox^ textBox;

    void OnOkButtonClick(Object^ sender, EventArgs^ e)
    {
        this->Close(); // Close the dialog when OK is clicked
    }
private: System::Void InitializeComponent() {
    this->SuspendLayout();
    // 
    // InputDialog
    // 
    this->ClientSize = System::Drawing::Size(893, 531);
    this->Name = L"InputDialog";
    this->ResumeLayout(false);

}
};



#pragma once

using namespace System;
using namespace System::Windows::Forms;

public ref class EditFlightDialog : public Form
{
public:
    EditFlightDialog(String^ flightNumber, String^ origin, String^ destination, String^ departureTime, String^ arrivalTime, String^ executiveSeats, String^ businessSeats, String^ pilotUserID, String^ crewUserID)
    {
        this->Text = "Edit Flight";
        this->Size = System::Drawing::Size(400, 450);  // Adjusted size for additional fields

        // Flight Number
        Label^ labelFlightNumber = gcnew Label();
        labelFlightNumber->Text = "Flight Number:";
        labelFlightNumber->Location = System::Drawing::Point(10, 20);
        labelFlightNumber->AutoSize = true;

        textBoxFlightNumber = gcnew TextBox();
        textBoxFlightNumber->Location = System::Drawing::Point(150, 20);
        textBoxFlightNumber->Width = 200;
        textBoxFlightNumber->Text = flightNumber;

        // Origin
        Label^ labelOrigin = gcnew Label();
        labelOrigin->Text = "Origin:";
        labelOrigin->Location = System::Drawing::Point(10, 60);
        labelOrigin->AutoSize = true;

        textBoxOrigin = gcnew TextBox();
        textBoxOrigin->Location = System::Drawing::Point(150, 60);
        textBoxOrigin->Width = 200;
        textBoxOrigin->Text = origin;

        // Destination
        Label^ labelDestination = gcnew Label();
        labelDestination->Text = "Destination:";
        labelDestination->Location = System::Drawing::Point(10, 100);
        labelDestination->AutoSize = true;

        textBoxDestination = gcnew TextBox();
        textBoxDestination->Location = System::Drawing::Point(150, 100);
        textBoxDestination->Width = 200;
        textBoxDestination->Text = destination;

        // Departure Time
        Label^ labelDepartureTime = gcnew Label();
        labelDepartureTime->Text = "Departure Time:";
        labelDepartureTime->Location = System::Drawing::Point(10, 140);
        labelDepartureTime->AutoSize = true;

        textBoxDepartureTime = gcnew TextBox();
        textBoxDepartureTime->Location = System::Drawing::Point(150, 140);
        textBoxDepartureTime->Width = 200;
        textBoxDepartureTime->Text = departureTime;

        // Arrival Time
        Label^ labelArrivalTime = gcnew Label();
        labelArrivalTime->Text = "Arrival Time:";
        labelArrivalTime->Location = System::Drawing::Point(10, 180);
        labelArrivalTime->AutoSize = true;

        textBoxArrivalTime = gcnew TextBox();
        textBoxArrivalTime->Location = System::Drawing::Point(150, 180);
        textBoxArrivalTime->Width = 200;
        textBoxArrivalTime->Text = arrivalTime;

        // Executive Seats
        Label^ labelExecutiveSeats = gcnew Label();
        labelExecutiveSeats->Text = "Executive Seats:";
        labelExecutiveSeats->Location = System::Drawing::Point(10, 260);
        labelExecutiveSeats->AutoSize = true;

        textBoxExecutiveSeats = gcnew TextBox();
        textBoxExecutiveSeats->Location = System::Drawing::Point(150, 260);
        textBoxExecutiveSeats->Width = 200;
        textBoxExecutiveSeats->Text = executiveSeats;

        // Business Seats
        Label^ labelBusinessSeats = gcnew Label();
        labelBusinessSeats->Text = "Business Seats:";
        labelBusinessSeats->Location = System::Drawing::Point(10, 300);
        labelBusinessSeats->AutoSize = true;

        textBoxBusinessSeats = gcnew TextBox();
        textBoxBusinessSeats->Location = System::Drawing::Point(150, 300);
        textBoxBusinessSeats->Width = 200;
        textBoxBusinessSeats->Text = businessSeats;

        // Pilot User ID
        Label^ labelPilotUserID = gcnew Label();
        labelPilotUserID->Text = "Pilot User ID:";
        labelPilotUserID->Location = System::Drawing::Point(10, 340);
        labelPilotUserID->AutoSize = true;

        textBoxPilotUserID = gcnew TextBox();
        textBoxPilotUserID->Location = System::Drawing::Point(150, 340);
        textBoxPilotUserID->Width = 200;
        textBoxPilotUserID->Text = pilotUserID;

        // Crew User ID
        Label^ labelCrewUserID = gcnew Label();
        labelCrewUserID->Text = "Crew User ID:";
        labelCrewUserID->Location = System::Drawing::Point(10, 380);
        labelCrewUserID->AutoSize = true;

        textBoxCrewUserID = gcnew TextBox();
        textBoxCrewUserID->Location = System::Drawing::Point(150, 380);
        textBoxCrewUserID->Width = 200;
        textBoxCrewUserID->Text = crewUserID;

        // OK Button
        Button^ okButton = gcnew Button();
        okButton->Text = "OK";
        okButton->DialogResult = System::Windows::Forms::DialogResult::OK;
        okButton->Location = System::Drawing::Point(150, 420);
        okButton->Click += gcnew EventHandler(this, &EditFlightDialog::OnOkButtonClick);

        // Add controls to the form
        this->Controls->Add(labelFlightNumber);
        this->Controls->Add(textBoxFlightNumber);
        this->Controls->Add(labelOrigin);
        this->Controls->Add(textBoxOrigin);
        this->Controls->Add(labelDestination);
        this->Controls->Add(textBoxDestination);
        this->Controls->Add(labelDepartureTime);
        this->Controls->Add(textBoxDepartureTime);
        this->Controls->Add(labelArrivalTime);
        this->Controls->Add(textBoxArrivalTime);
        this->Controls->Add(labelExecutiveSeats);
        this->Controls->Add(textBoxExecutiveSeats);
        this->Controls->Add(labelBusinessSeats);
        this->Controls->Add(textBoxBusinessSeats);
        this->Controls->Add(labelPilotUserID);
        this->Controls->Add(textBoxPilotUserID);
        this->Controls->Add(labelCrewUserID);
        this->Controls->Add(textBoxCrewUserID);
        this->Controls->Add(okButton);
    }

    // Getter methods for new fields
    String^ GetFlightNumber() { return textBoxFlightNumber->Text; }
    String^ GetOrigin() { return textBoxOrigin->Text; }
    String^ GetDestination() { return textBoxDestination->Text; }
    String^ GetDepartureTime() { return textBoxDepartureTime->Text; }
    String^ GetArrivalTime() { return textBoxArrivalTime->Text; }
    String^ GetExecutiveSeats() { return textBoxExecutiveSeats->Text; }
    String^ GetBusinessSeats() { return textBoxBusinessSeats->Text; }
    String^ GetPilotUserID() { return textBoxPilotUserID->Text; }
    String^ GetCrewUserID() { return textBoxCrewUserID->Text; }

private:
    TextBox^ textBoxFlightNumber;
    TextBox^ textBoxOrigin;
    TextBox^ textBoxDestination;
    TextBox^ textBoxDepartureTime;
    TextBox^ textBoxArrivalTime;
    TextBox^ textBoxExecutiveSeats;
    TextBox^ textBoxBusinessSeats;
    TextBox^ textBoxPilotUserID;
    TextBox^ textBoxCrewUserID;

    void OnOkButtonClick(Object^ sender, EventArgs^ e)
    {
        this->Close(); // Close the dialog when OK is clicked
    }
};




namespace AIRLINES {
    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Data::SqlClient;
    using namespace Microsoft::VisualBasic;


    public ref class Admin_Panel : public System::Windows::Forms::Form
    {
    public:
        Admin_Panel(void)
        {
            InitializeComponent();
        }

    protected:
        ~Admin_Panel()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        // Declare buttons and components here

        System::Windows::Forms::Button^ button2;
        System::Windows::Forms::Button^ button3;
        System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ ManageSalaries;
    private: System::Windows::Forms::Button^ StaffSalaries;
    private: System::Windows::Forms::PictureBox^ pictureBox1;

           System::ComponentModel::Container^ components;

        // Method to initialize components
        void InitializeComponent(void)
        {
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin_Panel::typeid));
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->StaffSalaries = (gcnew System::Windows::Forms::Button());
            this->ManageSalaries = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel2->SuspendLayout();
            this->SuspendLayout();
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
                static_cast<System::Int32>(static_cast<System::Byte>(15)));
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::BurlyWood;
            this->button2->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button2->Location = System::Drawing::Point(50, 370);
            this->button2->Margin = System::Windows::Forms::Padding(4);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(315, 55);
            this->button2->TabIndex = 1;
            this->button2->Text = L"View Users";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &Admin_Panel::button2_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
                static_cast<System::Int32>(static_cast<System::Byte>(15)));
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::BurlyWood;
            this->button3->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button3->Location = System::Drawing::Point(50, 562);
            this->button3->Margin = System::Windows::Forms::Padding(4);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(315, 55);
            this->button3->TabIndex = 2;
            this->button3->Text = L"Settings";
            this->button3->UseVisualStyleBackColor = false;
            // 
            // dataGridView1
            // 
            dataGridViewCellStyle1->Padding = System::Windows::Forms::Padding(1);
            this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
            this->dataGridView1->BackgroundColor = System::Drawing::Color::MidnightBlue;
            this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
            dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::BottomCenter;
            dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
            this->dataGridView1->ColumnHeadersHeight = 29;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
            this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->dataGridView1->Location = System::Drawing::Point(71, 108);
            this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
            this->dataGridView1->MultiSelect = false;
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
            this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataGridView1->Size = System::Drawing::Size(565, 381);
            this->dataGridView1->TabIndex = 3;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Admin_Panel::dataGridView1_CellContentClick);
            // 
            // panel1
            // 
            this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
            this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel1->Controls->Add(this->pictureBox1);
            this->panel1->Controls->Add(this->button9);
            this->panel1->Controls->Add(this->button7);
            this->panel1->Controls->Add(this->button3);
            this->panel1->Controls->Add(this->button2);
            this->panel1->Controls->Add(this->button1);
            this->panel1->Location = System::Drawing::Point(-4, 2);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(413, 757);
            this->panel1->TabIndex = 4;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
            this->pictureBox1->Location = System::Drawing::Point(91, 68);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(220, 180);
            this->pictureBox1->TabIndex = 5;
            this->pictureBox1->TabStop = false;
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
                static_cast<System::Int32>(static_cast<System::Byte>(15)));
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->ForeColor = System::Drawing::Color::BurlyWood;
            this->button9->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button9->Location = System::Drawing::Point(50, 498);
            this->button9->Margin = System::Windows::Forms::Padding(4);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(315, 55);
            this->button9->TabIndex = 4;
            this->button9->Text = L"View Staff";
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &Admin_Panel::button9_Click);
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
                static_cast<System::Int32>(static_cast<System::Byte>(15)));
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->ForeColor = System::Drawing::Color::BurlyWood;
            this->button7->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button7->Location = System::Drawing::Point(50, 434);
            this->button7->Margin = System::Windows::Forms::Padding(4);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(315, 55);
            this->button7->TabIndex = 3;
            this->button7->Text = L"View Pilots";
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &Admin_Panel::button7_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
                static_cast<System::Int32>(static_cast<System::Byte>(15)));
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::BurlyWood;
            this->button1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button1->Location = System::Drawing::Point(50, 306);
            this->button1->Margin = System::Windows::Forms::Padding(4);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(315, 55);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Manage Flights";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &Admin_Panel::button1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
            this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->label1->Location = System::Drawing::Point(242, 32);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(243, 47);
            this->label1->TabIndex = 3;
            this->label1->Text = L"DashBoard";
            // 
            // panel2
            // 
            this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
            this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel2->Controls->Add(this->StaffSalaries);
            this->panel2->Controls->Add(this->ManageSalaries);
            this->panel2->Controls->Add(this->button6);
            this->panel2->Controls->Add(this->label1);
            this->panel2->Controls->Add(this->button4);
            this->panel2->Controls->Add(this->button5);
            this->panel2->Controls->Add(this->dataGridView1);
            this->panel2->Location = System::Drawing::Point(409, 2);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(780, 757);
            this->panel2->TabIndex = 5;
            // 
            // StaffSalaries
            // 
            this->StaffSalaries->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
                static_cast<System::Int32>(static_cast<System::Byte>(15)));
            this->StaffSalaries->Cursor = System::Windows::Forms::Cursors::Hand;
            this->StaffSalaries->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->StaffSalaries->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->StaffSalaries->ForeColor = System::Drawing::Color::BurlyWood;
            this->StaffSalaries->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->StaffSalaries->Location = System::Drawing::Point(250, 518);
            this->StaffSalaries->Margin = System::Windows::Forms::Padding(4);
            this->StaffSalaries->Name = L"StaffSalaries";
            this->StaffSalaries->Size = System::Drawing::Size(200, 55);
            this->StaffSalaries->TabIndex = 7;
            this->StaffSalaries->Text = L"Manage Salaries";
            this->StaffSalaries->UseVisualStyleBackColor = false;
            this->StaffSalaries->Visible = false;
            this->StaffSalaries->Click += gcnew System::EventHandler(this, &Admin_Panel::StaffSalaries_Click);
            // 
            // ManageSalaries
            // 
            this->ManageSalaries->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
                static_cast<System::Int32>(static_cast<System::Byte>(15)));
            this->ManageSalaries->Cursor = System::Windows::Forms::Cursors::Hand;
            this->ManageSalaries->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->ManageSalaries->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->ManageSalaries->ForeColor = System::Drawing::Color::BurlyWood;
            this->ManageSalaries->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->ManageSalaries->Location = System::Drawing::Point(250, 518);
            this->ManageSalaries->Margin = System::Windows::Forms::Padding(4);
            this->ManageSalaries->Name = L"ManageSalaries";
            this->ManageSalaries->Size = System::Drawing::Size(200, 55);
            this->ManageSalaries->TabIndex = 6;
            this->ManageSalaries->Text = L"Manage Salaries";
            this->ManageSalaries->UseVisualStyleBackColor = false;
            this->ManageSalaries->Visible = false;
            this->ManageSalaries->Click += gcnew System::EventHandler(this, &Admin_Panel::ManageSalaries_Click);
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
                static_cast<System::Int32>(static_cast<System::Byte>(15)));
            this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->ForeColor = System::Drawing::Color::BurlyWood;
            this->button6->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button6->Location = System::Drawing::Point(482, 518);
            this->button6->Margin = System::Windows::Forms::Padding(4);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(200, 55);
            this->button6->TabIndex = 5;
            this->button6->Text = L"Edit Flights";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Visible = false;
            this->button6->Click += gcnew System::EventHandler(this, &Admin_Panel::button6_Click);
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
                static_cast<System::Int32>(static_cast<System::Byte>(15)));
            this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::BurlyWood;
            this->button4->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button4->Location = System::Drawing::Point(250, 518);
            this->button4->Margin = System::Windows::Forms::Padding(4);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(200, 55);
            this->button4->TabIndex = 3;
            this->button4->Text = L"Delete Flight";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Visible = false;
            this->button4->Click += gcnew System::EventHandler(this, &Admin_Panel::button4_Click);
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
                static_cast<System::Int32>(static_cast<System::Byte>(15)));
            this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->ForeColor = System::Drawing::Color::BurlyWood;
            this->button5->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button5->Location = System::Drawing::Point(25, 518);
            this->button5->Margin = System::Windows::Forms::Padding(4);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(200, 55);
            this->button5->TabIndex = 4;
            this->button5->Text = L"Add Flight";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Visible = false;
            this->button5->Click += gcnew System::EventHandler(this, &Admin_Panel::button5_Click);
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::Color::Black;
            this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->ForeColor = System::Drawing::Color::BurlyWood;
            this->button8->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
            this->button8->Location = System::Drawing::Point(290, 536);
            this->button8->Margin = System::Windows::Forms::Padding(4);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(200, 49);
            this->button8->TabIndex = 3;
            this->button8->Text = L"Delete Flight";
            this->button8->UseVisualStyleBackColor = false;
            this->button8->Visible = false;
            // 
            // Admin_Panel
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 18);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1186, 657);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel1);
            this->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Margin = System::Windows::Forms::Padding(4);
            this->MaximumSize = System::Drawing::Size(1204, 704);
            this->MinimumSize = System::Drawing::Size(1204, 704);
            this->Name = L"Admin_Panel";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Admin Panel - Flight Management System";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->panel1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->ResumeLayout(false);

        }




    private:
        // Button to add flight data from the database
        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
        {
            // Get the flight data from the database and populate the DataGridView
			label1->Text = "Available Flights";
            PopulateDataGridView();
			StaffSalaries->Visible = false;
			ManageSalaries->Visible = false;
            // Show button4, button5, and button6
            button4->Visible = true;
            button5->Visible = true;
            button6->Visible = true;
        }


        String^ connectionString = "Data Source=HAMZA\\SQLEXPRESS;Initial Catalog=FlightManagementSystem;Integrated Security=True";
        void PopulateDataGridView()
        {
            try
            {
                SqlConnection^ connection = gcnew SqlConnection(connectionString);
                // Adjusted the SQL query to fetch data from the updated Flight table
                SqlCommand^ command = gcnew SqlCommand("SELECT flightid, flight_number, departure_time, arrival_time, origin, destination, executive_seats, business_seats FROM Flight", connection);

                connection->Open();
                SqlDataReader^ reader = command->ExecuteReader();

                SetupFlightGridColumns();

                while (reader->Read())
                {
                    AddFlightRow(reader);
                }

                reader->Close();
                connection->Close();
            }
            catch (SqlException^ sqlEx)
            {
                MessageBox::Show("Database Error: " + sqlEx->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        void SetupFlightGridColumns()
        {
            dataGridView1->Columns->Clear();
            dataGridView1->Columns->Add("Flight ID", "Flight ID");
            dataGridView1->Columns->Add("Flight Number", "Flight Number");
            dataGridView1->Columns->Add("Departure Time", "Departure Time");
            dataGridView1->Columns->Add("Arrival Time", "Arrival Time");
            dataGridView1->Columns->Add("Origin", "Origin");
            dataGridView1->Columns->Add("Destination", "Destination");
            dataGridView1->Columns->Add("Executive Seats", "Executive Seats");
            dataGridView1->Columns->Add("Business Seats", "Business Seats");
        }

        void AddFlightRow(SqlDataReader^ reader)
        {
            array<String^>^ row = {
                reader["flightid"]->ToString(),
                reader["flight_number"]->ToString(),
                reader["departure_time"]->ToString(),
                reader["arrival_time"]->ToString(),
                reader["origin"]->ToString(),
                reader["destination"]->ToString(),
                reader["executive_seats"]->ToString(),
                reader["business_seats"]->ToString()
            };

            dataGridView1->Rows->Add(row);
        }



        void PopulatePeilotGridView()
        {
            try
            {
                // Define the connection string
                SqlConnection^ connection = gcnew SqlConnection(connectionString);

                // SQL query to fetch data from the People table
                SqlCommand^ command = gcnew SqlCommand("SELECT userid, firstname, lastname, Cnic, DOB, salary, password FROM Pilot", connection);

                // Open the connection to the database
                connection->Open();

                // Execute the query and get a data reader
                SqlDataReader^ reader = command->ExecuteReader();

                // Add columns to the DataGridView
                dataGridView1->Columns->Clear();
                dataGridView1->Columns->Add("User ID", "User ID");
                dataGridView1->Columns->Add("First Name", "First Name");
                dataGridView1->Columns->Add("Last Name", "Last Name");
                dataGridView1->Columns->Add("CNIC", "CNIC");
                dataGridView1->Columns->Add("Date of Birth", "Date of Birth");
                dataGridView1->Columns->Add("Salary", "Salary");
                dataGridView1->Columns->Add("Password", "Password");

                // Read data from the database and add rows to the DataGridView
                while (reader->Read())
                {
                    String^ userId = reader["userid"]->ToString();
                    String^ firstName = reader["firstname"]->ToString();
                    String^ lastName = reader["lastname"]->ToString();
                    String^ cnic = reader["Cnic"]->ToString();
                    String^ dob = reader["DOB"]->ToString();
                    String^ salary = reader["salary"]->ToString();
                    String^ password = reader["password"]->ToString();

                    // Create a new row with the fetched data
                    array<String^>^ row = { userId, firstName, lastName, cnic, dob, salary, password };

                    // Add the row to the DataGridView
                    dataGridView1->Rows->Add(row);
                }

                // Close the reader and connection
                reader->Close();
                connection->Close();
            }
            catch (Exception^ ex)
            {
                // Handle any errors that occur during the database query
                MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        void PopulateStaffGridView()
        {
            try
            {
                // Define the connection string
                SqlConnection^ connection = gcnew SqlConnection(connectionString);

                // SQL query to fetch data from the People table
                SqlCommand^ command = gcnew SqlCommand("SELECT userid, firstname, lastname, Cnic, DOB, salary, password FROM Staff", connection);

                // Open the connection to the database
                connection->Open();

                // Execute the query and get a data reader
                SqlDataReader^ reader = command->ExecuteReader();

                // Add columns to the DataGridView
                dataGridView1->Columns->Clear();
                dataGridView1->Columns->Add("User ID", "User ID");
                dataGridView1->Columns->Add("First Name", "First Name");
                dataGridView1->Columns->Add("Last Name", "Last Name");
                dataGridView1->Columns->Add("CNIC", "CNIC");
                dataGridView1->Columns->Add("Date of Birth", "Date of Birth");
                dataGridView1->Columns->Add("Salary", "Salary");
                dataGridView1->Columns->Add("Password", "Password");

                // Read data from the database and add rows to the DataGridView
                while (reader->Read())
                {
                    String^ userId = reader["userid"]->ToString();
                    String^ firstName = reader["firstname"]->ToString();
                    String^ lastName = reader["lastname"]->ToString();
                    String^ cnic = reader["Cnic"]->ToString();
                    String^ dob = reader["DOB"]->ToString();
                    String^ salary = reader["salary"]->ToString();
                    String^ password = reader["password"]->ToString();

                    // Create a new row with the fetched data
                    array<String^>^ row = { userId, firstName, lastName, cnic, dob, salary, password };

                    // Add the row to the DataGridView
                    dataGridView1->Rows->Add(row);
                }

                // Close the reader and connection
                reader->Close();
                connection->Close();
            }
            catch (Exception^ ex)
            {
                // Handle any errors that occur during the database query
                MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }


        // Handle row click in DataGridView
        System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
        {
            // Ensure the clicked cell is not a header cell
            if (e->RowIndex >= 0)
            {
                // Get the values from the clicked row
                System::String^ flightCode = dataGridView1->Rows[e->RowIndex]->Cells[0]->Value->ToString();
                System::String^ airline = dataGridView1->Rows[e->RowIndex]->Cells[1]->Value->ToString();
                System::String^ departure = dataGridView1->Rows[e->RowIndex]->Cells[2]->Value->ToString();
                System::String^ arrival = dataGridView1->Rows[e->RowIndex]->Cells[3]->Value->ToString();
                System::String^ depTime = dataGridView1->Rows[e->RowIndex]->Cells[4]->Value->ToString();
                System::String^ arrTime = dataGridView1->Rows[e->RowIndex]->Cells[5]->Value->ToString();
                System::String^ seats = dataGridView1->Rows[e->RowIndex]->Cells[6]->Value->ToString();

                // Display the flight details in a MessageBox
                MessageBox::Show("Flight Code: " + flightCode + "\nAirline: " + airline + "\nDeparture: " + departure +
                    "\nArrival: " + arrival + "\nDeparture Time: " + depTime + "\nArrival Time: " + arrTime +
                    "\nSeats: " + seats);
            }
        }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
    {
		label1->Text = "Available Users";
		button4->Visible = false;
		button5->Visible = false;
		button6->Visible = false;
		ManageSalaries->Visible = false;
		StaffSalaries->Visible = false;
        // Populate the DataGridView with data from the Person table
        PopulatePersonsGridView();
    }
           //String^ connectionString = "Data Source=HAMZA\\SQLEXPRESS;Initial Catalog=FlightManagementSystem;Integrated Security=True";
           void PopulatePersonsGridView()
           {
               try
               {
                   // Define the connection string
                   SqlConnection^ connection = gcnew SqlConnection(connectionString);

                   // SQL query to fetch data from the People table
                   SqlCommand^ command = gcnew SqlCommand("SELECT userid, firstname, lastname, Cnic, DOB, password FROM People", connection);

                   // Open the connection to the database
                   connection->Open();

                   // Execute the query and get a data reader
                   SqlDataReader^ reader = command->ExecuteReader();

                   // Add columns to the DataGridView
                   dataGridView1->Columns->Clear();
                   dataGridView1->Columns->Add("User ID", "User ID");
                   dataGridView1->Columns->Add("First Name", "First Name");
                   dataGridView1->Columns->Add("Last Name", "Last Name");
                   dataGridView1->Columns->Add("CNIC", "CNIC");
                   dataGridView1->Columns->Add("Date of Birth", "Date of Birth");
                   dataGridView1->Columns->Add("Password", "Password");

                   // Read data from the database and add rows to the DataGridView
                   while (reader->Read())
                   {
                       String^ userId = reader["userid"]->ToString();
                       String^ firstName = reader["firstname"]->ToString();
                       String^ lastName = reader["lastname"]->ToString();
                       String^ cnic = reader["Cnic"]->ToString();
                       String^ dob = reader["DOB"]->ToString();
                       String^ password = reader["password"]->ToString();

                       // Create a new row with the fetched data
                       array<String^>^ row = { userId, firstName, lastName, cnic, dob, password };

                       // Add the row to the DataGridView
                       dataGridView1->Rows->Add(row);
                   }

                   // Close the reader and connection
                   reader->Close();
                   connection->Close();
               }
               catch (Exception^ ex)
               {
                   // Handle any errors that occur during the database query
                   MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
               }
           }


           void DeleteFlightFromDatabase(String^ flightID)
           {
               String^ connectionString = "Data Source=HAMZA\\SQLEXPRESS;Initial Catalog=FlightManagementSystem;Integrated Security=True";
               String^ query = "DELETE FROM Flight WHERE flightid = @flightid";  // Changed to use flightid

               SqlConnection^ connection = nullptr;
               SqlCommand^ command = nullptr;

               try
               {
                   connection = gcnew SqlConnection(connectionString);
                   connection->Open();

                   command = gcnew SqlCommand(query, connection);
                   command->Parameters->AddWithValue("@flightid", flightID);  // Use flightid as parameter

                   int rowsAffected = command->ExecuteNonQuery();
                   if (rowsAffected > 0)
                   {
                       MessageBox::Show("Flight successfully deleted.", "Success");
                   }
                   else
                   {
                       MessageBox::Show("No flight found with the provided flight ID.", "Error");
                   }
               }
               catch (SqlException^ ex)
               {
                   MessageBox::Show("Database error: " + ex->Message, "Error");
               }
               catch (Exception^ ex)
               {
                   MessageBox::Show("An unexpected error occurred: " + ex->Message, "Error");
               }
               finally
               {
                   if (command != nullptr)
                   {
                       delete command;
                   }
                   if (connection != nullptr)
                   {
                       connection->Close();
                       delete connection;
                   }
               }
           }


           void UpdateFlightInDatabase(String^ oldFlightID, String^ newFlightNumber, String^ newOrigin, String^ newDestination, String^ newDepartureTime, String^ newArrivalTime, String^ newExecutiveSeats, String^ newBusinessSeats, String^ newPilotUserId, String^ newCrewUserId)
           {
               String^ connectionString = "Data Source=HAMZA\\SQLEXPRESS;Initial Catalog=FlightManagementSystem;Integrated Security=True";
               SqlConnection^ connection = gcnew SqlConnection(connectionString);

               SqlCommand^ command = gcnew SqlCommand(
                   "UPDATE Flight SET flight_number = @new_flight_number, origin = @origin, destination = @destination, departure_time = @departure_time, arrival_time = @arrival_time, executive_seats = @executive_seats, business_seats = @business_seats, pilot_userid = @pilot_userid, crew_userid = @crew_userid WHERE flightid = @old_flightid",
                   connection
               );

               // Add parameters for new fields
               command->Parameters->AddWithValue("@new_flight_number", newFlightNumber);
               command->Parameters->AddWithValue("@origin", newOrigin);
               command->Parameters->AddWithValue("@destination", newDestination);
               command->Parameters->AddWithValue("@departure_time", DateTime::Parse(newDepartureTime));  // Parse DateTime properly
               command->Parameters->AddWithValue("@arrival_time", DateTime::Parse(newArrivalTime));      // Parse DateTime properly

               // Ensure that seats are integers
               command->Parameters->AddWithValue("@executive_seats", Convert::ToInt32(newExecutiveSeats));
               command->Parameters->AddWithValue("@business_seats", Convert::ToInt32(newBusinessSeats));

               // Handle possible NULL values for pilot_userid and crew_userid
               if (String::IsNullOrEmpty(newPilotUserId))
               {
                   command->Parameters->AddWithValue("@pilot_userid", DBNull::Value);
               }
               else
               {
                   command->Parameters->AddWithValue("@pilot_userid", newPilotUserId);
               }

               if (String::IsNullOrEmpty(newCrewUserId))
               {
                   command->Parameters->AddWithValue("@crew_userid", DBNull::Value);
               }
               else
               {
                   command->Parameters->AddWithValue("@crew_userid", newCrewUserId);
               }

               command->Parameters->AddWithValue("@old_flightid", oldFlightID);

               try
               {
                   connection->Open();
                   command->ExecuteNonQuery();
                   MessageBox::Show("Flight updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
               }
               catch (SqlException^ sqlEx)
               {
                   MessageBox::Show("Database Error: " + sqlEx->Message + "\nError Code: " + sqlEx->ErrorCode, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
               }
               catch (Exception^ ex)
               {
                   MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
               }
               finally
               {
                   connection->Close();
               }
           }



           System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
           {
               try
               {
                   // Show input dialog to get flight number
                   InputDialog^ inputDialog = gcnew InputDialog();
                   if (inputDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
                   {
                       String^ flightID = inputDialog->GetInput();

                       // Check if flightID is not empty
                       if (!String::IsNullOrEmpty(flightID))
                       {
                           MessageBox::Show("Selected FlightID: " + flightID);

                           // Confirm deletion
                           if (MessageBox::Show("Are you sure you want to delete this flight?",
                               "Confirm Delete", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
                           {
                               // Delete flight from the database
                               DeleteFlightFromDatabase(flightID);

                               // Refresh the DataGridView
                               MessageBox::Show("Refreshing DataGridView...");
                               PopulateDataGridView();
                           }
                       }
                       else
                       {
                           MessageBox::Show("FlightID cannot be empty.", "Error");
                       }
                   }
               }
               catch (Exception^ ex)
               {
                   String^ errorDetails = "Message: " + ex->Message + "\n";
                   errorDetails += "Source: " + ex->Source + "\n";
                   errorDetails += "Stack Trace: " + ex->StackTrace;
                   MessageBox::Show("An unexpected error occurred: \n" + errorDetails, "Error");
               }
           }



        private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
        {
            InputDialog^ inputDialog = gcnew InputDialog();
            if (inputDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
            {
                String^ flightID = inputDialog->GetInput();

                if (!String::IsNullOrEmpty(flightID))
                {
                    SqlConnection^ connection = gcnew SqlConnection(connectionString);
                    SqlCommand^ command = gcnew SqlCommand(
                        "SELECT origin, destination, departure_time, arrival_time, executive_seats, business_seats, pilot_userid, crew_userid "
                        "FROM Flight WHERE flight_number = @flight_number", connection);

                    command->Parameters->Clear();
                    command->Parameters->AddWithValue("@flight_number", flightID);

                    try
                    {
                        connection->Open();
                        SqlDataReader^ reader = command->ExecuteReader();

                        if (reader->Read())
                        {
                            String^ origin = reader["origin"]->ToString();
                            String^ destination = reader["destination"]->ToString();
                            DateTime departureTime = Convert::ToDateTime(reader["departure_time"]);
                            DateTime arrivalTime = reader["arrival_time"] == DBNull::Value ? DateTime::MinValue : Convert::ToDateTime(reader["arrival_time"]);
                            int executiveSeats = Convert::ToInt32(reader["executive_seats"]);
                            int businessSeats = Convert::ToInt32(reader["business_seats"]);
                            String^ pilotUserID = reader["pilot_userid"] == DBNull::Value ? nullptr : reader["pilot_userid"]->ToString();
                            String^ crewUserID = reader["crew_userid"] == DBNull::Value ? nullptr : reader["crew_userid"]->ToString();

                            reader->Close();

                            EditFlightDialog^ editDialog = gcnew EditFlightDialog(
                                flightID, origin, destination,
                                departureTime.ToString(), arrivalTime == DateTime::MinValue ? "" : arrivalTime.ToString(),
                                executiveSeats.ToString(), businessSeats.ToString(), pilotUserID, crewUserID);

                            if (editDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
                            {
                                String^ newFlightNumber = editDialog->GetFlightNumber();
                                String^ newOrigin = editDialog->GetOrigin();
                                String^ newDestination = editDialog->GetDestination();
                                DateTime newDepartureTime = Convert::ToDateTime(editDialog->GetDepartureTime());
                                DateTime newArrivalTime = String::IsNullOrEmpty(editDialog->GetArrivalTime()) ? DateTime::MinValue : Convert::ToDateTime(editDialog->GetArrivalTime());
                                int newExecutiveSeats = Convert::ToInt32(editDialog->GetExecutiveSeats());
                                int newBusinessSeats = Convert::ToInt32(editDialog->GetBusinessSeats());
                                String^ newPilotUserID = editDialog->GetPilotUserID();
                                String^ newCrewUserID = editDialog->GetCrewUserID();

                                UpdateFlightInDatabase(flightID, newFlightNumber, newOrigin, newDestination,
                                    newDepartureTime.ToString(), newArrivalTime == DateTime::MinValue ? nullptr : newArrivalTime.ToString(),
                                    newExecutiveSeats.ToString(), newBusinessSeats.ToString(), newPilotUserID, newCrewUserID);

                                PopulateDataGridView();
                            }
                        }
                        else
                        {
                            MessageBox::Show("No flight found with the provided flight number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        }
                    }
                    catch (SqlException^ sqlEx)
                    {
                        String^ paramDetails = "";
                        for each (SqlParameter ^ param in command->Parameters)
                        {
                            paramDetails += param->ParameterName + ": " + param->Value + "\n";
                        }

                        MessageBox::Show("Database Error: " + sqlEx->Message + "\nQuery: " + command->CommandText + "\nParameters:\n" + paramDetails,
                            "Error",
                            MessageBoxButtons::OK,
                            MessageBoxIcon::Error);
                    }
                    catch (Exception^ ex)
                    {
                        MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    }
                    finally
                    {
                        connection->Close();
                    }
                }
                else
                {
                    MessageBox::Show("Flight number cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                }
            }
        }

                

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		label1->Text = "Available Pilots";
        button4->Visible = false;
        button5->Visible = false;
        button6->Visible = false;
        StaffSalaries->Visible = false;
       // Populate the DataGridView with data from the Pilot table
	   ManageSalaries->Visible = true;
       PopulatePeilotGridView();
	}
 

    private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
    {
        label1->Text = "Available Staff";
        ManageSalaries->Visible = false;
        StaffSalaries->Visible = true;
        PopulateStaffGridView();
        button4->Visible = false;
        button5->Visible = false;
        button6->Visible = false;
    }



private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	// Create a new instance of the AddFlight form
	Add_Flight^ addFlightForm = gcnew Add_Flight();

	// Show the AddFlight form as a dialog
	addFlightForm->ShowDialog();
}



       private: System::Void ManageSalaries_Click(System::Object^ sender, System::EventArgs^ e) {
           // Step 1: Prompt the admin for the Pilot's UserID
           String^ pilotUserIdStr = "";
           Form^ userIdInputForm = gcnew Form();
           userIdInputForm->Text = "Pilot UserID Input";
           userIdInputForm->Size = System::Drawing::Size(300, 150);

           Label^ userIdLabel = gcnew Label();
           userIdLabel->Text = "Enter Pilot UserID:";
           userIdLabel->Location = System::Drawing::Point(10, 10);
           userIdLabel->Size = System::Drawing::Size(250, 20);

           TextBox^ userIdTextBox = gcnew TextBox();
           userIdTextBox->Location = System::Drawing::Point(10, 40);
           userIdTextBox->Size = System::Drawing::Size(200, 20);

           Button^ userIdSubmitButton = gcnew Button();
           userIdSubmitButton->Text = "OK";
           userIdSubmitButton->Location = System::Drawing::Point(10, 80);
           userIdSubmitButton->Size = System::Drawing::Size(50, 30);
           userIdSubmitButton->DialogResult = System::Windows::Forms::DialogResult::OK;

           userIdInputForm->Controls->Add(userIdLabel);
           userIdInputForm->Controls->Add(userIdTextBox);
           userIdInputForm->Controls->Add(userIdSubmitButton);
           userIdInputForm->AcceptButton = userIdSubmitButton;

           if (userIdInputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
               pilotUserIdStr = userIdTextBox->Text;
           }

           int pilotUserId = 0;
           if (String::IsNullOrWhiteSpace(pilotUserIdStr) || !Int32::TryParse(pilotUserIdStr, pilotUserId)) {
               MessageBox::Show("Invalid UserID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
               return;
           }

           // Step 2: Prompt for the new salary
           String^ newSalaryStr = "";
           Form^ salaryInputForm = gcnew Form();
           salaryInputForm->Text = "Salary Input";
           salaryInputForm->Size = System::Drawing::Size(300, 150);

           Label^ salaryLabel = gcnew Label();
           salaryLabel->Text = "Enter New Salary:";
           salaryLabel->Location = System::Drawing::Point(10, 10);
           salaryLabel->Size = System::Drawing::Size(250, 20);

           TextBox^ salaryTextBox = gcnew TextBox();
           salaryTextBox->Location = System::Drawing::Point(10, 40);
           salaryTextBox->Size = System::Drawing::Size(200, 20);

           Button^ salarySubmitButton = gcnew Button();
           salarySubmitButton->Text = "OK";
           salarySubmitButton->Location = System::Drawing::Point(10, 80);
           salarySubmitButton->Size = System::Drawing::Size(50, 30);
           salarySubmitButton->DialogResult = System::Windows::Forms::DialogResult::OK;

           salaryInputForm->Controls->Add(salaryLabel);
           salaryInputForm->Controls->Add(salaryTextBox);
           salaryInputForm->Controls->Add(salarySubmitButton);
           salaryInputForm->AcceptButton = salarySubmitButton;

           if (salaryInputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
               newSalaryStr = salaryTextBox->Text;
           }

           int newSalary = 0;
           if (String::IsNullOrWhiteSpace(newSalaryStr) || !Int32::TryParse(newSalaryStr, newSalary) || newSalary <= 0) {
               MessageBox::Show("Invalid Salary.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
               return;
           }

           // Step 3: Update the salary in the database
           try {
               String^ connectionString = "Data Source=HAMZA\\SQLEXPRESS;Initial Catalog=FlightManagementSystem;Integrated Security=True";
               SqlConnection^ connection = gcnew SqlConnection(connectionString);
               connection->Open();

               // Check if the Pilot exists
               String^ checkPilotQuery = "SELECT COUNT(*) FROM Pilot WHERE userid = @userId";
               SqlCommand^ checkPilotCommand = gcnew SqlCommand(checkPilotQuery, connection);
               checkPilotCommand->Parameters->AddWithValue("@userId", pilotUserId);
               int pilotCount = Convert::ToInt32(checkPilotCommand->ExecuteScalar());

               if (pilotCount == 0) {
                   MessageBox::Show("Pilot with the specified UserID does not exist.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                   connection->Close();
                   return;
               }

               // Update the salary
               String^ updateSalaryQuery = "UPDATE Pilot SET salary = @newSalary WHERE userid = @userId";
               SqlCommand^ updateSalaryCommand = gcnew SqlCommand(updateSalaryQuery, connection);
               updateSalaryCommand->Parameters->AddWithValue("@newSalary", newSalary);
               updateSalaryCommand->Parameters->AddWithValue("@userId", pilotUserId);
               updateSalaryCommand->ExecuteNonQuery();

               connection->Close();
               MessageBox::Show("Salary updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
           }
           catch (Exception^ ex) {
               MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
           }
       }


      private: System::Void StaffSalaries_Click(System::Object^ sender, System::EventArgs^ e) {
          // Step 1: Prompt the admin for the Staff's UserID
          String^ staffUserIdStr = "";
          Form^ userIdInputForm = gcnew Form();
          userIdInputForm->Text = "Staff UserID Input";
          userIdInputForm->Size = System::Drawing::Size(300, 150);

          Label^ userIdLabel = gcnew Label();
          userIdLabel->Text = "Enter Staff UserID:";
          userIdLabel->Location = System::Drawing::Point(10, 10);
          userIdLabel->Size = System::Drawing::Size(250, 20);

          TextBox^ userIdTextBox = gcnew TextBox();
          userIdTextBox->Location = System::Drawing::Point(10, 40);
          userIdTextBox->Size = System::Drawing::Size(200, 20);

          Button^ userIdSubmitButton = gcnew Button();
          userIdSubmitButton->Text = "OK";
          userIdSubmitButton->Location = System::Drawing::Point(10, 80);
          userIdSubmitButton->Size = System::Drawing::Size(50, 30);
          userIdSubmitButton->DialogResult = System::Windows::Forms::DialogResult::OK;

          userIdInputForm->Controls->Add(userIdLabel);
          userIdInputForm->Controls->Add(userIdTextBox);
          userIdInputForm->Controls->Add(userIdSubmitButton);
          userIdInputForm->AcceptButton = userIdSubmitButton;

          if (userIdInputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
              staffUserIdStr = userIdTextBox->Text;
          }

          int staffUserId = 0;
          if (String::IsNullOrWhiteSpace(staffUserIdStr) || !Int32::TryParse(staffUserIdStr, staffUserId)) {
              MessageBox::Show("Invalid UserID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
              return;
          }

          // Step 2: Prompt for the new salary
          String^ newSalaryStr = "";
          Form^ salaryInputForm = gcnew Form();
          salaryInputForm->Text = "Salary Input";
          salaryInputForm->Size = System::Drawing::Size(300, 150);

          Label^ salaryLabel = gcnew Label();
          salaryLabel->Text = "Enter New Salary:";
          salaryLabel->Location = System::Drawing::Point(10, 10);
          salaryLabel->Size = System::Drawing::Size(250, 20);

          TextBox^ salaryTextBox = gcnew TextBox();
          salaryTextBox->Location = System::Drawing::Point(10, 40);
          salaryTextBox->Size = System::Drawing::Size(200, 20);

          Button^ salarySubmitButton = gcnew Button();
          salarySubmitButton->Text = "OK";
          salarySubmitButton->Location = System::Drawing::Point(10, 80);
          salarySubmitButton->Size = System::Drawing::Size(50, 30);
          salarySubmitButton->DialogResult = System::Windows::Forms::DialogResult::OK;

          salaryInputForm->Controls->Add(salaryLabel);
          salaryInputForm->Controls->Add(salaryTextBox);
          salaryInputForm->Controls->Add(salarySubmitButton);
          salaryInputForm->AcceptButton = salarySubmitButton;

          if (salaryInputForm->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
              newSalaryStr = salaryTextBox->Text;
          }

          int newSalary = 0;
          if (String::IsNullOrWhiteSpace(newSalaryStr) || !Int32::TryParse(newSalaryStr, newSalary) || newSalary <= 0) {
              MessageBox::Show("Invalid Salary.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
              return;
          }

          // Step 3: Update the salary in the database
          try {
              String^ connectionString = "Data Source=HAMZA\\SQLEXPRESS;Initial Catalog=FlightManagementSystem;Integrated Security=True";
              SqlConnection^ connection = gcnew SqlConnection(connectionString);
              connection->Open();

              // Check if the Staff member exists
              String^ checkStaffQuery = "SELECT COUNT(*) FROM Staff WHERE userid = @userId";
              SqlCommand^ checkStaffCommand = gcnew SqlCommand(checkStaffQuery, connection);
              checkStaffCommand->Parameters->AddWithValue("@userId", staffUserId);
              int staffCount = Convert::ToInt32(checkStaffCommand->ExecuteScalar());

              if (staffCount == 0) {
                  MessageBox::Show("Staff member with the specified UserID does not exist.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                  connection->Close();
                  return;
              }

              // Update the salary
              String^ updateSalaryQuery = "UPDATE Staff SET salary = @newSalary WHERE userid = @userId";
              SqlCommand^ updateSalaryCommand = gcnew SqlCommand(updateSalaryQuery, connection);
              updateSalaryCommand->Parameters->AddWithValue("@newSalary", newSalary);
              updateSalaryCommand->Parameters->AddWithValue("@userId", staffUserId);
              updateSalaryCommand->ExecuteNonQuery();

              connection->Close();
              MessageBox::Show("Salary updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
          }
          catch (Exception^ ex) {
              MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
          }
      }

};
}


