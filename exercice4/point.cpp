#include "point.h"
#include <iostream>

using namespace std;

Point::Point() {
x=0;
y=0;
}
Point::Point(double x,double y){
  this->x=x;this->y=y;
}

Point::~Point(){
    cout << "deleted";
}
double Point::getX(){return x;}
double Point::getY() {return y;}
void Point::setX(double x){
    this->x = x;
}
void Point::setY(double y){
    this->y=y;
}

void Point::deplacer(double dx,double dy) {
    x = x + dx;
    y = y + dy;
}

void Point::afficher(){
    cout << "(" << x << "," << y << ")" << endl;
}
