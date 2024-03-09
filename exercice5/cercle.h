#include<iostream>



using namespace std;


class Cercle{
    double r;
    double x;
    double y;
    public:
        Cercle();
        Cercle(double x,double y,double r);
        double getx();
        double gety();
        double getr();
        void setr(double r);
        void setCenter(double x,double y);
        double surface() const;
        bool estInterieur(double x,double y);
};
