#include <iostream>
#include "Point.h"
using namespace std;

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

void swapPoints(Point &x, Point &y){
    Point t = x;
    x = y;
    y = t;
}

int main() {
    int a = 20;
    int b = 45;

    swap(a, b);
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    Point p1(4,5);
    Point p2(9,2);
    imprimirPoint(p1);
    imprimirPoint(p2);
    swapPoints(p1,p2);
    imprimirPoint(p1);
    imprimirPoint(p2);

    return 0;
}