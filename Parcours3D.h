
#ifndef RECTANGLE_H
#define RECTANGLE_H

//#include <stdio.h>

#include "Parcours.h"



class Parcours3D : public Parcours{
private:
    float xr;
    float yr;

    // float L;
    // float l;

public:

    // Rectangle(float xr, float yr, float L): FormeGeo() {}// constructeur

    Parcours3D(): Parcours(), xr(xr), yr(yr) {}

    void setXr(float x);
    void setYr(float y);
    // void setL(float Long);
    //void setl(float large);

    float getXr();
    float getYr();

    float getL(float Xr,float x);
    float getl(float Yr,float y);

    float periRect(float Large, float Long);
    float aireRect(float Large,float Long);



};



#endif //RECTANGLE_H