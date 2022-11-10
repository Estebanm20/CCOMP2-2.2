#include <iostream>
#include "Point.h"
#include "Dynaimcpointarray.h"

Dynaimcpointarray::Dynaimcpointarray() {
    this->size = 0;
    data = new Point[0];
}

Dynaimcpointarray::Dynaimcpointarray(const Point arr[], int size){
    this->size = size;
    data = new Point[size];
    for(int i = 0; i < size; i++)
        data[i] = arr[i];
}

Dynaimcpointarray::Dynaimcpointarray(const Dynaimcpointarray &o) {
    this->size = o.size;
    this->data = new Point[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}

int Dynaimcpointarray::getSize() const {
    return size;
}

void Dynaimcpointarray::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
        std::cout << data[i] << " ";
    std::cout << "]" << std::endl;
}

void Dynaimcpointarray::push_back(Point elem) {
    // 1
    Point *tmp = new Point[size + 1];
    // 2
    for(int i = 0; i < size; i++)
        tmp[i] = data[i];
    // 3
    tmp[size] = elem;
    // 4
    size += 1;
    // 5
    delete [] data;
    // 6
    data = tmp;
}

void Dynaimcpointarray::insert(Point elem, int pos) {
    // 1
    Point *tmp = new Point[size + 1];
    // 2
    for(int i = 0, j = 0; i < size; i++, j++) {
        if( j == pos) {
            tmp[pos] = elem;
            i--;
        } else {
            tmp[j] = data[i];
        }        
    }
    // 3
    size += 1;
    // 4
    delete [] data;
    // 5
    data = tmp;
} 

void Dynaimcpointarray::remove(int pos) {
    Point *tmp = new Point[size-1];
    for(int i = 0; i<pos;i++)
        tmp[i] = data[i];
    for (int i = pos+1; i<size;i++){
                tmp[i-1] = data[i];
            size -= 1;
            delete [] data;
            data = tmp;
        }
}

Dynaimcpointarray::~Dynaimcpointarray() {
    delete[] data;
}
