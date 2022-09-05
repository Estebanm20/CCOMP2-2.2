#include <iostream>
using namespace std;

int main()
{
	int r;
	cout << "Ingrese el radio de un circulo: ";
	cin >> r;
	cout << "El diametro es: " << r * 2 << endl;
	cout << "La circunferencia es: " << r * 2 * 3.14159 << endl;
	cout << "El area es: " << r * r * 3.14159 << endl;
}