#include <iostream>
#include "Customer.h"
#include <string.h>

using namespace std;

Customer::Customer()
{
  user_id = 0;
  type = '';
  fname = '';
  lname = '';
  address = '';
  email = '';
  username ='';
  password ='';
}

Customer::Customer(int id, char tp[], string fn, string ln, string addr, string mail, string un, string pass)
{
  user_id = id;
  strcpy(type, tp);
  fname = fn;
  lname = ln;
  address = addr;
  email = mail;
  username = un;
  password = pass;
}

void Customer::displayCustomer()
{
  cout << "Id: " << user_id << endl;
  cout << "Type: " << type << endl;
  cout << "First Name: " << fname << endl;
  cout << "Last Name: " << lname << endl;
  cout << "Address: " << address << endl;
  cout << "Email: " << email << endl;
  cout << "##########################" << endl << endl;
}

Customer::~Customer(){
  cout<<"Deleting Customer"<<endl<<endl;
}