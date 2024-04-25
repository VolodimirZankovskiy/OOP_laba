#include "Ophthalmology.h"

Ophthalmology::Ophthalmology(std::string loc, int floor, int room, std::string name, std::string surname)
: Hospital(loc,floor,room),NameofmainDoctor{name},SurnameofmainDoctor{surname} {}

Ophthalmology::Ophthalmology(Ophthalmology &&other) : Hospital(other){
    this->NameofmainDoctor = other.NameofmainDoctor;
    this->SurnameofmainDoctor = other.SurnameofmainDoctor;
    other.SurnameofmainDoctor="";
    other.NameofmainDoctor="";
}

Ophthalmology::Ophthalmology(const Ophthalmology &other) : Hospital(other){
    this->NameofmainDoctor = other.NameofmainDoctor;
    this->SurnameofmainDoctor = other.SurnameofmainDoctor;
}