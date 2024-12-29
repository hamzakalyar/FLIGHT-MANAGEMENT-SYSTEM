#pragma once

namespace AIRLINES {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Add_Flight : public System::Windows::Forms::Form
    {
    public:
        Add_Flight(void)
        {
            InitializeComponent();
        }

    protected:
        ~Add_Flight()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ labelFlightNumber;
        System::Windows::Forms::Label^ labelDepartureTime;
        System::Windows::Forms::Label^ labelArrivalTime;
        System::Windows::Forms::Label^ labelOrigin;
        System::Windows::Forms::Label^ labelDestination;
        System::Windows::Forms::Label^ labelPilotId;
        System::Windows::Forms::Label^ labelCrewId;
        System::Windows::Forms::Label^ labelExecSeats;
        System::Windows::Forms::Label^ labelBusinessSeats;

        System::Windows::Forms::TextBox^ textFlightNumber;
        System::Windows::Forms::DateTimePicker^ datePickerDeparture;
        System::Windows::Forms::DateTimePicker^ datePickerArrival;
        System::Windows::Forms::TextBox^ textOrigin;
        System::Windows::Forms::TextBox^ textDestination;
        System::Windows::Forms::TextBox^ textPilotId;
        System::Windows::Forms::TextBox^ textCrewId;
        System::Windows::Forms::TextBox^ textExecSeats;
        System::Windows::Forms::TextBox^ textBusinessSeats;
        System::Windows::Forms::Button^ btnAddFlight;

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Add_Flight::typeid));
            this->labelFlightNumber = (gcnew System::Windows::Forms::Label());
            this->labelDepartureTime = (gcnew System::Windows::Forms::Label());
            this->labelArrivalTime = (gcnew System::Windows::Forms::Label());
            this->labelOrigin = (gcnew System::Windows::Forms::Label());
            this->labelDestination = (gcnew System::Windows::Forms::Label());
            this->labelPilotId = (gcnew System::Windows::Forms::Label());
            this->labelCrewId = (gcnew System::Windows::Forms::Label());
            this->labelExecSeats = (gcnew System::Windows::Forms::Label());
            this->labelBusinessSeats = (gcnew System::Windows::Forms::Label());
            this->textFlightNumber = (gcnew System::Windows::Forms::TextBox());
            this->datePickerDeparture = (gcnew System::Windows::Forms::DateTimePicker());
            this->datePickerArrival = (gcnew System::Windows::Forms::DateTimePicker());
            this->textOrigin = (gcnew System::Windows::Forms::TextBox());
            this->textDestination = (gcnew System::Windows::Forms::TextBox());
            this->textPilotId = (gcnew System::Windows::Forms::TextBox());
            this->textCrewId = (gcnew System::Windows::Forms::TextBox());
            this->textExecSeats = (gcnew System::Windows::Forms::TextBox());
            this->textBusinessSeats = (gcnew System::Windows::Forms::TextBox());
            this->btnAddFlight = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // labelFlightNumber
            // 
            this->labelFlightNumber->BackColor = System::Drawing::Color::Transparent;
            this->labelFlightNumber->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelFlightNumber->ForeColor = System::Drawing::SystemColors::Control;
            this->labelFlightNumber->Location = System::Drawing::Point(20, 20);
            this->labelFlightNumber->Name = L"labelFlightNumber";
            this->labelFlightNumber->Size = System::Drawing::Size(152, 23);
            this->labelFlightNumber->TabIndex = 0;
            this->labelFlightNumber->Text = L"Flight Number:";
            // 
            // labelDepartureTime
            // 
            this->labelDepartureTime->BackColor = System::Drawing::Color::Transparent;
            this->labelDepartureTime->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelDepartureTime->ForeColor = System::Drawing::SystemColors::Control;
            this->labelDepartureTime->Location = System::Drawing::Point(20, 60);
            this->labelDepartureTime->Name = L"labelDepartureTime";
            this->labelDepartureTime->Size = System::Drawing::Size(159, 23);
            this->labelDepartureTime->TabIndex = 2;
            this->labelDepartureTime->Text = L"Departure Time:";
            // 
            // labelArrivalTime
            // 
            this->labelArrivalTime->BackColor = System::Drawing::Color::Transparent;
            this->labelArrivalTime->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelArrivalTime->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->labelArrivalTime->Location = System::Drawing::Point(20, 100);
            this->labelArrivalTime->Name = L"labelArrivalTime";
            this->labelArrivalTime->Size = System::Drawing::Size(152, 23);
            this->labelArrivalTime->TabIndex = 4;
            this->labelArrivalTime->Text = L"Arrival Time:";
            // 
            // labelOrigin
            // 
            this->labelOrigin->BackColor = System::Drawing::Color::Transparent;
            this->labelOrigin->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelOrigin->ForeColor = System::Drawing::Color::Snow;
            this->labelOrigin->Location = System::Drawing::Point(20, 140);
            this->labelOrigin->Name = L"labelOrigin";
            this->labelOrigin->Size = System::Drawing::Size(100, 23);
            this->labelOrigin->TabIndex = 6;
            this->labelOrigin->Text = L"Origin:";
            // 
            // labelDestination
            // 
            this->labelDestination->BackColor = System::Drawing::Color::Transparent;
            this->labelDestination->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelDestination->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->labelDestination->Location = System::Drawing::Point(20, 180);
            this->labelDestination->Name = L"labelDestination";
            this->labelDestination->Size = System::Drawing::Size(134, 23);
            this->labelDestination->TabIndex = 8;
            this->labelDestination->Text = L"Destination:";
            // 
            // labelPilotId
            // 
            this->labelPilotId->BackColor = System::Drawing::Color::Transparent;
            this->labelPilotId->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelPilotId->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->labelPilotId->Location = System::Drawing::Point(20, 220);
            this->labelPilotId->Name = L"labelPilotId";
            this->labelPilotId->Size = System::Drawing::Size(159, 23);
            this->labelPilotId->TabIndex = 10;
            this->labelPilotId->Text = L"Pilot User ID:";
            // 
            // labelCrewId
            // 
            this->labelCrewId->BackColor = System::Drawing::Color::Transparent;
            this->labelCrewId->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelCrewId->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->labelCrewId->Location = System::Drawing::Point(20, 260);
            this->labelCrewId->Name = L"labelCrewId";
            this->labelCrewId->Size = System::Drawing::Size(134, 23);
            this->labelCrewId->TabIndex = 12;
            this->labelCrewId->Text = L"Crew User ID:";
            // 
            // labelExecSeats
            // 
            this->labelExecSeats->BackColor = System::Drawing::Color::Transparent;
            this->labelExecSeats->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelExecSeats->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
            this->labelExecSeats->Location = System::Drawing::Point(20, 300);
            this->labelExecSeats->Name = L"labelExecSeats";
            this->labelExecSeats->Size = System::Drawing::Size(174, 23);
            this->labelExecSeats->TabIndex = 14;
            this->labelExecSeats->Text = L"Executive Seats:";
            // 
            // labelBusinessSeats
            // 
            this->labelBusinessSeats->BackColor = System::Drawing::Color::Transparent;
            this->labelBusinessSeats->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelBusinessSeats->ForeColor = System::Drawing::SystemColors::ButtonFace;
            this->labelBusinessSeats->Location = System::Drawing::Point(21, 338);
            this->labelBusinessSeats->Name = L"labelBusinessSeats";
            this->labelBusinessSeats->Size = System::Drawing::Size(173, 23);
            this->labelBusinessSeats->TabIndex = 16;
            this->labelBusinessSeats->Text = L"Business Seats:";
            // 
            // textFlightNumber
            // 
            this->textFlightNumber->BackColor = System::Drawing::Color::MidnightBlue;
            this->textFlightNumber->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textFlightNumber->ForeColor = System::Drawing::SystemColors::Window;
            this->textFlightNumber->Location = System::Drawing::Point(200, 20);
            this->textFlightNumber->Name = L"textFlightNumber";
            this->textFlightNumber->Size = System::Drawing::Size(234, 23);
            this->textFlightNumber->TabIndex = 1;
            // 
            // datePickerDeparture
            // 
            this->datePickerDeparture->Location = System::Drawing::Point(200, 60);
            this->datePickerDeparture->Name = L"datePickerDeparture";
            this->datePickerDeparture->Size = System::Drawing::Size(234, 22);
            this->datePickerDeparture->TabIndex = 3;
            // 
            // datePickerArrival
            // 
            this->datePickerArrival->Location = System::Drawing::Point(200, 100);
            this->datePickerArrival->Name = L"datePickerArrival";
            this->datePickerArrival->Size = System::Drawing::Size(234, 22);
            this->datePickerArrival->TabIndex = 5;
            // 
            // textOrigin
            // 
            this->textOrigin->BackColor = System::Drawing::Color::MidnightBlue;
            this->textOrigin->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textOrigin->ForeColor = System::Drawing::SystemColors::Window;
            this->textOrigin->Location = System::Drawing::Point(200, 140);
            this->textOrigin->Name = L"textOrigin";
            this->textOrigin->Size = System::Drawing::Size(234, 23);
            this->textOrigin->TabIndex = 7;
            // 
            // textDestination
            // 
            this->textDestination->BackColor = System::Drawing::Color::MidnightBlue;
            this->textDestination->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textDestination->ForeColor = System::Drawing::SystemColors::InactiveBorder;
            this->textDestination->Location = System::Drawing::Point(200, 180);
            this->textDestination->Name = L"textDestination";
            this->textDestination->Size = System::Drawing::Size(234, 23);
            this->textDestination->TabIndex = 9;
            // 
            // textPilotId
            // 
            this->textPilotId->BackColor = System::Drawing::Color::MidnightBlue;
            this->textPilotId->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textPilotId->ForeColor = System::Drawing::SystemColors::MenuBar;
            this->textPilotId->Location = System::Drawing::Point(200, 220);
            this->textPilotId->Name = L"textPilotId";
            this->textPilotId->Size = System::Drawing::Size(234, 23);
            this->textPilotId->TabIndex = 11;
            // 
            // textCrewId
            // 
            this->textCrewId->BackColor = System::Drawing::Color::MidnightBlue;
            this->textCrewId->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textCrewId->ForeColor = System::Drawing::SystemColors::Menu;
            this->textCrewId->Location = System::Drawing::Point(200, 260);
            this->textCrewId->Name = L"textCrewId";
            this->textCrewId->Size = System::Drawing::Size(234, 23);
            this->textCrewId->TabIndex = 13;
            // 
            // textExecSeats
            // 
            this->textExecSeats->BackColor = System::Drawing::Color::MidnightBlue;
            this->textExecSeats->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textExecSeats->ForeColor = System::Drawing::SystemColors::InactiveBorder;
            this->textExecSeats->Location = System::Drawing::Point(200, 300);
            this->textExecSeats->Name = L"textExecSeats";
            this->textExecSeats->Size = System::Drawing::Size(234, 23);
            this->textExecSeats->TabIndex = 15;
            // 
            // textBusinessSeats
            // 
            this->textBusinessSeats->BackColor = System::Drawing::Color::MidnightBlue;
            this->textBusinessSeats->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBusinessSeats->ForeColor = System::Drawing::SystemColors::InactiveBorder;
            this->textBusinessSeats->Location = System::Drawing::Point(200, 339);
            this->textBusinessSeats->Name = L"textBusinessSeats";
            this->textBusinessSeats->Size = System::Drawing::Size(234, 23);
            this->textBusinessSeats->TabIndex = 17;
            // 
            // btnAddFlight
            // 
            this->btnAddFlight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(175)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
                static_cast<System::Int32>(static_cast<System::Byte>(15)));
            this->btnAddFlight->Cursor = System::Windows::Forms::Cursors::Hand;
            this->btnAddFlight->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->btnAddFlight->Location = System::Drawing::Point(133, 390);
            this->btnAddFlight->Name = L"btnAddFlight";
            this->btnAddFlight->Size = System::Drawing::Size(164, 36);
            this->btnAddFlight->TabIndex = 18;
            this->btnAddFlight->Text = L"Add Flight";
            this->btnAddFlight->UseVisualStyleBackColor = false;
            this->btnAddFlight->Click += gcnew System::EventHandler(this, &Add_Flight::btnAddFlight_Click);
            // 
            // Add_Flight
            // 
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(447, 468);
            this->Controls->Add(this->labelFlightNumber);
            this->Controls->Add(this->textFlightNumber);
            this->Controls->Add(this->labelDepartureTime);
            this->Controls->Add(this->datePickerDeparture);
            this->Controls->Add(this->labelArrivalTime);
            this->Controls->Add(this->datePickerArrival);
            this->Controls->Add(this->labelOrigin);
            this->Controls->Add(this->textOrigin);
            this->Controls->Add(this->labelDestination);
            this->Controls->Add(this->textDestination);
            this->Controls->Add(this->labelPilotId);
            this->Controls->Add(this->textPilotId);
            this->Controls->Add(this->labelCrewId);
            this->Controls->Add(this->textCrewId);
            this->Controls->Add(this->labelExecSeats);
            this->Controls->Add(this->textExecSeats);
            this->Controls->Add(this->labelBusinessSeats);
            this->Controls->Add(this->textBusinessSeats);
            this->Controls->Add(this->btnAddFlight);
            this->MaximumSize = System::Drawing::Size(465, 515);
            this->MinimumSize = System::Drawing::Size(465, 515);
            this->Name = L"Add_Flight";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Add Flight";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void btnAddFlight_Click(System::Object^ sender, System::EventArgs^ e)
        {
            // Event handler for adding a flight (can include database logic)
            MessageBox::Show("Flight added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
    };
}
