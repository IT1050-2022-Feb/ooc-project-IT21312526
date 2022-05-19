#include "Route.h"
#include "Bus.h"

class Admin : public customer
{
private:
    int admin_id;
    Route *rt[SIZE];
    Bus *bus[SIZE] ;

public:
    Admin();
    Admin( ind aid ,int id, char tp[], string fn, string ln, string addr, string mail, string un, string pass) : Customer( id, tp,  fn, ln,  addr,  mail,  un,  pass);

    void addRoute(Route *rt1, Route *rt2);
    void addBus(Bus *bs1 , Bus *bs2) ;
    void setadminId(int id ) ;
    int getadminId () ;

    void displayAdmin();
    ~Admin();
};