#include <iostream>
using namespace std;
int main(){
    int y = 20;
    int *yPtr;
    yPtr = &y;

    cout<<*yPtr<<endl;
    *yPtr = 500;
    cout<<y<<endl;

    int x = 100;
    yPtr = &x;

    cout<<*yPtr<<endl;
    *yPtr = 300;
    cout<<x<<endl;
    return 0;
}