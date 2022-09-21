#include<iostream>
using namespace std;

int main(){
    unsigned long long suma = 0;
    unsigned long long limit = 2000000;
    for(unsigned long long i=2;i<limit;i++){
        unsigned long long n = 2;
        int primo = 1;
        while(primo==1 && n<i){
            if(i % n == 0){
                primo = 0;
            }else{
                n++;
            }
        }
        if(primo==1){
            suma = suma+i;
        }
    }
    cout << "Suma: " << suma << endl;
    return 0;
}