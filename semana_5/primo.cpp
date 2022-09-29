#include <iostream>
using namespace std;


///primorec
bool esprimo(int n){
    if(n == 1)
        return 1;
    return n * esprimo(n-1);
}




int main(){

    cout<<esprimo(8)<<endl;
}