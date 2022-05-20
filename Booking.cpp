#include<iostream>
#include<cstring>
#include"booking.h"

using namespace std;

   	Booking::Booking() 
   	{  
		  bookingId = 0;
			bookingDate = "";
			noOfSeats = 0;
			cardType = "";
			paymentType = "";
			travelDistance = 0;
   	} 
   	Booking::Booking(int ID, string date , int seats,
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
    Booking::void setId(int id){}
    Booking::void setDate(string date){}
    Booking::void setSeat(int seats){}
    Booking::void setCType(string ctype){}
    Booking::void setPtype(char ptype){}
    Booking::void setDistance(float distance){}
    Booking::void setBus(Bus *bus){}
    Booking::void setCustomer(Customer *cus){}
    Booking::int getId(){}
    Booking::string setDate(){}
    Booking::int setSeat(){}
    Booking::string setCType(){}
    Booking::char setPtype(){}
    Booking::float setDistance(){}
    Booking::int setBus(){}
    Booking::int setCustomer(){}
	  Booking::double calcPrice(){}
 	  Booking::void Details(){}
	
   Booking::~Booking() {
      cout << "Cancelling Booking " << bookingId 
      << endl;
    }