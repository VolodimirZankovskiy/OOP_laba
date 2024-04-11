#include "Patient.h"
using namespace std;

Patient::Patient() {}
Patient::Patient(string newname) {
    name = newname;
    counter++;
}
Patient::Patient(string newname, string newsurname) {
    name = newname;
    surname = newsurname;
    counter++;
}
Patient::Patient(string newname, string newsurname, int newage) {
    name = newname;
    surname = newsurname;
    age = newage;
    counter++;
}
Patient::Patient(const Patient &other) {
    this->age = other.age;
    this->name = other.name;
    this->surname = other.surname;
}
Patient::Patient(Patient &&other){
    this->name = other.name;
    this->age = other.age;
    this->surname = other.surname;
    other.name = "";
    other.surname = "";
    other.age = 0;
}

int Patient::counter = 0;

void Patient::getCounter() {
    cout<<counter<<"\t";
}

ostream &operator<<(ostream &os, const Patient &obj){
    os<<obj.name<<" "<<obj.surname<<"\t"<<obj.age<<endl;
    return os;
}

istream &operator>>(istream&is, Patient &obj){
    is>>obj.name;
    is>>obj.surname;
    is>>obj.age;
    return is;
}