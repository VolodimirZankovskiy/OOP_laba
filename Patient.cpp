#include "Patient.h"
using namespace std;

Patient::Patient() {}
Patient::Patient(string newname) {
    name = newname;
}
Patient::Patient(string newname, string newsurname) {
    name = newname;
    surname = newsurname;
}
Patient::Patient(string newname, string newsurname, int newage) {
    name = newname;
    surname = newsurname;
    age = newage;
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
    other.name = "noname";
    other.surname = "nosurname";
    other.age = 0;
}