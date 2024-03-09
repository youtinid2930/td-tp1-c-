#include "segment.h"
#include "point.h"

using namespace std;

int main()
{
    Point p1(4,0),p2;
    Segment AB(p1,p2);
    cout << "la longueur de segement [A,B] est : "<< AB.longueur() <<endl;
    cout << "entrer deux point :" << endl;
    cout << " x1 = ";
    double x1;
    cin >> x1;
    cout << "y1 = ";
    double y1;
    cin >> y1;
    Point p(x1,y1);
    p.afficher();
    if(AB.appartient(p)){
        cout << "cette point appartient a ";
        AB.affiche();
    } else {
        cout << "cette point n'appartient pas a ";
        AB.affiche();
    }


    return 0;
}
