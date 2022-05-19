#include<iostream>
#include<cstring>
#include"bus.h"

using namespace std;

class Booking
{
   private:
   	int bookingId;
	  string bookingDate;
	  int noOfSeats;
	  string cardType;
	  char paymentType;
	  float travelDistance;
   	Bus *bookedBus; //an object of Bus as attribute
   
   public:  
   	Booking(int ID, string date , int seats,
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
	
	double calcPrice()
	{
 	}

   	void Details()
	{
    	cout<<"the id for Booking you made is : "<<bookingId<<endl;
			cout<<"the date of travel is : "<<bookingDate<<endl;
			cout<<"You have booked "<<noOfSeats<<" seat(s) for travel"<<endl;
			cout<<"You have chosen "<<cardType<<" card type to make the payment"<<endl;
			cout<<"You have chosen "<<paymentType<<" as a payment method"<<endl;
			cout<<"You will be travelling " <<travelDistance<<"KM in total"<<endl;
   	  cout<<"You will be travelling in " <<bus<<" bus"<<endl;
    
	} 
   ~Booking() {
      cout << "Cancelling Booking made " << bookingId 
      << endl;
    }
};