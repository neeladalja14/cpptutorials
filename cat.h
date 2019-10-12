//
// Created by neela on 10/11/2019.
//

#ifndef CPPCLASSES_CAT_H
#define CPPCLASSES_CAT_H

//the class file cat.cpp is implemented here to call and the
//class has two objects which are inside the cat class.
//the (public) allows this objects to be used outside the class also.
class cat {
private:
    bool happy;     //thi is private object which cannot be accessed outside the class.
public:
    void speak();
    void makehappy();
    void makesad();

};
#endif //CPPCLASSES_CAT_H
