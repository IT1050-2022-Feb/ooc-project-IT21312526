
#include <iostream>
#include <string.h>
using namespace std;

class Route
{
private:
    int route_id;
    string source;
    string destination;
    // char stationName[30];

public:
    Route(int id, string src, string dest)
    {
        route_id = id;
        source = src;
        destination = dest;
    }

    void displayRoute()
    {
        cout << "Route id: " << route_id << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "#################################" << endl<<endl;
    }

    ~Route()
    {
        cout << "Deleting Route" <<endl<< endl;
    }
};

class Admin
{
private:
    int admin_id;
    Route *rt[2];

public:
    Admin()
    {
        admin_id = 0;
    }
    Admin(int id)
    {
        admin_id = id;
    }

    void addRoute(Route *rt1, Route *rt2)
    {
        rt[0] = rt1;
        rt[1] = rt2;
    }

    void displayAdmin()
    {
        for (int i = 0; i < 2; i++)
        {
            rt[i]->displayRoute();
        }
    }
    ~Admin()
    {
        cout << "Deleting Admin" <<endl<< endl;
    }
};

int main()
{
    Admin *adm = new Admin(001);
    Route *r1 = new Route(100, "Kandy", "Colombo");
    Route *r2 = new Route(101, "Jaffna", "Batticaloa");

    adm->addRoute(r1, r2);
    adm->displayAdmin();
    delete adm;

    r1->displayRoute();
    r2->displayRoute();
}