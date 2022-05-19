#include <cstring>
#include <iostream>
#include"customer.h"

using namespace std;

class Feedback {
  private:
    int feedbackId;
    string feedbackContent;

  public:
   Feedback(){};
   Feedback(int no, string content );
   void display();
   ~Feedback() {};
};