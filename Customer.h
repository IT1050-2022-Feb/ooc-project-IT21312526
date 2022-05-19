class Customer
{
protected:
  int user_id;
  char type[1];
  string fname;
  string lname;
  string address;
  string email;

private:
  string username;
  string password;

public:
  Customer();
  Customer(int id, char tp[], string fn, string ln, string addr, string mail, string un, string pass);
  void displayCustomer();
  ~Customer();
};