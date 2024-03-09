#include <iostream>
#include "point3d.h"

using namespace std;

int main()
{
    Point3D point3d1(4,3,4),point3d2(5,3,5);
    cout << "les coordonner de point3d1 est ";
    point3d1.affiche();
    cout << "les coordonner de point3d2 est ";
    point3d2.affiche();
    if(point3d1.compare(point3d2)){
        cout << "point3d1 est different de point3d2"<< endl;
    } else {
        cout << "le point3d1 est le meme que le point3d2" << endl;
    }
    return 0;
}
