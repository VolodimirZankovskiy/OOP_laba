#ifndef OOP_LABA_PATIENT_H
#define OOP_LABA_PATIENT_H


#include <iostream>
using namespace std;

class Patient{
    string name;
    string surname;
    int age;
    static int counter;
public:
    Patient();
    Patient(string newname);
    Patient(string newname,string newsurname);
    Patient(string newname,string newsurname, int newage);
    ~Patient(){};
    Patient(const Patient &other);
    Patient(Patient &&other);
    void getCounter();
    friend ostream &operator<<(ostream &os, const Patient &obj);
    friend istream &operator>>(istream&is, Patient &obj);
};


#endif //OOP_LABA_PATIENT_H
