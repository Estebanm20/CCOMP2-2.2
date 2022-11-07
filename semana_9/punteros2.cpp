#include <iostream>
using namespace std;
int main(){
    int y = 20;
    int &ref = y;
    int *ptr = &y;
    cout<<ref<<endl;
    ++ref;
    cout<<y<<endl;
    *ptr = 100;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<ref<<endl;
}