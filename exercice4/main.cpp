#include <iostream>
#include "point.h"

using namespace std;

int main() {
    Point p1(4,2),p2;
    cout << "x de p1 initial est " << p1.getX() << endl;
    cout << "y de p1 initial est " << p1.getY() << endl;
    cout << "x de p2 initial est " << p2.getX() << endl;
    cout << "y de p2 initail est " << p2.getY() << endl;
    p1.afficher();
    p2.afficher();
    p1.deplacer(2,4);
    p2.deplacer(1,1);
    cout << "apres le deplacement de x de p1 par 2 et y par 4"<< endl;
    cout << "x de p1 final est " << p1.getX() << endl;
    cout << "y de p1 final est " << p1.getY() << endl;
    p1.afficher();
    cout << "apres le deplacement de x de p2 par 1 et y par 1 "<< endl;
    cout << "x de p2 final est " << p2.getX() << endl;
    cout << "y de p2 final est " << p2.getY() << endl;
    p2.afficher();
    return 0;
}
