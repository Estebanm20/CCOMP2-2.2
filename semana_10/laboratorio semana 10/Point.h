#include <iostream>

class Point {
        int x , y;
    public:
        Point(const int _x = 0, const int _y = 0) : x(_x), y(_y) {}
        
        int getX() const { return x; }
        int getY() const { return y; }

        void setX(const int _x) { x = _x; }
        void setY(const int _y) { y = _y; }

};

std::ostream& operator<<(std::ostream& o, const Point a){
    o << "(" << a.getX() << ";" << a.getY() << ")";
    return o;
}