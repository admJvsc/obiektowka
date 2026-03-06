#include <iostream>
#include "Line.h"
int main() {
    Line* lines = new Line[2];
    lines[0] = Line(Point(1,3), Point(2,4));
    lines[1] = Line(Point(1,1), Point(10,10));

    std::cout<<"Dlugosc pierwszej linii: " << lines[0].ObliczDlugosc() << std::endl;
    std::cout<<"Dlugosc drugiej linii: " << lines[1].ObliczDlugosc();

    delete[] lines;
    return 0;

}
