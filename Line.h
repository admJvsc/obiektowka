//
// Created by adamj on 6.03.2026.
//

#ifndef LINE_LINE_H
#define LINE_LINE_H
#include "Point.h"
#include <cmath>


class Line {
private:
    Point p1, p2;

    public:
    Line() : p1(0,0), p2(0,0) {}
    Line(Point _p1, Point _p2) : p1(_p1), p2(_p2) {}

    void setPoints(Point _p1, Point _p2) {p1 = _p1; p2 = _p2; }

    double ObliczDlugosc() {
        return sqrt(pow(p2.getX()-p1.getX(),2)+pow(p2.getY()-p2.getY(),2));
    }

};


#endif //LINE_LINE_H