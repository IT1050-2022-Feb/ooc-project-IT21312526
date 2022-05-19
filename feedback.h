#include <string>
#include <iostream>

using namespace std;

class feedBack {
  private:
    int feedbackId;
    string feedbackcontent;
    replyStatus
  public:
   feedBack(){};
   feedBack(int no) {
       feedbackId 
        = no;
    };
   ~feedBack() {
      cout << "Deleting Feedback " << feedbackId 
      << endl;
    }
};