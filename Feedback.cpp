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
   
   Feedback::~Feedback() {
      cout << "Deleting Feedback given " << feedbackId       << endl;
    }
