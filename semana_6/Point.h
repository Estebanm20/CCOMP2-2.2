#include <iostream>
using namespace std;
 class Point{
    public:
    Point(int _x, int _y): x(_x), y(_y){}
    void setX(int _x){
        x = _x;
    }
    void setY(int _y){
        y = _y;
    }
    int getX()const{
        return x;
    }
    int getY()const{
        return y;
    }

    private:
    int x,y;
 };