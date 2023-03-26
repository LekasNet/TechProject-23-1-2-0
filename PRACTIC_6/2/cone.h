//
// Created by lekas on 25.03.2023.
//

#include "conus.h"


#ifndef PRACTIC_6_CONE_H
#define PRACTIC_6_CONE_H

class Cone : public conus::conus {

    double x, y, z;
    double radius1;
    double radius2;
    double height;

public:

    Cone();

    Cone(double _radius1, double _radius2, double _height);

    Cone(double _x, double _y, double _z, double _radius1, double _radius2, double _height);

    void tSet(double _x, double _y, double _z, double _radius1, double _radius2, double _height);

    double tArea();

    double tVolume();

    friend std::ostream& operator<<(std::ostream& stream, Cone obj);

};

#endif //PRACTIC_6_CONE_H
