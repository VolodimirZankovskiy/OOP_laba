#include <iostream>
#include "Hospital.h"
#include "Doctor.h"
#include "Patient.h"

using namespace std;

int main() {
    Patient VovaBuryonka("Vova", "Savyenko", 18);
    VovaBuryonka.getCounter();
    Patient VovaBuryonka2("Vova", "Savyenko", 18);
    VovaBuryonka2.getCounter();
    Doctor A("h","d",12);
    Doctor B("h","d",2);
    if(A<B)
        cout<<"ok";
    else cout<<"bad";
    cout<<VovaBuryonka;
    cin>>VovaBuryonka2;
    cout<<VovaBuryonka2;
    return 0;
}
