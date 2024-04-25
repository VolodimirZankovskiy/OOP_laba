
#ifndef OOP_LABA_OPHTHALMOLOGY_H
#define OOP_LABA_OPHTHALMOLOGY_H

#include "Hospital.h"
#include <iostream>
using namespace std;

class Ophthalmology :public Hospital{
    string NameofmainDoctor;
    string SurnameofmainDoctor;

public:
    ~Ophthalmology(){};
    Ophthalmology(string loc, int floor, int room, string name, string surname);
    Ophthalmology(const Ophthalmology &other);
    Ophthalmology(Ophthalmology &&other);
};


#endif //OOP_LABA_OPHTHALMOLOGY_H
