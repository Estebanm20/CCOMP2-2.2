#include <iostream>
using namespace std;

// reecursivo
int fib_rec(int n){
    if(n == 1 || n == 0)
        return 1;
    else{
        return fib_rec(n-2)+fib_rec(n-1);
    }
}
// iterativo

int fib_iter(int n) {
    int d=2, a=1, b=1, c=0;
    while(d<=n){
        c=a+b;
        a=b;
        b=c;
        d++;
    }
    return c;
}
int main(){
    cout<<fib_rec(8)<<endl;
    cout<<fib_iter(8)<<endl;
    return 0;
}