#include<iostream>
#include<cstring>
#include"booking.h"

using namespace std;

   	Bpooking::Booking(int ID, string date , int seats,
	string ctype, char ptype, float distance ,Bus *bus) 
   	{  
		  bookingId = ID;
			bookingDate = date;
			noOfSeats = seats;
			cardType = ctype;
			paymentType = ptype;
			travelDistance = distnace;
   	  bookedBus = bus;
   	} 
	
	Booking::double calcPrice()
	{
 	}

   	Booking::void Details()
	{
    	cout<<"the id for Booking you made is : "<<bookingId<<endl;
			cout<<"the date of travel is : "<<bookingDate<<endl;
			cout<<"You have booked "<<noOfSeats<<" seat(s) for travel"<<endl;
			cout<<"You have chosen "<<cardType<<" card type to make the payment"<<endl;
			cout<<"You have chosen "<<paymentType<<" as a payment method"<<endl;
			cout<<"You will be travelling " <<travelDistance<<"KM in total"<<endl;
   	  cout<<"You will be travelling in " <<bus<<" bus"<<endl;
    
	} 
   ~Booking::Booking() {
      cout << "Cancelling Booking made " << bookingId 
      << endl;
    }