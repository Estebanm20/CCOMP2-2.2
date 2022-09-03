#include <iostream>
using namespace std;
int main(){
    int n,a,b,c;
    cout<<"Ingrese un entero: "<<endl;
    cin>>n;
    a = n%1000/100;
    b = n%100/10;
    c = n%10/1;
    
    cout<<a<<"      "<<b<<"       "<<c<<endl;
}