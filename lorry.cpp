// TP6/EX1/lorry.cpp
// Exercice 1 : Assurance
// BODIN Maxime C2
// 22/03/30

#include "lorry.h"

Lorry::Lorry(int itsAutorisedLoad,
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
      itsAutorisedLoad(itsAutorisedLoad)
{}


/*
 * Affiche la marque,
 * le modèle,
 * le numéro d’immatriculation,
 * l’année de construction,
 * la puissance en cheveaux
 * et la charge autorisée sur la sortie standard.
 */
void Lorry::display()
{
    cout << "Marque : "                 << itsBrand                << '\n'
         << "Model : "                  << itsModel                << '\n'
         << "Immatriculation : "        << itsRegistrationPlate    << '\n'
         << "Année de construction : "  << itsConstructionYear     << '\n'
         << "Puissance (en chevaux) : " << itsHP                   << '\n'
         << "Charge autorisée : "       << itsAutorisedLoad        << "\n\n";
}
