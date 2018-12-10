//
//  main.cpp
//  helloworld
//
//  Created by Leonid Sobolev on 04.10.2017.
//  Copyright © 2017 Leonid Sobolev. All rights reserved.
//
#include <iostream>

class stack{
public:
    char name_;
    stack(char srs){
        name_ = srs;
    }
    struct stackElement{
        int data;
        stackElement* next = nullptr;
    };

    stackElement *corrent = nullptr;

    void push(int source){
        stackElement *old = corrent;
        corrent = new stackElement;
        corrent->next = old;
        corrent->data = source;
    }

    int pop(){
        int tmp = corrent->data;
        stackElement *t = corrent;
        corrent = corrent->next;
        delete(t);
        return tmp;
    }

    void getStackInfo(){
        int count = 0;
        stackElement *tmp_count = corrent;
        while(tmp_count != nullptr){
            tmp_count = tmp_count->next;
            count++;
        }

        std::cout<< name_ << "  " << count <<std::endl;

    stackElement* getMax(){
      stackElement* tmp = corrent;
      int max = tmp -> data;
      while( tmp != nullptr){
        if(tmp -> data > max) max = tmp -> data;
        tmp = tmp -> next;
      }
      return max;
    }


    }
};

int main(){

}
