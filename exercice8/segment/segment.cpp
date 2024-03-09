#include "segment.h"
#include <iostream>
#include <cmath>

using namespace std;

Segment::Segment(){
    Point(p1.getX(),p1.getY());
    Point(p2.getX(),p2.getY());
}
Segment::Segment(Point p1,Point p2) {
    this->p1.setX(p1.getX());
    this->p1.setY(p1.getY());
    this->p2.setX(p2.getX());
    this->p2.setY(p2.getY());
}

Segment::~Segment(){}


double Segment::longueur(){
    return sqrt((this->p1.getX()-this->p2.getX())*(this->p1.getX()-this->p2.getX())+(this->p1.getY()-this->p2.getY())*(this->p1.getY()-this->p2.getY()));
}

bool Segment::appartient(Point p) {

    double minX = min(p1.getX(), p2.getX());
    double maxX = max(p1.getX(), p2.getX());
    double minY = min(p1.getY(), p2.getY());
    double maxY = max(p1.getY(), p2.getY());

    p.afficher();
    if (p.getX() >= minX && p.getX() <= maxX && p.getY() >= minY && p.getY() <= maxY) {

        double slope = (p2.getY() - p1.getY()) / (p2.getX() - p1.getX());
        cout << "slope = " <<slope<< endl;
        double b = p1.getY()-slope*p1.getX();
        cout << "b = " <<b<<endl;
        cout << "slope*getX()-b = "<<slope*getX()-b<<endl;
        cout << "return : " << (p.getY() == slope*getX()-b) << endl;
        return (p.getY() == slope*getX()-b);
    }
    return 0;

}

void Segment::affiche() {
    cout << "Segment | A("<<p1.getX()<<","<<p1.getY()<<"); B("<<p2.getX()<<","<<p2.getY()<<") |"<<endl;
}
