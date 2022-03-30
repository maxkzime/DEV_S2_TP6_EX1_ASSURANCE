// TP6/EX1/car.h
// Exercice 1 : Assurance
// BODIN Maxime C2
// 22/03/30

#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class Car: public Vehicle
{
private:
    int itsNbSeats;

public:
    Car(int itsNbSeats,
        const string &itsBrand,
        const string &itsModel,
        const string &itsRegistrationPlate,
        int itsConstructionYear,
        int itsHP);

    void display();
};

#endif // CAR_H
