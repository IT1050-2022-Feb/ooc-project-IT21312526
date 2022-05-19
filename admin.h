#include "route.h"

class Admin : public customer
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