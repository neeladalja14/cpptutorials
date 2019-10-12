//
// Created by neela on 10/11/2019.
//

#include "cat.h"
#include <iostream>
using namespace std;

//this void function is connected to cat class as blueprint. this function stays under cat class only(::) denotes tha
void cat::speak(){
    if(happy){  // this condition works according to the function at the bottom which is called inside the main file.
        cout << "i am happy, meow"<<endl;
    }
    else
    {
        cout << "sass's, be quite" << endl;
    }
}

void cat::makehappy(){  //this function make change to the private object in the class which is happy.
    happy = true;   //the vaule of happy is set to true.
}
void cat::makesad(){    //this function makes changes to the happy object which is private in cat class.
    happy = false;  //thee value of happy iss set to faalse here.
}
