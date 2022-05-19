class Customer{
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
Customer(){
user_id = 0;;
type = '';
fname = '';
lname = '';
address = '';
email = '';
}
void Register();
s
};