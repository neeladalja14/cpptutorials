#include <iostream>
using namespace std;

int main(){

    //this is the simple array for the integer to be printed.
    int array[3];

    array[0] = 23;
    array[1] = 43;
    array[2] = 31;

    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;


    int i;
    // this is the array for double to print the decimal numbers,

    cout<<"the array of double is :"<<endl;

    double doublearray[4] = {2.3,3.5,4.1,5.7};

    for(i=0;i<4;i++){
        doublearray[i] *= 2;
        cout <<"value at index   "<< i << " is " << doublearray[i]<< endl;
    }


    //this is the simple array for text/string to print the words.

    string textarray[5] = {"apple", "banana", "pinapple","khajur", "chickoo"};

    for(i=0; i<5;i++){
        cout<<"this is : "<< textarray[i] << endl;
    }
}