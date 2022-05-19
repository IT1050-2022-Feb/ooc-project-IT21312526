#include <string>
#include <iostream>
#include"customer.h"

using namespace std;

class feedBack {
  private:
    int feedbackId;
    string feedbackContent;
    string replyStatus;
  public:
   feedBack(){};
   feedBack(int no, string content , string status) {
       
       feedbackId = no;
       feedbackContent = content;
       replyStatus = status;
       
    };
    void display(){
      cout<<"Your feed back id is : "<<feedbackId<<endl;
      cout<<"You have said that '"<<feedbackContent<<"'"<<endl;
      cout<<"Reply to your feedback is : "<<replyStatus<<endl;
    }
   ~feedBack() {
      cout << "Deleting Feedback given " << feedbackId       << endl;
    }
};