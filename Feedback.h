#include <cstring>
#include <iostream>
#include"Customer.h"

using namespace std;

class Feedback {
  private:
    int feedbackId;
    string feedbackContent;

  public:
   Feedback(){};
   Feedback(int id, string content );
   void setId(int id);
   void setContent( string content );
   int getId();
   string getContent();
   void display();
   ~Feedback() {};
};