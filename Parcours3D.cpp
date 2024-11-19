#include "Rectangle.h"

#include <cmath>
#include <math.h>

void Parcours3D::setXr(float x) {
    this->xr = x;
}

void Parcours3D::setYr(float y) {
    this->yr = y;
}

/*
void Rectangle::setl(float large) {
 this->l = large;
}

void Rectangle::setL(float Long) {
 this->l = Long;
}
*/

float Parcours3D::getXr() {
    return xr;
}

float Parcours3D::getYr() {
    return yr;
}

float Parcours3D::getL(float xr,float x) {
    return fabs(xr - x);
}

float Parcours3D::getl(float yr,float y) {
    return fabs(yr - y);
}

float Rectangle::periRect(float Large, float Long) {
    return 2*(Large+Long);
}

float Rectangle::aireRect(float Long, float Large) {
    return (Large*Long);
}
