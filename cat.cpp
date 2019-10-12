//
// Created by neela on 10/11/2019.
//

#include "cat.h"
#include <iostream>
using namespace std;

//this void function is connected to cat class as blueprint. this function stays under cat class only(::) denotes tha
void cat::speak(){
    cout << "meaow"<<endl;
}

//this is the same as above function.
void cat::jump(){
    cout << "jumping on the top helves of the book" <<endl;
}
