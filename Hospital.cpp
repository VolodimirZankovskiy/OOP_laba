#include "Hospital.h"
using namespace std;


Hospital::Hospital()
        :location("location"),floors(1),rooms(1){}

Hospital::Hospital(std::string newlocation)
        :location(newlocation),floors(1),rooms(1){}

Hospital::Hospital(std::string newlocation, int newfloors)
        :location(newlocation),floors(newfloors),rooms(1){}

Hospital::Hospital(std::string newlocation, int newfloors, int newrooms)
        :location(newlocation),floors(newfloors),rooms(newrooms){}

Hospital::Hospital(const Hospital &other) {
    this->location = other.location;
    this->rooms = other.rooms;
    this->floors = other.floors;
}

Hospital::Hospital(Hospital &&other) {
    this->location = other.location;
    this->rooms = other.rooms;
    this->floors = other.floors;
    other.floors=0;
    other.rooms=0;
    other.location="";
}

void  Hospital::getlocation() {cout<<location;}