#include <iostream>
#include "Customer.h"
#include <string.h>

using namespace std;

define SIZE = 5;

Customer::Customer()
{
  userid = 0;
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
  userid = id;
  strcpy(type, tp);
  fname = fn;
  lname = ln;
  address = addr;
  email = mail;
  username = un;
  password = pass;
}

Customer::~Customer()
{
  cout << "Deleting Customer" << endl
       << endl;
}