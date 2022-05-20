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
     Customer *bookedcustomer ; //an object of customer
     
   public: 
    Booking ();
   	Booking (int ID, string date , int seats,
	string ctype, char ptype, float distance ,Bus *bus , Customer *cus) ;
    void setId (int id);
    void setDate (string date);
    void setSeat (int seats);
    void setCType (string ctype);
    void setPtype (char ptype);
    void setDistance (float distance);
    void setBus (Bus *bus);
    void setCustomer (Customer *cus);
    int getId ();
    string setDate ();
    int setSeat ();
    string setCType ();
    char setPtype ();
    float setDistance ();
    int setBus ();
    int setCustomer ();
	  double calcPrice ();
 	  void Details (); 
    ~Booking ();
};