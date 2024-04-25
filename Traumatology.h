
#ifndef OOP_LABA_TRAUMATOLOGY_H
#define OOP_LABA_TRAUMATOLOGY_H
#include "Hospital.h"
#include <iostream>
using namespace std;


class Traumatology :public Hospital{
int cost;
string perk;
public:
    ~Traumatology(){};
    Traumatology(string loc, int floor, int room, int costs, string perks);
};


#endif //OOP_LABA_TRAUMATOLOGY_H
