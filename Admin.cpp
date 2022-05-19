#include<iostream>
#include "admin.h"
#include <cstring>

using namespace std;
Admin::Admin()
    {
        admin_id = 0;
    }

Admin::Admin(int id)
    {
        admin_id = id;
    }

Admin::~Admin()
    {
        cout << "Deleting Admin" <<endl<< endl;
    }

