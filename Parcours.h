#ifndef PARCOURS_H
#define PARCOURS_H
#include <set>


    class Parcours {
    protected:
        float x;
        float y;
    public:
        Parcours(): x(0),y(0) {}//constructeur

        float get_x();
        float get_y();

        void set_x(float x);
        void set_y(float y);
    };



#endif //FORMEGEO_H
