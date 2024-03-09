#include<iostream>

using namespace std;

class Point3D {
    double x,y,z;
    public:
        Point3D(double x,double y,double z);
        void affiche();
        bool compare(Point3D pd);
};
