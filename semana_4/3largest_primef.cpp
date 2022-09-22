#include <iostream>
using namespace std;
int main(){
    long long n = 13195;
    for(int f = 3 ; f != n ; f += 2){
        if( n % f == 0 ){
            n /= f;
        }
    }
    cout<<"El mayor factor primo del numero 13195 es: "<<n<<endl;
    return 0;
}