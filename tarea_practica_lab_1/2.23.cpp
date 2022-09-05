#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int d;
    int e;
    cout<<"Ingrese 5 numeros: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    if (a>b&&a>c&&a>d&&a>e){
        cout<<"El numero mayor es: "<<a<<endl;
    }
    else if(b>a&&b>c&&b>d&&b>e){
         cout<<"El numero mayor es: "<<b<<endl;
    }
    else if(c>a&&c>b&&c>d&&c>e){
         cout<<"El numero mayor es: "<<c<<endl;
    }
    else if(d>a&&d>b&&d>c&&d>e){
         cout<<"El numero mayor es: "<<d<<endl;
    }
    else if(e>a&&e>b&&e>c&&e>d){
         cout<<"El numero mayor es: "<<e<<endl;
    }
    return 0;
}