A#include "route.h"

class Admin : public customer
{
private:
    int admin_id;
    Route *rt[2];

public:
    Admin();
    Admin(int id);

    void addRoute(Route *rt1, Route *rt2);

    void displayAdmin();
    ~Admin();
};