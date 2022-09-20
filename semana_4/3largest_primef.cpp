#include <iostream>
using namespace std;
int main(){
    long long n = 600851475143;
    int f;
    for(f = 3 ; f != n ; f += 2){
        if( n % f == 0 ){
            n /= f;
        }
    }
    cout<<n<<endl;
    return 0;
}