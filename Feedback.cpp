#include<iostream>
#include<cstring>
#include"Feedback.h"

Feedback::Feedback(){
      feedbackId = 0;
      feedbackContent ="";

       
}
  Feedback:: Feedback(int id, string content ) {
       
       feedbackId = id;
       feedbackContent = content;

       
    }
    Feedback::void display(){
      cout<<"Your feed back id is : "<<feedbackId<<endl;
      cout<<"You have said that '"<<feedbackContent<<"'"<<endl;
    }
   Feedback::void setId(int id){}
   Feedback::void setContent( string content ){}
   Feedback::int getId(){}
   Feedback::string getContent(){}
   Feedback::~Feedback() {
      cout << "Deleting Feedback given " << feedbackId       << endl;
    }
