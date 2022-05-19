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
    Booking();
   	Booking(int ID, string date , int seats,
	string ctype, char ptype, float distance ,Bus *bus) ;
	  double calcPrice();
 	  void Details(); 
    ~Booking();
};