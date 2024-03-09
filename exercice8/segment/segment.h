#ifndef SEGMENT_H
#define SEGMENT_H

#include "point.h"


using namespace std;


class Segment : public Point {
    Point p1;
    Point p2;
    public:
        Segment();
        Segment(Point p1,Point p2);
        ~Segment();
        double longueur();
        bool appartient(Point p);
        void affiche();
};

#endif
