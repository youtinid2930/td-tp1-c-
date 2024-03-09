#include <iostream>
#include "point.h"
#include "rictangle.h"

using namespace std;

int main()
{
    Point p1(4,5),p2(3,3);
    Rictangle r1(p1),r2(p2,2,3),r3(3,4);
    cout << "le premetre de r1 est : " << r1.perimetre() << endl;
    cout << "la surface de r1 est : " << r1.surface() << endl;
    cout << "le diagonale de r1 est : " << r1.diagonale() << endl;
    cout << "le premetre de r2 est : " << r2.perimetre() << endl;
    cout << "la surface de r2 est : " << r2.surface() << endl;
    cout << "le diagonale de r2 est : " << r2.diagonale() << endl;
    cout << "le premetre de r3 est : " << r3.perimetre() << endl;
    cout << "la surface de r1 est : " << r3.surface() << endl;
    cout << "le diagonale de r1 est : " << r3.diagonale() << endl;
    r1.deplacer(3,4);
    r2.deplacer(3,4);
    r3.deplacer(5,4);
    cout << "les cordonner de centre de r1 ";
    r1.afficher();
    cout << "les cordonner de centre de r2 ";
    r2.afficher();
    cout << "les cordonner de centre de r3 ";
    r3.afficher();
    return 0;
}
