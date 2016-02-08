## CSCI 2312: Programming Assignment 1

### 3D Point Class:

####[Point.h](https://github.com/rawlingb/ucd-csci2312-pa1/blob/master/Point.h)

Description: Contains all the definitions for the point class methods and variables

####[Point.cpp](https://github.com/rawlingb/ucd-csci2312-pa1/blob/master/Point.cpp)

Description: Contains the implementation for all of the point class methods.

####Member Variables:

double __x, __y, and __z: Each variable holds the coordinates for a point in 3D space.

####Member Functions:

Point(): The default constructor for the Point Class.
Point(double, double, double): Constructor the takes in doubles to use as the coordinates of the Point.
void setX(double): Takes in a double to set as the x-coordinate for the Point.
void setY(double): Takes in a double to set as the y-coordinate for the Point.
void setZ(double): Takes in a double to set as the z-coordinate for the Point.
double getX() const: Returns the x-value of the Point.
double getY() const: Returns the y-value of the Point.
double getZ() const: Returns the z-value of the Point.
double distanceTo(const Point &point) const: Returns the distance in 3-D space between this Point and another Point.

###Area Class:

####[area.cpp](https://github.com/rawlingb/ucd-csci2312-pa1/blob/master/area.cpp)

Description: Contains a method used to get the area of a triangle formed between three 3-D Points.

####Member Functions:

double computeArea(const Point, const Point, const Point): Calculates the area of a triangle formed by three points and returns it

