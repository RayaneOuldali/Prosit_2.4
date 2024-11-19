#ifndef POINT3D_H
#define POINT3D_H

#include "Point.h"

class Point3D : public Point {     //heritage des point x,y
private:
    float R;
public:
    Point3D(): R(0) {}// constructeur
    float getR();
    void setR(float Rayon);

    float getArea(float Rayon);
    float getPerime(float Rayon);

};



#endif //POINT3D_H
