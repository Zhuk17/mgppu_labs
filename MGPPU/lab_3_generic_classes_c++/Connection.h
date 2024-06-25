#ifndef CONNECTION_H
#define CONNECTION_H

#include "Bolt.h"
#include "Nut.h"
#include <iostream>

using namespace std;

class Connection {
private:
    Bolt* bolt;
    Nut* nut;

public:
    Connection(Bolt* b, Nut* n) : bolt((b != nullptr) ? b : nullptr), nut((n != nullptr) ? n : nullptr) {}

    void connect() {
        if(bolt && nut) {
           cout << "Болт " << bolt->getNumber() << " вкручен в гайку " << nut->getNumber() << endl;
        }
    }
};

#endif