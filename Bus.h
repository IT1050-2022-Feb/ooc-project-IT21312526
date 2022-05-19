#include "Route.h"

define SIZE=5;

Class Bus
{
  private:
    int Bus_id;
    string Seats;
    string arrivalTime;
    string departureTime;
    Route *rt

  public:
    Bus();
    Bus(int bus_id, string seats, string aTime, string dTime, Route *r);

    void setBus_id(int id);
    void setSeats(int st);
    void setArrivalTime(string arr);
    void setDepartureTime(string dep);

    int getBus_id();
    int getSeats();
    void getArrivalTime();
    void getDepartureTime();
      
    void displayBus();
    ~Bus();


}