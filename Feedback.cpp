#include<iostream>
#include<cstring>
#include"Feedback.h"

Feedback::Feedback(){
      feedback_Id = 0;
      feedback_Content ="";

       
}
  Feedback:: Feedback(int id, string content ) {
       
       feedback_Id = id;
       feedback_Content = content;

       
    }
   
   Feedback::~Feedback() {
      cout << "Deleting Feedback given " << feedbackId       << endl;
    }
