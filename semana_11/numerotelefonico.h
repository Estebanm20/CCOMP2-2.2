#ifndef NUMERO_H
#define NUMERO_H

#include <iostream>
#include <string>
using namespace std;

class numerotelefono{
    friend ostream& operator<<(ostream&,const numerotelefono&);
    friend istream& operator>>(istream&, numerotelefono&);
    private:
    string areaCode; //código de área de 3 dígitos
    string exchange; //intercambio de 3 dígitos
    string line; //línea de 4 dígitos
};

#endif
