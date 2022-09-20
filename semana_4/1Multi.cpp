#include <iostream>
using namespace std;
int main(){
    int multi= 0;
    for(int i = 0;i<1000;i++){
        multi += ((i%3 == 0) || (i%5 == 0)) ? i :0;
    }
    cout<<multi<<endl;
    return 0;
}

