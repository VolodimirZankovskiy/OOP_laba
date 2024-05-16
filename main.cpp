#include <iostream>
#include "Hospital.h"
#include "Doctor.h"
#include "Patient.h"
#include "Patient.cpp"
#include "Doctor.cpp"
#include "Hospital.cpp"
#include "Ophthalmology.h"
#include "Ophthalmology.cpp"
#include "Diagnosis.h"
#include "Diagnosis.cpp"
#include "Traumatology.h"
#include "Traumatology.cpp"


using namespace std;

int main() {
    Hospital Hosp("IUBJK",1,3);
    Hospital *p = new Ophthalmology("dwsc",2,3,"fdsc","fds");
    p->Example();//1 task

    cout<<endl;
    p->getfloor();
    cout<<endl;
    p->getlocation();//2 and 3 task

    cout<<endl;
    Ophthalmology Op("dwsc",2,3,"fdsc","fds");
    Op.Function(Hosp);




    return 0;
}
