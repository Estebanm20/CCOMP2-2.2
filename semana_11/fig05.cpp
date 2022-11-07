#include <iostream>
#include "numerotelefonico.h"
using namespace std;
int main(){
    numerotelefono telefono; // crear objeto teléfono

    cout<<"Ingrese el número de teléfono en el formulario (555) 555-5555:" << endl;

    // cin >> teléfono invoca operator>> emitiendo implícitamente
    // el operador de llamada de función no miembro>>(cin, teléfono)

    cin>> telefono;

    cout<<"\nEl numero telefonico ingresado fue:\n";

    // cout << el teléfono invoca a operator<< emitiendo implícitamente
    // el operador de llamada de función no miembro<<(cout, phone)

    cout<<telefono<<endl;
}