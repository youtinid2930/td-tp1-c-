#include<iostream>
#include "point3d.h"

using namespace std;

Point3D::Point3D(double x,double y,double z){
    this->x=x;
    this->y=y;
    this->z=z;
}

void Point3D::affiche(){
    cout << "(" << x << ","<<y<<","<<z<<")"<<endl;
}

bool Point3D::compare(Point3D pd){
    return ((this->x==x)&&(this->y=y)&&(this->z=z));
}
