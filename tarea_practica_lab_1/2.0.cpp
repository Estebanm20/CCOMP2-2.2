#include <iostream>
using namespace std;
int main(){
    int radio;
    int diametro;
    int circunferencia;
    int area;
    const float pi = 3.14159;
    cout<<"Ingrese el radio: "<<endl;
    cin>>radio;
    diametro = radio*2;
    circunferencia = 2*pi*radio;
    area = pi*(radio*radio);
    cout<<"El diametro es: "<<diametro<<endl;
    cout<<"La circunferencia es: "<<circunferencia<<endl;
    cout<<"El area es: "<<area<<endl;
    return 0;
}