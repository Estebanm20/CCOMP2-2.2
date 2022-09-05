#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int suma;
    cout<<"Inagrese 2 numeros: "<<endl;
    cin>>a;
    cin>>b;
    suma = a + b;
    if(suma%2==0){
        cout<<"La suma es par"<<endl;
    }
    else{
        cout<<"La suma es impar"<<endl;
    }
    return 0;
}