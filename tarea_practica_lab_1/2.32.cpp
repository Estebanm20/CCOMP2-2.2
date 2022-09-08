#include<iostream>
using namespace std;
int main(){
    int age;
    int MHR;
    int MHR2;
    cout<<"Ingrese su edad: "<<endl;
    cin>>age;
    MHR = 200-age;
    cout<<MHR<<" bpm"<<endl;
    if(MHR<=170){
        cout<<"Estas en el rango de 20 años";
    }
    else if(MHR<=100&&162){
        cout<<"Estas en el rango de 30 años";
    }
     else if(MHR<=95&&157){
        cout<<"Estas en el rango de 35 años";
    }
     else if(MHR<=93&&153){
        cout<<"Estas en el rango de 40 años";
    }
     else if(MHR<=90&&149){
        cout<<"Estas en el rango de 45 años";
    }
     else if(MHR<=88&&145){
        cout<<"Estas en el rango de 50 años";
    }
     else if(MHR<=85&&140){
        cout<<"Estas en el rango de 55 años";
    }
     else if(MHR<=83&&136){
        cout<<"Estas en el rango de 60 años";
    }
     else if(MHR<=78&&132){
        cout<<"Estas en el rango de 65 años";
    }
     else if(MHR<=75&&128){
        cout<<"Estas en el rango de 70 años";
    }
}