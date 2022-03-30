// TP6/EX1/client.h
// Exercice 1 : Assurance
// BODIN Maxime C2
// 22/03/30

#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <iostream>

using std::string, std::cout;

class Client
{
private:
    string itsForename;
    string itsLastname;
    string itsAddress;

public:
    Client(const string &itsForename,
           const string &itsLastname,
           const string &itsAddress);

    void display();
};

#endif // CLIENT_H
