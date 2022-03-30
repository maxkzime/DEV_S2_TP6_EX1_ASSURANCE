// TP6/EX1/insurance.h
// Exercice 1 : Assurance
// BODIN Maxime C2
// 22/03/30

#ifndef INSURANCE_H
#define INSURANCE_H

#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <iostream>

#include "client.h"
#include "vehicle.h"

using std::string, std::vector, std::map, std::cout;

class Insurance
{

private:
    string itsName;
    map <Client*, vector <Vehicle*>> * itsVehicleContracts;

public:
    Insurance(const string &itsName);
    ~Insurance();

    void addContract(Client* client, Vehicle* vehicle);
    void removeContract(Client* client, Vehicle* vehicle);
    void displayContracts();
    void displayContractsClient(Client* client);
};

#endif // INSURANCE_H
