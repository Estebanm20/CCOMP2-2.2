#include <iostream>
using namespace std;
#include "Point.h"

int suma(int a, int b){
    return a+b;
}
void imprimirNum(int a){
    cout<<"El numero es: "<<a<<endl;
}

void imprimirPoint(Point p){
    cout<<"("<<p.getX()<<p.getY()<<")"<<endl;
}
void modificarPoint(int _x, int _y, Point &p){
    p.setX(_x);
    p.setY(_y);
}

int main(){
    int result = suma(5,6);
    cout<<suma(5,6)<<endl;
    imprimirNum(8);

    Point p1(32,41);
    imprimirPoint(p1);
    modificarPoint(7,8,p1);
    imprimirPoint(p1);

    return 0;
}