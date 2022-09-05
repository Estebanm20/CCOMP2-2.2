#include <iostream>
using namespace std;
int main(){
    int Total_miles_driven_per_day;
    float Cost_per_gallon_of_gasoline;
    float Average_miles_per_gallon;
    float Parking_fees_per_day;
    float Tolls_per_day;
    cout<<"Millas recorridas por dia: ";
    cin >> Total_miles_driven_per_day;
	cout << "Costo por gasolina: ";
	cin >> Cost_per_gallon_of_gasoline;
	cout << "Millas por galon: ";
	cin  >> Average_miles_per_gallon;
	cout << "Estacionamiento: ";
	cin >> Parking_fees_per_day;
	cout << "Gastos por dia " << Total_miles_driven_per_day / Cost_per_gallon_of_gasoline * Average_miles_per_gallon + Tolls_per_day << endl;

    return 0;
}