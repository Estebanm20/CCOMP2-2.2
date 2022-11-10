#include <iostream>
#include "Point.h"
#include "Dynaimcpointarray.h"
#include "Staticpointarray.h"

using namespace std;

int main() {
    Dynaimcpointarray da;
    cout << da.getSize() << endl;

    Point p1{5, 6};
    Point p2{4, 8};
    Point p3{0, 15};
    Point p4{2, 2};

    Point arreglo[] = {p1, p2, p3, p4};
    Point p5;
    Dynaimcpointarray da2(arreglo, 4);
    da2.print();
    Dynaimcpointarray da3 = da2;
    da3.print();

    da2.push_back(p5);
    da2.print();
    Point p6{7, 7};
    da2.insert(p6, 1);
    da2.print();
    Point p7{100, 100};
    da2.insert(p7, 0);
    da2.print();

    Point p8{0, 6};
    da2.insert(p8, 6);
    da2.print();

    return 0;
}