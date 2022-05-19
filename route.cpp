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

Route::void displayRoute()
    { 
        cout << "Route id: " << route_id << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "#################################" << endl<<endl;
    }

Route::~Route()
    {
        cout << "Deleting Route" <<endl<< endl;
    }