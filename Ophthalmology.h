
#ifndef OOP_LABA_OPHTHALMOLOGY_H
#define OOP_LABA_OPHTHALMOLOGY_H

#include "Hospital.h"
#include <iostream>
using namespace std;

class Ophthalmology :public Hospital{
    string NameofmainDoctor;
    string SurnameofmainDoctor;

public:
    ~Ophthalmology()override{};
    Ophthalmology(string loc, int floor, int room, string name, string surname);
    Ophthalmology(const Ophthalmology &other);
    Ophthalmology(Ophthalmology &&other);
    void Example(){cout<<"derived method";}
    void getlocation()override{cout<<"something";}
    void getfloor()override{cout<<"something";}
    void Function(Hospital &a){cout<<"Base class reference";}
};


#endif //OOP_LABA_OPHTHALMOLOGY_H
