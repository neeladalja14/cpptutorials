#include <iostream>
using namespace std;

int main(){
    int value = 4;

    //this is the switch case for the different integer values if the user chooses the number within these cases,
    //then the corresponding case will awake and return the answer respective to that.

    switch (value) {
        case 4:         //currently the caase 4 would work because the value of the variable: VALUE is set to 4.
            cout<<"the number is valid" << flush;
            break;
        case 5:     //if we set the value of VALUE = 5 then this case wil work
            cout << "the number is valid" << flush;
            break;
        case 6:
            cout << "thee number is valid" << flush;
            break;
        default:        // all the other values other than mentioned above will return this,
            cout<< "the number is invalid" << flush;
    }
}