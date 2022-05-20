#include<iostream>
#include<cstring>
#include"Booking.h"

using namespace std;

   Booking::Booking () 
   	{  
		  bookingId = 0;
			bookingDate = "";
			noOfSeats = 0;
			cardType = "";
			paymentType = "";
			travelDistance = 0;
   	} 
   Booking::Booking (int ID, string date , int seats,
	string ctype, char ptype, float distance ,Bus *bus, Customer *cus) 
   	{  
		  bookingId = ID;
			bookingDate = date;
			noOfSeats = seats;
			cardType = ctype;
			paymentType = ptype;
			travelDistance = distnace;
   	  bookedBus = bus;
      bookedcustomer = cus ;
      
   	} 
    
   Booking::~Booking () {
      cout << "Cancelling Booking " << bookingId 
      << endl;
    }