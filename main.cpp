#include <iostream>
#include "cat.h"

int main() {
    //the cat class has cat 1 performing some functions in it.
    cat cat1;
    cat1.makehappy();//the makehappy has va;ue of false which enables the if condition in speak function.
    cat1.speak();

    //cat class is called and the cat2 is another variable, likewise many other cats(3,4,5,6) can be created.
    cat cat2;//this is
    cat2.makesad();//the makesad has va;ue of false which enables the else condition in speak function.
    cat2.speak();

    return 0;
}