#include "cercle.h"
#include<iostream>
#include<cmath>

using namespace std;

Cercle::Cercle(){
    r=1;
    x=0;
    y=0;
}

Cercle::Cercle(double x,double y,double r) {
    this->r = r;
    this->x = x;
    this->y = y;
}

double Cercle::getr(){return r;}
double Cercle::gety() {return y;}
double Cercle::getx(){return x;}
void Cercle::setr(double r) {
    this->r = r;
}

void Cercle::setCenter(double x,double y){
    this->x = x; this->y = y;
}

double Cercle::surface() const {
    return M_PI*r*r;
}

bool Cercle::estInterieur(double x, double y){
    double p = ((this->x)-x)*((this->x)-x)+((this->y)-y)*((this->y)-y);
    return (p<=r*r);
}
