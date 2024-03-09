#include<iostream>
#include "point.h"
#include "rictangle.h"
#include<cmath>

using namespace std;


Rictangle::Rictangle(){
    longueur = 1;
    largeur = 1;
}

Rictangle::Rictangle(Point p){
    Point(p.getX(),p.getY());
    longueur = 1;
    largeur = 1;
}

Rictangle::Rictangle(double L,double l){
    longueur = L;
    largeur = l;
}

Rictangle::Rictangle(Point p,double L,double l){
    Point(p.getX(),p.getY());
    longueur = L;
    largeur = l;
}

double Rictangle::perimetre(){
    return 2*longueur+2*largeur;
}

double Rictangle::surface(){return longueur*largeur;}

double Rictangle::diagonale(){
    return sqrt(longueur*longueur+largeur*largeur);
}

