#include<iostream>
#include<cstring>
#include"Bus.h"
#include"Customer.h"

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
    Customer *cus ; //an object of customer
   
   public: 
    Booking();
   	Booking(int ID, string date , int seats,
	string ctype, char ptype, float distance ,Bus *bus , Customer *cus) ;
	  double calcPrice();
 	  void Details(); 
    ~Booking();
};