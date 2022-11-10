#ifndef __StaticPointArray__
#define __StaticPointArray__
#include "Point.h"

class Staticpointarray {
        int size;
        Point *data;
    public:
        Staticpointarray(int size);
        Staticpointarray(const Staticpointarray &o);

        void setAt(int index, Point value);
        Point getAt(int index) const;
        int getSize() const;
        void print() const;

        ~Staticpointarray();
};

#endif