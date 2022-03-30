// TP6/EX1/main.cpp
// Exercice 1 : Assurance
// BODIN Maxime C2
// 22/03/30

#include "insurance.h"
#include "client.h"
#include "lorry.h"
#include "car.h"
#include "motorcycle.h"

int main()
{
    // >----------------------- JEU DE TESTS -----------------------------<
    cout << '\n' << " >----------------------- JEU DE TESTS -----------------------------< " << '\n';

    // Tests ajouts clients
    Client * cyril = new Client("Cyril", "Bonnard", "La Rochelle");
    Client * noah = new Client("Noah", "Philippe", "La Rochelle");
    Client * nils = new Client("Ninou", "Galloux", "La Rochelle");

    // Tests ajouts véhicules
    MotorCycle * moto = new MotorCycle(16,"VroumVroum","ROUGE","854542",1969,1);
    Lorry * lo = new Lorry(5,"DitCamion", "PouetPouet", "696969420", 1652, 152);
    Car * leBolide = new Car(61,"Frerary", "le2","1",1942,0);

    // Tests ajouts assurances + contrats
    Insurance laSurance("baLaSurRance");
    laSurance.addContract(cyril,moto);
    laSurance.addContract(noah,lo);
    laSurance.addContract(nils,leBolide);

    // Test affichage tous les contrats
    cout << '\n' << " ------ Test affichage tous les contrats ------ " << '\n';
    laSurance.displayContracts();

    // Test ajout d'un véhicule + contrat puis affichage
    cout << '\n' << " ------ Test ajout d'un véhicule + contrat puis affichage ------ " << '\n';
    MotorCycle * laDeuxiemeMotoDECyrile = new MotorCycle(1,"VroumVroum22","JAUNE","511",1666,100);
    laSurance.addContract(cyril,laDeuxiemeMotoDECyrile);
    laSurance.displayContracts();

    // Test suppression d'un contrat puis affichage
    cout << '\n' << " ------ Test suppression d'un contrat puis affichage ------ " << '\n';
    laSurance.removeContract(cyril,laDeuxiemeMotoDECyrile);
    laSurance.displayContracts();

    // Test affichage contrats d'un client avant et après ajout d'un nouveau contrat
    cout << '\n' << " ------ Test affichage contrats d'un client avant et après ajout d'un nouveau contrat ------ " << '\n';
    laSurance.displayContractsClient(nils);
    MotorCycle * laMotoANinou = new MotorCycle(18,"pffioooooouuu","VertE","4",250,5);
    laSurance.addContract(nils,laMotoANinou);
    laSurance.displayContractsClient(nils);

    cout << '\n' << " >----------------------- JEU DE TESTS -----------------------------< " << '\n';
    // >----------------------- JEU DE TESTS -----------------------------<

    return 0;
}
