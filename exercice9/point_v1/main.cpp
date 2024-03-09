#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    Point p1(1, 2);
    p1.afficher();
    Point p2(3, 4);
    p2.afficher();
    Point p3(5, 6);
    p3.afficher();
    Point p4(7, 8);
    p4.afficher();
    Point p5(9, 10);
    p5.afficher();
    Point p6(11, 12);
    p6.afficher();

    cout << "nombre total des points : " << Point::getNomber() << endl;

    return 0;
}
