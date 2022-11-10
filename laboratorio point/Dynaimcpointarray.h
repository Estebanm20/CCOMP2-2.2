#ifndef __DYNAMICPOINTARRAY__
#define __DYNAMICPOINTARRAY__
#include "Point.h"

class Dynaimcpointarray {
        int size;
        Point *data;
    public:
        Dynaimcpointarray();
        Dynaimcpointarray(const Point[], int size);
        Dynaimcpointarray(const Dynaimcpointarray &o);

        int getSize() const;
        void print() const;

        void push_back(Point elem);
        void insert(Point elem, int pos);
        void remove(int pos);

        ~Dynaimcpointarray();

};

#endif