#include<iostream>
#include<cstring>
#include"Feedback.h"

Feedback::Feedback(){
      feedbackId = 0;
       feedbackContent ="";

       
}
  Feedback:: Feedback(int no, string content ) {
       
       feedbackId = no;
       feedbackContent = content;

       
    }
    Feedback::void display(){
      cout<<"Your feed back id is : "<<feedbackId<<endl;
      cout<<"You have said that '"<<feedbackContent<<"'"<<endl;
    }
   Feedback::~Feedback() {
      cout << "Deleting Feedback given " << feedbackId       << endl;
    }
