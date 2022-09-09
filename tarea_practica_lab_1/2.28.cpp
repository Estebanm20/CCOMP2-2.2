#include <iostream>
using namespace std;
int main(){
    int n,a,b,c,d,e;
    cout<<"Ingrese un entero de 5 digitos: "<<endl;
    cin>>n;
    a = n%100000/10000;
    b = n%10000/1000;
    c = n%1000/100;
    d = n%100/10;
    e = n%10/1;
    
    cout<<e<<"      "<<d<<"       "<<c<<"      "<<b<<"      "<<a<<endl;
    return 0;
}