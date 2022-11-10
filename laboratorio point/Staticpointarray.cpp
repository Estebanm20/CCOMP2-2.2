#include <iostream>
#include "Point.h"
#include "Staticpointarray.h"

Staticpointarray::Staticpointarray(int size){
    data = new Point[size];
    this->size = size;
}

Staticpointarray::Staticpointarray(const Staticpointarray &o){
    size = o.size;
    data = new Point[o.size];
    for (int i = 0; i < size; i++)
        data[i] = o.data[i];
}

void Staticpointarray::setAt(int index, Point value){
    if(index >= 0 && index < size)
        data[index] = value;
}

Point Staticpointarray::getAt(int index) const{
    if(index >= 0 && index < size)
        return data[index];
}

int Staticpointarray::getSize() const{
    return size;
}

void Staticpointarray::print() const{
    for(int i = 0; i < size; i++){
        data[i].print();
        std::cout << " ";
    }
}

Staticpointarray::~Staticpointarray() {
    delete [] data;
}