//
// Created by neela on 10/11/2019.
//

#include "cat.h"
#include <iostream>
using namespace std;

cat::cat(){     //this is what constructor prints hn called and sets the value of happy to true.
    cout<<"cat created"<<endl;
    happy = true;
}
cat::~cat(){        //this is what destructor prints when it is called.
    cout<<"cat destroyed"<<endl;
}

void cat::speak(){
    if(happy){
        cout << "i am happy, meow"<<endl;
    }
    else
    {
        cout << "sass's, be quite" << endl;
    }
}

