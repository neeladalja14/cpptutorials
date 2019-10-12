#include <iostream>
#include "cat.h"

int main() {
    //the cat class is called and the variable given is cat1.
    cat cat1;
    //thee cat1 variable calls the speak and jump functions.
    //therefore to call the function from a class we write (cat1.speak();, cat1.jump();).
    cat1.happy=true;    //this is the object which gives thee value according to true or false.
    cat1.speak();
    cat1.jump();
    return 0;
}