
#ifndef POINT_H
#define POINT_H
//#include <set>


    class CLPoint {
    protected:
        float x;
        float y;
    public:
        CLPoint(): x(0),y(0) {} //constructeur

        float get_x();
        float get_y();

        void set_x(float x);
        void set_y(float y);
    };



#endif //POINT_H