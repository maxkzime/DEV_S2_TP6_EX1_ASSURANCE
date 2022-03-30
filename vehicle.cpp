// TP6/EX1/vehicle.cpp
// Exercice 1 : Assurance
// BODIN Maxime C2
// 22/03/30

#include "vehicle.h"


Vehicle::Vehicle(const string &itsBrand,
                 const string &itsModel,
                 const string &itsRegistrationPlate,
                 int itsConstructionYear,
                 int itsHP)
    : itsBrand(itsBrand),
    itsModel(itsModel),
    itsRegistrationPlate(itsRegistrationPlate),
    itsConstructionYear(itsConstructionYear),
    itsHP(itsHP)
{}
