/**
 * Point.cpp
 *
 * EECS 183
 * Lab 7
 * Taken from Project 4: CoolPics
 *
 * Hasan, Michael
 * hayasin, madancea
 *
 * Finds coordinate for different points, determines if range is papropriate
 */

#include "Point.h"

// for the declaration of DIMENSION
#include "utility.h"

// TODO: implement two constructors, setX, getX, setY, getY, read, write, checkRange.

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int xVal, int yVal) {
    x = xVal;
    y = yVal;
}

void Point::setX(int xVal){
    x = xVal;
}
void Point::setY(int yVal){
    y = yVal;
}

int Point::getX(){
    return x;
}
int Point::getY(){
    return y;
}

void Point::write(ostream& outs) {
    //Ensuring that point x or y is within proper range
    x = checkRange(x);
    y = checkRange(y);
    
    outs.clear();
    outs << '(' << x << ',' << ' ' << y << ')';

    return;
}

void Point::read(istream& ins) {
    ins.clear();
    char a;
    ins >> a >> x >> a >> y >> a;

    return;
}

    // Check if the point is within a given range
//int Point::checkRange(int val){
//    if(val <= DIMENSION && val >= 0){
//        return val;
//    }
//    else if (val < 0){
//        val = 0;
//        return val;
//    }
//    else{
//        val = DIMENSION - 1;
//        return val;
//    }
//
//}

int Point::checkRange(int val){
    if(val < 0){
        return 0;
    }
    else if (val >= DIMENSION){
        return DIMENSION - 1;
    }
    else {
        return val;
    }
}


// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins,  Point& pt)
{
    pt.read(ins);
    return ins;
}

ostream& operator<< (ostream& outs, Point pt)
{
    pt.write(outs);
    return outs;
}
