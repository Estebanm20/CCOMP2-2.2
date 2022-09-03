#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Ingrese un anio: ";
    cin>>year;
    if(year%4==0){
        cout<<"Es un anio bisiesto: "<<endl;
    }
    else if (year%100==0 ){
        cout<<"Es un anio bisiesto: "<<endl;
    }
    else if (year%400==0){
        cout<<"No es un anio bisiesto: "<<endl;
    }
    else{
        cout<<"No es un anio bisiesto"<<endl;
    } 
    return 0;
}