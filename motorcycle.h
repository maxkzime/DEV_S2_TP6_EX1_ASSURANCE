// TP6/EX1/motorcycle.h
// Exercice 1 : Assurance
// BODIN Maxime C2
// 22/03/30

#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "vehicle.h"

class MotorCycle : public Vehicle
{
private:
    int itsCapacity;

public:
    MotorCycle(int itsCapacity,
               const string &itsBrand,
               const string &itsModel,
               const string &itsRegistrationPlate,
               int itsConstructionYear,
               int itsHP);

    void display();
};

#endif // MOTORCYCLE_H
