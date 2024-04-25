
#ifndef OOP_LABA_DIAGNOSIS_H
#define OOP_LABA_DIAGNOSIS_H
#include "Doctor.h"
#include "Patient.h"
#include <iostream>
using namespace std;

class Diagnosis {
string diagnos;
Patient patient;
Doctor doctor;
string term;

public:
    ~Diagnosis(){};
    Diagnosis(string dia,string nameofp,string surnameofp,int ageofp,
              string nameofd, string surnameofd, int expofd, string termos);
};


#endif //OOP_LABA_DIAGNOSIS_H
