#include <iostream>
using namespace std;
int main(){
    int lenght_a = 0;
    int lenght_b = 1;
    int lenght_c = 2;
    int lenght_d = 3;
    int lenght_e = 4;
    int surface_a;
    int surface_b;
    int surface_c;
    int surface_d;
    int surface_e;
    int volume_a;
    int volume_b;
    int volume_c;
    int volume_d;
    int volume_e;

    surface_a = 6*(lenght_a*lenght_a);
    surface_b = 6*(lenght_b*lenght_b);
    surface_c = 6*(lenght_c*lenght_c);
    surface_d = 6*(lenght_d*lenght_d);
    surface_e = 6*(lenght_e*lenght_e);

    volume_a = lenght_a*lenght_a*lenght_a;
    volume_b = lenght_b*lenght_b*lenght_b;
    volume_c = lenght_c*lenght_c*lenght_c;
    volume_d = lenght_d*lenght_d*lenght_d;
    volume_e = lenght_e*lenght_e*lenght_e;

    cout<<"Face lenght                   Surface area               Volume"<<endl;
    cout<<"of cube (cm)                  of cube (cm^2)             of cube(cm^3)"<<endl;
    cout<<lenght_a<<"                             "<<surface_a<<"                          "<<volume_a<<endl;
    cout<<lenght_b<<"                             "<<surface_b<<"                          "<<volume_b<<endl;
    cout<<lenght_c<<"                             "<<surface_c<<"                         "<<volume_c<<endl;
    cout<<lenght_d<<"                             "<<surface_d<<"                         "<<volume_d<<endl;
    cout<<lenght_e<<"                             "<<surface_e<<"                         "<<volume_e<<endl;

    return 0;

}

