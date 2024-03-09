#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;

class Point {
private:
    double x,y;
public:
    Point();
    Point (double x,double y);
    ~Point();
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
    void deplacer(double dx,double dy);
    void afficher();
};

#endif
