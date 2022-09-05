#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Ingrese 2 enteros: "<<endl;
    cin>>a;
    cin>>b;
    if(a%b==0){
    cout<<a<<"Es multiplo de: "<<b<<endl;
    }
    else{
        cout<<a<<" "<<"No es multiplo de: "<<b<<endl;
    }
    return 0;
}