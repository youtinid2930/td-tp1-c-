#include<iostream>


using namespace std;


class Rictangle : public Point {
    Point p;
    double longueur;
    double largeur;
    public:
        double perimetre();
        double surface();
        double diagonale();
        Rictangle();
        Rictangle(Point p);
        Rictangle(double L,double l);
        Rictangle(Point p,double L,double l);
};
