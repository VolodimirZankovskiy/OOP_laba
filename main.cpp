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
    Patient VovaBuryonka("Vova", "Savtenko", 18);
    VovaBuryonka.getCounter();
    Patient VovaBuryonka2("Vova", "Savtenko", 18);
    VovaBuryonka2.getCounter();
    Doctor A("h","d",12);
    Doctor B("h","d",2);
    if(A<B)
        cout<<"ok";
    else cout<<"bad";
    cout<<VovaBuryonka;
    cin>>VovaBuryonka2;
    cout<<VovaBuryonka2;
    Ophthalmology Uui ("Chernivtsi",12,3,"Ivan","Burak");
    Traumatology AAA("Khust",12,52,1488,"vitsrachka");
    Diagnosis Dur("Durac","Vova","Zankovskiy",18,
              "Vlad","Ostrovskiy",1,"forever");
    return 0;
}
