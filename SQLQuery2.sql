CREATE DATABASE FlightManagementSystem;

USE FlightManagementSystem;

CREATE TABLE People (
    userid INT IDENTITY(1,1) PRIMARY KEY, -- Unique user ID for each person
    firstname VARCHAR(50) NOT NULL,       -- First name of the person
    lastname VARCHAR(50) NOT NULL,        -- Last name of the person
    Cnic VARCHAR(13) UNIQUE NOT NULL,             -- Unique CNIC (integer format)
    DOB DATE NOT NULL,                    -- Date of birth of the person
    password VARCHAR(255) NOT NULL        -- Encrypted password for login purposes
);

CREATE TABLE Admin(
username VARCHAR(20),
password VARCHAR(20)
	);


	CREATE TABLE Staff (
    userid INT IDENTITY(1,1) PRIMARY KEY, -- Unique user ID for each person
    firstname VARCHAR(50) NOT NULL,       -- First name of the person
    lastname VARCHAR(50) NOT NULL,        -- Last name of the person
    Cnic VARCHAR(13) UNIQUE NOT NULL,             -- Unique CNIC (integer format)
    DOB DATE NOT NULL, 
	salary INT,                           -- Date of birth of the person
    password VARCHAR(255) NOT NULL        -- Encrypted password for login purposes
);



	CREATE TABLE Pilot (
    userid INT IDENTITY(1,1) PRIMARY KEY, -- Unique user ID for each person
    firstname VARCHAR(50) NOT NULL,       -- First name of the person
    lastname VARCHAR(50) NOT NULL,        -- Last name of the person
    Cnic VARCHAR(13) UNIQUE NOT NULL,             -- Unique CNIC (integer format)
    DOB DATE NOT NULL, 
	salary INT,                           -- Date of birth of the person
    password VARCHAR(255) NOT NULL        -- Encrypted password for login purposes
);


CREATE TABLE Flight (
    flightid INT IDENTITY(1,1) PRIMARY KEY,        -- Unique flight ID
    flight_number VARCHAR(20) NOT NULL,             -- Flight number
    departure_time DATETIME NOT NULL,               -- Departure date and time
    arrival_time DATETIME,                          -- Arrival date and time (optional)
    origin VARCHAR(100) NOT NULL,                   -- Origin of the flight
    destination VARCHAR(100) NOT NULL,              -- Destination of the flight
    pilot_userid INT,                               -- Foreign key to Pilot (who is the pilot for this flight)
    crew_userid INT,                                -- Foreign key to Staff (who is the crew for this flight)
    executive_seats INT DEFAULT 0,                  -- Number of executive seats available
    business_seats INT DEFAULT 0,                   -- Number of business class seats available
    FOREIGN KEY (pilot_userid) REFERENCES Pilot(userid), -- Reference to the pilot
    FOREIGN KEY (crew_userid) REFERENCES Staff(userid)  -- Reference to the crew
);






CREATE TABLE Booking (
    booking_id INT IDENTITY(1,1) PRIMARY KEY,  -- Unique ID for each booking
    flight_number VARCHAR(20),                 -- Flight number (foreign key)
    userid INT,                                -- User ID (foreign key)
    booking_date DATE NOT NULL,                -- Date of booking
    seat_type VARCHAR(10) NOT NULL,            -- Seat type (Business or Executive)
    FOREIGN KEY (flight_number) REFERENCES Flight(flight_number),
    FOREIGN KEY (userid) REFERENCES People(userid)
);


Select* From Booking;
Select* From People;

ALTER TABLE Booking
ADD seat_type VARCHAR(10) NOT NULL DEFAULT 'Executive';
