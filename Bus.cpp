#include<iostream>
#include<string.h>
#include "Route.h"

using namespaces std;

Bus::Bus()
    {
       Bus_id = 0;
       Seats = 0;
       arrivalTime = "";
       depatureTime = "";      
    }

Bus::Bus(int bus_id, string seats, string aTime, string dTime, Route *r)
    {
       Bus_id= bus_id ;
       Seats= seats ;
       arrivalTime=aTime ;
       depatureTime=dTime ;  
       rt = r ;
    }

Bus::~Bus()
    {
      cout<<"Deleting Bus " <<  Bus_id << endl;
    }

  

