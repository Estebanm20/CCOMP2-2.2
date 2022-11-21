#include <iostream>
#include<fstream>
using namespace std;


int main(){
    ifstream source("source_file.txt");
    ofstream destination ("dest-file.txt");
    char c;
    while(source.get(c))
        destination<<c;
    if(source.eof())
        cout<<"[EoF reached]\n";
    else
        cout<<"[error reading]\n";
    source.close();
    return 0;
}