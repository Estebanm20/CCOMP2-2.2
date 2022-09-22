#include <iostream>
#include <string>
using namespace std;
int main(){
    string cad = "73167176531330624919225119674426574742355349194934";
    int i = 0;

    while(cad[i+4]!='\0'){
        string r = cad.substr(i,4);
    }
    

    cout << static_cast<int>(cad.at(0)) << endl;

}