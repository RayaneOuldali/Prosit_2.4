#ifndef POINT3D_H
#define POINT3D_H

# include "Point.h"

class Point3D : public CLPoint{     //heritage des point x,y
protected:
    float x;
    float y;
    float z;
public:
    Point3D(): x(0),y(0),z(0) {} //constructeur

    float get_x() override ;
    float get_y() override ;
    float get_z() override ;

    void set_x(float x) override ;
    void set_y(float y) override ;
    void set_z(float y) override ;
};



#endif //POINT3D_H
