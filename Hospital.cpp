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

