//
// Created on 2/7/2016.
//

#include <cmath>
#include "Point.h"

Point::Point() : __x(0), __y(0), __z(0) { }

Point::Point(double x, double y, double z) : __x(x), __y(y), __z(z){ }

void Point::setX(double newX) {
    __x = newX;
}

void Point::setY(double newY) {
    __y = newY;
}

void Point::setZ(double newZ) {
    __z = newZ;
}

double Point::getX() const {
    return __x;
}

double Point::getY() const {
    return __y;
}

double Point::getZ() const {
    return __z;
}

double Point::distanceTo(const Point &point) const {
    return sqrt(pow(point.__x - __x, 2) + pow(point.__y - __y, 2) + pow(point.__z - __z, 2));
}

