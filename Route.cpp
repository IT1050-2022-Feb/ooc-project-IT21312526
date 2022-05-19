#include <iostream>
#include <string.h>
#include "Route.h"

Route::Route()
{
  route_id = 0;
  source = '';
  destination = '';
}

Route::Route(int id, string src, string dest)
{
  route_id = id;
  source = src;
  destination = dest;
}

Route::~Route()
{
  cout << "Deleting Route" << route_id << endl;
}