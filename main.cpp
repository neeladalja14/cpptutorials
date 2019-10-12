#include <iostream>
#include "cat.h"
using namespace std;
int main() {

    cout<<"program starting..."<<endl;
    {//here the parenthesis are ued because the destructor is called as soon as the prograam is done with the value.
        cat bob;
        bob.speak();
    }
    cout<<"program ending ..."<<endl;
    return 0;
}