#include <iostream>
using namespace std;


//this is a function printing promts for user to press selection button.
void ShowMenu(){
    cout << "press '1' for searching.." << endl;
    cout << "press '2' for downloading.." << endl;
    cout << "press '3' for quiting.." << endl<<endl;
}
// this function taking inout for prompt and outputting the result related to it.
void Processing(){
    int input;
    cin >> input;
    switch(input){
        case 1:
            cout << "searching.." << endl;
            break;
        case 2:
            cout << "downloading.." << endl;
            break;
        case 3:
            cout << "quitting.." << endl;
            break;
        default:
            cout << "please enter valid input" << endl;
    }
}
int main(){

    //here, both the functions are being called inside the main function.
    ShowMenu();
    Processing();
}