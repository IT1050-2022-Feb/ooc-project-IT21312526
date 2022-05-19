#include "Feedback.h"
#include "Booking.h"

define SIZE = 5;

class Customer
{
protected:
  int userid;
  string username;
  char type[1];
  string fname;
  string lname;
  string address;
  string email;

private:
  string password;
  Feedback *feed[SIZE];
  Booking *book[SIZE];

public:
  Customer();
  Customer(int id, char tp[], string fn, string ln, string addr, string mail, string un, string pass);

  void setUserid(int i);
  void setType(char typ[]);
  void setFname(string fnme);
  void setLname(string lnme);
  void setAddress(string adrs);
  void setEmail(string mil);
  void setUsername(string usern);
  void setPassword(string ps);

  int getUserid();
  void getType(c);
  void getFname();
  void getLname();
  void getAddress();
  void getEmail();
  void getUsername();
  void getPassword();

  void addFeedback(int fd_no1, int fbid1, string cntnt1);
  void displayFeedback();

  void addBooking(int bk_no, int bkid1, string bkdt1, int seat, string cardt, string paymentt, float dist);
  void displayBooking();

  void viewBus();
  void addBooking(Booking *b);
  void displayCustomer();

  ~Customer();
};
