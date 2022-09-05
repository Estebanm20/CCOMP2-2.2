#include <iostream>
using namespace std;
int main(){
    int n,a,b,c,d;
    cout<<"Ingrese un entero: "<<endl;
    cin>>n;
    a = n%10000/1000;
    b = n%1000/100;
    c = n%100/10;
    d = n%10/1,
    
    cout<<d<<"      "<<c<<"       "<<b<<"     "<<a<<endl;
    return 0;
}