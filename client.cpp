// TP6/EX1/client.cpp
// Exercice 1 : Assurance
// BODIN Maxime C2
// 22/03/30

#include "client.h"

Client::Client(const string &itsForename,
               const string &itsLastname,
               const string &itsAddress)
    : itsForename(itsForename),
      itsLastname(itsLastname),
      itsAddress(itsAddress)
{}


/*
 * Affiche le prénom,
 * nom
 * et adresse sur la sortie standard.
 */
void Client::display()
{
    cout << "Prénom : "     << itsForename  << '\n'
         << "Nom : "        << itsLastname  << '\n'
         << "Adresse : "    << itsAddress   << "\n\n";
}
