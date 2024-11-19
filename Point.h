
#ifndef POINT_H
#define POINT_H
//#include <set>


    class CLPoint {
    protected:
        float x;
        float y;
    public:
        CLPoint(): x(0),y(0) {} //constructeur

        virtual float get_x();
        virtual float get_y();

        virtual void set_x(float x);
        virtual void set_y(float y);
    };



#endif //POINT_H