#include <iostream>
using namespace std;
int main(){
    float BMI; 
    float WK;
    float HM;
    WK = WK * 1000;
    cout<<"BMI VALUES"<<endl;
    cout<<"Ingrese su peso en kilos: "<<endl;
    cin>>WK;
    cout<<"Ingrese su altura en metros: "<<endl;
    cin>>HM;
    BMI = (WK)/(HM*HM);
    if(BMI<18.5){
    cout<<"Underweight: "<<BMI<<endl;
    }
    else if(BMI>=18.5&&BMI<=24.9){
        cout<<"Normal: "<<BMI<<endl;
    }
    else if(BMI>=25&&BMI<=29.9){
        cout<<"Overweight: "<<BMI<<endl;
    }
    else if(BMI>=30){
        cout<<"Obese: "<<BMI<<endl;
    }
    return 0;
}