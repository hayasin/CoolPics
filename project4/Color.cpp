/**
 * Color.cpp
 * Project UID 2e6ea4e086ea6a06753e819c30923369
 *
 * EECS 183
 * Project 4: CoolPics
 *
 * Michael Dancea
 * <#uniqname(s)#>
 *
 * <#Description#>
 */

#include "Color.h"

// TODO: implement first checkRange, then two constructors, setRed, getRed,
//       setGreen, getGreen, setBlue, getBlue, read, write.


Color::Color() {

}

void Color::setRed(int redVal) {
    
}

int Color::getRed(){
    return 1;
}

void Color::setGreen(<#int greenVal#>) {
    
}

int Color::getGreen() {
    return 1;
}

void Color::setBlue(<#int blueVal#>) {
    
}

int Color::getBlue() {
    return 1;
}

void Color::read(<#istream &ins#>) {
    
}

void Color::write(<#ostream &outs#>) {
    
}



// Your code goes above this line.
// Don't change the implementations below!

istream& operator >> (istream& ins, Color& color)
{
   color.read(ins);
   return ins;
}

ostream& operator << (ostream& outs, Color color)
{
   color.write(outs);
   return outs;
}
