//
// Created by adamj on 6.03.2026.
//

#ifndef LINE_POINT_H
#define LINE_POINT_H



class Point {
    private:
    double x = 0;
    double y = 0;

    public:
    Point(double _x, double _y) {
        setX(_x);
        setY(_y);
    }

    void setX(double _x) {x = (_x > 0) ? _x : 0;}
    void setY(double _y) {y = (_y > 0) ? _y : 0;}

    double getX() {return x;}
    double getY() {return y;}

};


#endif //LINE_POINT_H