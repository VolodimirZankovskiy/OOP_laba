#include "Doctor.h"


Doctor::Doctor()
        :name("name_of_doctor"),surname("surname_of_doctor"),experience(0){}
Doctor::Doctor(std::string newname)
        :name(newname),surname("surname_of_doctor"),experience(0){}
Doctor::Doctor(std::string newname, std::string newsurname)
        :name(newname),surname(newsurname),experience(0){}
Doctor::Doctor(std::string newname, std::string newsurname, int newexp)
        :name(newname),surname(newsurname),experience(newexp){}

void Doctor::getDoctor() {
    cout<<name<<" "<<surname<<"\t"<<"Experience: "<<experience<<" years";
}

bool operator<(const Doctor &lhr, const Doctor &rhr){
    if (lhr.experience<rhr.experience)
        return false;
    else if(lhr.experience==rhr.experience)
        return false;
    else return true;
}