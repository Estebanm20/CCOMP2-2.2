#include <iostream>
using namespace std;
int main(){
    char a;
    cout<<"Ingrese un caracter: "<<endl;
    cin>>a;

    cout<< static_cast< int >(a);
    return 0;
}

/*#include <iostream>
using namespace std;
int main(){
    char b;
    cout<<"Ingrese un caracter: "<<endl;
    cin>>b;
    int deco(static_cast<int>(b));

    if (b >= 65) && (b<=90){
        cout<<"Es una mayuscula";
    }
    else if(b>=97) && (b<=122)

    cout
}*/