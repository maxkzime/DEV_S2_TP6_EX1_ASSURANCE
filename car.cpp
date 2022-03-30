// TP6/EX1/car.cpp
// Exercice 1 : Assurance
// BODIN Maxime C2
// 22/03/30

#include "car.h"

Car::Car(int itsNbSeats,
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
      itsNbSeats(itsNbSeats)
{}


/*
 * Affiche la marque,
 * le modèle,
 * le numéro d’immatriculation,
 * l’année de construction,
 * la puissance en cheveaux
 * et le nombre de places sur la sortie standard.
 */
void Car::display()
{
    cout << " ------- Voiture : ------- "                          << '\n'
         << "Marque : "                 << itsBrand                << '\n'
         << "Model : "                  << itsModel                << '\n'
         << "Immatriculation : "        << itsRegistrationPlate    << '\n'
         << "Année de construction : "  << itsConstructionYear     << '\n'
         << "Puissance (en chevaux) : " << itsHP                   << '\n'
         << "Nombre de places : "       << itsNbSeats              << "\n\n\n";
}
