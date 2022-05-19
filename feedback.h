#include <string>
#include <iostream>

using namespace std;

class feedBack {
  private:
    int roomno;
  public:
   feedBack(){};
   feedBack(int no) {
       roomno = no;
    };
    void Display() {
       cout << "Class Room " << roomno << endl;
    };
     feedBack() {
      cout << "Deleting Room " << roomno << endl;
    }
};