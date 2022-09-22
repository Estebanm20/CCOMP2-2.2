#include <iostream>
using namespace std;
int main(){
    string cad = "73167176531330624919225119";
    for(int i = 0;i<cad;i+=4){}

    cout << static_cast<int>(cad.at(0)) << endl;

}