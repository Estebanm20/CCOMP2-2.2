#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Ingrese un numero: ";
	cin >> a;
	if (a % 2 == 0){
    cout << "El numero " << a << " es par" << endl;
    }
	else{
    cout << "El numero " << a << " es impar" << endl;
    }
    return 0;
}