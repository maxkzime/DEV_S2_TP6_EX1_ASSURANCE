#ifndef VEHICLE_H
#define VEHICLE_H

#include <insurance.h>
#include <iostream>

using std::cout;

class Vehicle
{
protected:
    string itsBrand;
    string itsModel;
    string itsRegistrationPlate;
    int itsConstructionYear;
    int itsHP;

public:
    Vehicle(const string &itsBrand, const string &itsModel, const string &itsRegistrationPlate, int itsConstructionYear, int itsHP);

    virtual void display() = 0;

};

#endif // VEHICLE_H