#include "point.h"
#include <iostream>

using namespace std;

int Point::nomberPoint = 0;

Point::Point() {
nomberPoint++;
x=0;
y=0;
}
Point::Point(double x,double y){
    nomberPoint++;
    this->x=x;this->y=y;
}

Point::~Point(){
    nomberPoint--;
    cout << "nombre de point qui reste est "<<nomberPoint<<endl;
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
    cout << "le nombre de point creer est "<<getNomber()<<endl;
}

int Point::getNomber(){return nomberPoint;}
