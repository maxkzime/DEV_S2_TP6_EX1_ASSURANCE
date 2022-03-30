// TP6/EX1/insurance.cpp
// Exercice 1 : Assurance
// BODIN Maxime C2
// 22/03/30

#include "insurance.h"

Insurance::Insurance(const string &itsName)
    : itsName(itsName)
{
    itsVehicleContracts = new map <Client*, vector <Vehicle*>>;
}


Insurance::~Insurance()
{
    for (map<Client*, vector<Vehicle*>>::iterator it = itsVehicleContracts->begin();
         it != itsVehicleContracts->end();
         ++it )
    {it = itsVehicleContracts->erase(it);}
}


/*
 * Si le client existe déjà et si le véhicule n’est pas encore assuré,
 * on ajoutera le vehicule dans sa liste des vehicules assurés.
 */
void Insurance::addContract(Client *client, Vehicle *vehicle)
{
    map<Client*, vector<Vehicle*>>::iterator it;
    it = itsVehicleContracts->find(client); // iterateur qui trouve le client ou prend nullptr

    if(it != itsVehicleContracts->end()) // si client trouvé (it != nullptr)
    {
        // on cherche si le véhicule existe déjà pour le client
        vector<Vehicle*>::iterator iit = std::find(it->second.begin(), it->second.end(), vehicle);

        // si le véhicule n'existe pas, on l'ajoute (iit = nullptr)
        if(iit == it->second.end())
            it->second.push_back(vehicle);
    }
    else{
        /*
         * Si le client n’existe pas encore, on ajoutera le client
         * et créera une nouvelle liste de véhicules assurés et y ajoutera le véhicule.
         */
        vector <Vehicle*> itsVehicles;
        itsVehicles.push_back(vehicle);
        itsVehicleContracts->insert({client, itsVehicles}); // on ajoute le client et un vecteur contenant le véhicule
    }
}


/*
 * Si le client existe et s’il s’agit d’un des ces véhicules assurés,
 * on le supprimera de sa liste de véhicules assurés.
 */
void Insurance::removeContract(Client *client, Vehicle *vehicle)
{
    map<Client*, vector<Vehicle*>>:: iterator it;
    it = itsVehicleContracts->find(client); // iterateur qui trouve le client ou prend nullptr

    if(it != itsVehicleContracts->end()) // si client trouvé (it != nullptr)
    {
        // on cherche si le véhicule existe déjà pour le client
        vector<Vehicle*>::iterator iit = std::find(it->second.begin(), it->second.end(), vehicle);

        // si le véhicule existe, on le supprime (iit != nullptr)
        if(iit != it->second.end())
        {
            delete it->second.at(distance(it->second.begin(), iit));
            it->second.erase(iit);
        }

        /*
         * Si le client n’a plus de véhicule assuré, on le supprimera également.
         */
        if(it->second.empty())
            it->first->~Client();
    }
}


/*
 * Affiche tous les clients et la liste de leurs véhicules assurés.
 */
void Insurance::displayContracts()
{
    map<Client*, vector<Vehicle*>>::iterator it = itsVehicleContracts->begin();
    while(it != itsVehicleContracts->end()){
        it->first->display();

        for(Vehicle * v : it->second)
            v->display();

        ++it;
    }
}


/*
 * affiche la liste des véhicules assurés pour un client donné.
 */
void Insurance::displayContractsClient(Client *client)
{
    map<Client*, vector<Vehicle*>>:: iterator it;
    it = itsVehicleContracts->find(client); // iterateur qui trouve le client ou prend nullptr

    if(it != itsVehicleContracts->end()) // si client trouvé (it != nullptr)
    {
        client->display();
        for(Vehicle * v : it->second)
            v->display();
    }
}
