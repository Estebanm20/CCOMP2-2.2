#include <iostream>
using namespace std;
int main(){
    int multi= 0;
    for(int i = 0;i<1000;i++){
        multi = (multi%3 == 0) && (multi%5 == 0) ? multi :0;
    }
    cout<<multi<<endl;
    return 0;
}
