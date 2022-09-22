#include<iostream>
using namespace std;

int main(){
    unsigned long long suma = 0;
    unsigned long long num = 10;///2000000
    for(unsigned long long i=2;i<num;i++){
        unsigned long long n = 2;
        bool primo = true;
        while(primo==true && n<i){
            if(i % n == 0){
                primo = 0;
            }else{
                n++;
            }
        }
        if(primo==true){
            suma = suma+i;
        }
    }
    cout << "Suma de todos los primos por debajo de 2 millones es: " << suma << endl;
    return 0;
}