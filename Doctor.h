

#ifndef OOP_LABA_DOCTOR_H
#define OOP_LABA_DOCTOR_H


#include <iostream>
using namespace std;

class Doctor{
    string name;
    string surname;
    int experience;
public:
    Doctor();
    Doctor(string newname);
    Doctor(string newname,string newsurname);
    Doctor(string newname,string newsurname, int newexp);
    ~Doctor(){};
    void getDoctor();
};



#endif //OOP_LABA_DOCTOR_H
