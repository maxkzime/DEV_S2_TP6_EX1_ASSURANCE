// TP6/EX1/motorcycle.cpp
// Exercice 1 : Assurance
// BODIN Maxime C2
// 22/03/30

#include "motorcycle.h"

MotorCycle::MotorCycle(int itsCapacity,
                       const string &itsBrand,
                       const string &itsModel,
                       const string &itsRegistrationPlate,
                       int itsConstructionYear,
                       int itsHP)
    : Vehicle(itsBrand,
              itsModel,
              itsRegistrationPlate,
              itsConstructionYear,
              itsHP),
      itsCapacity(itsCapacity)
{}


/*
 * Affiche la marque,
 * le modèle,
 * le numéro d’immatriculation,
 * l’année de construction,
 * la puissance en cheveaux
 * et la cylindrée sur la sortie standard.
 */
void MotorCycle::display()
{
    cout << " ------- Moto : ------- "                             << '\n'
         << "Marque : "                 << itsBrand                << '\n'
         << "Model : "                  << itsModel                << '\n'
         << "Immatriculation : "        << itsRegistrationPlate    << '\n'
         << "Année de construction : "  << itsConstructionYear     << '\n'
         << "Puissance (en chevaux) : " << itsHP                   << '\n'
         << "Cylindrée : "              << itsCapacity             << "\n\n\n";
}
