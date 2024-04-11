//
// Created by User on 11.04.2024.
//

#ifndef OOP_LABA_PATIENT_H
#define OOP_LABA_PATIENT_H


#include <iostream>
using namespace std;

class Patient{
    string name;
    string surname;
    int age;
public:
    Patient();
    Patient(string newname);
    Patient(string newname,string newsurname);
    Patient(string newname,string newsurname, int newage);
    ~Patient(){};
    Patient(const Patient &other);
    Patient(Patient &&other);

};


#endif //OOP_LABA_PATIENT_H
