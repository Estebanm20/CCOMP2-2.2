#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Ingrese un numero del 100 al 500 : "<<endl;
    cin>>a;
    if (a < 250){
        cout<<"Su numero es muy bajo, intente denuevo :( "<<endl;
        cin>>a;}
    else if (a>250){
        cout<<"Su numero es muy alto, intente denuevo :( "<<endl;
    cin>>a;
    }
    else if (a == 250){
        cout<<"felicidades uested gano :D "<<endl;
    }

}