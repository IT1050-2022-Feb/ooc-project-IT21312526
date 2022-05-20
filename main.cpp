#include <iostream>
#include "Admin.h"
#include "Customer.h"
#include "Bus.h"
#include "Route.h"
#include "Booking.h"
#include "Feedback.h"
#include <cstring>

using namespace std ;

int main(){
  
  Admin *a1 ;
  a1 = new Admin(100,101, A , "Peter" ,"parker", "No 128 ,main road", "parker123@gmail.com" , "parker123" , "spiderman@678") ;
  
  Customer *c1 ;
  c1 = new Customer(102 , C , "perera" , "thisara" , "No 64,new town , Kandy " , "tp25@gmail.com" , "tp45" , "Tperera@123" ) ;

  

  Route *rt1 ;
  rt1 = new Route(10 , "kandy" , "Colombo") ;

  Bus *bs1 ;
  bs1 = new Bus(105 , 45 , "07.30" , "12.30" , rt1) ;

  Booking *bk1 ;
  bk1 = new Booking(200 , "23-05-2022" , 2 , "Visa" , "Full" , 100 , bs1 , c1) ;
  
  
  return 0 ;
}