#include <iostream>
#include "cercle.h"

using namespace std;

int main()
{
    Cercle c1(3,4,4),c2;
    cout << "cercle c1 initial de center ("<<c1.getx()<<","<<c1.gety()<<") et de rayon "<<c1.getr()<<endl;
    cout << "cercle c2 initial de center ("<<c2.getx()<<","<<c2.gety()<<") et de rayon "<<c2.getr()<<endl;
    cout << "apres la modification de center de c1 and c2 :"<<endl;
    c1.setCenter(6,8);
    c2.setCenter(4,0);
    cout << "cercle c1 final de center ("<<c1.getx()<<","<<c1.gety()<<") et de rayon "<<c1.getr()<<endl;
    cout << "cercle c2 final de center ("<<c2.getx()<<","<<c2.gety()<<") et de rayon "<<c2.getr()<<endl;
    cout << "la surface de c1 est : "<<c1.surface()<<endl;
    cout << "la surface de c2 est : "<<c2.surface()<<endl;

    double x,y;
    cout << "entrer les coordonner x :";
    cin >>x;
    cout << "entrer les coordonner y :";
    cin >> y;
    if(c1.estInterieur(x,y)){
        cout << "cette point est exterieur le cercle c1" << endl;
    } else {
        cout << "cette point est interieur le cercle c1" << endl;
    }
    if(c2.estInterieur(x,y)){
        cout << "cette point est exterieur le cercle c2" << endl;
    } else {
        cout << "cette point est interieur le cercle c2" << endl;
    }
    return 0;
}
