#include <iostream>
using namespace std;


//this is a function printing prompts for user to press selection button.
void ShowMenu(){
    cout << "press '1' for searching.." << endl;
    cout << "press '2' for downloading.." << endl;
    cout << "press '3' for quiting.." << endl;
}
// this function taking input for prompt and returns the input that inout will be used down in the main function..
int GetInput() {
    cout << "enter your selection: " << endl;
    int input;
    cin >> input;
    return input;

}
void ProcessSelect(int Uselected){
    switch (Uselected) {
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

    //the processing function returns input value from the top, and that value gets implemented here(taken by selection).
    int selection = GetInput();       //the selection variable gets the input value and that value is passed into the function.
    ProcessSelect(selection);

    return 0;
}