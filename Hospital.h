#ifndef OOP_LABA_HOSPITAL_H
#define OOP_LABA_HOSPITAL_H


#include <iostream>
using namespace std;

class Hospital {
    string location;
    int floors;
    int rooms;
public:
    Hospital();
    Hospital(string newlocation);
    Hospital(string newlocation,int newfloors);
    Hospital(string newlocation,int newfloors, int newrooms);
    Hospital(Hospital &&other);
    Hospital(const Hospital &other);
    void Example(){cout<<"base method";}
    virtual void getlocation() ;//= 0;
    virtual void getfloor(){cout<<floors;}
    virtual ~Hospital(){};

};


#endif //OOP_LABA_HOSPITAL_H
