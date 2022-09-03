/*operaciones basicas de suma,resta,multiplicación y división
*/
#include <iostream>
using namespace std;
int main(){
    //declarando variables
    int a;
    int b;
    cout<<"Ingrese un numero: "<<endl;
    cin>>a;
    cout<<"Ingrese un numero: "<<endl;
    cin>>b;

    int suma = a+b;
    int resta = a-b;
    int multiplicacion = a* b;
    int division = a/b;

    cout<<"suma de a y b:  "<< suma<<endl;
    cout<<"resta de a y b: "<< resta<<endl;
    cout<<"multiplicacion de a y b: "<<multiplicacion<<endl;
    cout<<"Division de a y b: "<<division<<endl;

    return 0;
}