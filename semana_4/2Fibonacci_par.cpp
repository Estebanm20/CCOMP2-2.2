#include <iostream>
using namespace std;
int main(){
    int fibo1 = 0;
    int fibo2 = 1;
    int fibosum = 0; 
    while(fibo2<=4000000){
        fibosum += (fibo2%2 == 0) ? fibo2 : 0;

        int fibo3 = fibo1;
        fibo1 = fibo2; 
        fibo2 = fibo3 + fibo1;
    }

    cout<<"suma de los terminos par de la secuencia fibonacci es: "<<fibosum<<endl;
    return 0;
}