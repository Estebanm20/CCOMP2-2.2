#include <iomanip>
#include "numerotelefonico.h"
using namespace std;

// operador de inserción de flujo sobrecargado; no puede ser una función miembro
// si quisiéramos invocarlo con cout << algunnumerotelefonico;

ostream& operator<<(ostream& output, const numerotelefono& numero){
    output<<"Area code: "<<numero.areaCode<<"\nExchange: "<< numero.exchange << "\nLine: "<<
    numero.line<<"\n"
    <<"("<<numero.areaCode<<")"<<numero.exchange<<"-"<<numero.line<<"n";
    return output;  //habilita cout << a << b << c;
}

istream& operator>>(istream& input, numerotelefono& numero){
    input.ignore(); // saltar (
    input >> setw(3) >> numero.areaCode; // código de área de entrada
    input.ignore(2); // saltar) y espacio
    input >> setw(3)>>numero.exchange; // intercambio de entrada
    input.ignore(); // saltar guión (-)
    input >> setw(4)>> numero.line; // línea de entrada
    return input; // habilita cin >> a >> b >> c;
}