#include <iostream>
#include "Admin.h"
#include "Customer.h"
#include "Bus.h"
#include "Route.h"
#include "Booking.h"
#include "Feedback.h"

using namespace std ;

int main(){
  
  Admin *a1 ;
  a1 = new Admin() ;
  
  Customer *c1 ;
  c1 = new Customer() ;

  Bus *bs1 ;
  bs1 = new Bus() ;

  Route *rt1 ;
  rt1 = new Route() ;

  Booking *bk1 ;
  bk1 = new Booking() ;
  
  
  return 0 ;
}