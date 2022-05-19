#include<iostream>
#include "Admin.h"
#include <cstring>

using namespace std;
Admin::Admin()
    {
        admin_id = 0;
    }

Admin::Admin( ind aid ,int id, char tp[], string fn, string ln, string addr, string mail, string un, string pass) : Customer( id, tp,  fn, ln,  addr,  mail,  un,  pass)
    {
        admin_id = aid;
    }

Admin::~Admin()
    {
        cout << "Deleting Admin" <<endl<< endl;
    }

