//
// Created by neela on 10/11/2019.
//

#ifndef CPPCLASSES_CAT_H
#define CPPCLASSES_CAT_H

//the class file cat.cpp is implemented here to call and the
//class has two objects which are inside the cat class.
//the (public) allows this objects to be used outside the class also.
class cat {
public:
    bool happy;     //this object is conditional for printing something according to the value in main function.
    void speak();
    void jump();
};
#endif //CPPCLASSES_CAT_H
