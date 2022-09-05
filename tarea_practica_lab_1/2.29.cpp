#include <iostream>
using namespace std;
int main(){
    int a = 0;
    int b = 1;
    int c = 2;
    int d = 3;
    int e = 4;
    int longitud_cubo;
    int superficie_cuboa;
    int superficie_cubob;
    int superficie_cuboc;
    int superficie_cubod;
    int superficie_cuboe;
    int volumen_cuboa;
    int volumen_cubob;
    int volumen_cuboc;
    int volumen_cubod;
    int volumen_cuboe;
    superficie_cuboa = 6*(a*a);
    superficie_cubob = 6*(b*b);
    superficie_cuboc = 6*(c*c);
    superficie_cubod = 6*(d*d);
    superficie_cuboe = 6*(e*e);
    volumen_cuboa = a*a*a;
    volumen_cubob = b*b*b;
    volumen_cuboc = c*c*c;
    volumen_cubod = d*d*d;
    volumen_cuboe = e*e*e;

    cout<<"Face lenght"<<"       "<<"Surface area"<<"       "<<"Volume"
        <<"\nof cube (cm)"<<"      "<<"of cube  (cm^2)"<<"    "<<"of cube(cm^3)"<<endl
        <<a<<"                 "<<superficie_cuboa<<"                  "<<volumen_cuboa<<endl
        <<b<<"                 "<<superficie_cubob<<"                  "<<volumen_cubob<<endl
        <<c<<"                 "<<superficie_cuboc<<"                 "<<volumen_cuboc<<endl
        <<d<<"                 "<<superficie_cubod<<"                 "<<volumen_cubod<<endl
        <<e<<"                 "<<superficie_cuboe<<"                 "<<volumen_cuboe<<endl;
    return 0;
}