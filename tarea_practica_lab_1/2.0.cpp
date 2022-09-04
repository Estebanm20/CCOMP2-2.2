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
    diametro = circunferencia/pi;
    circunferencia = 2*pi*radio;
    area = pi*radio*radio;
    return 0;
}