// TP6/EX1/lorry.h
// Exercice 1 : Assurance
// BODIN Maxime C2
// 22/03/30

#ifndef LORRY_H
#define LORRY_H

#include "vehicle.h"

class Lorry: public Vehicle
{
private:
    int itsAutorisedLoad;

public:
    Lorry(int itsAutorisedLoad,
          const string &itsBrand,
          const string &itsModel,
          const string &itsRegistrationPlate,
          int itsConstructionYear,
          int itsHP);

    void display();
};

#endif // LORRY_H
