//
// Created by lekas on 25.03.2023.
//

#ifndef PRACTIC_6_CONUS_H
#define PRACTIC_6_CONUS_H

class conus {
    double x, y, z;

    double radius;
    double height;

public:
    conus();

    conus(double _radius, double _height);

    conus(double _x, double _y, double _z, double _radius, double _height);

    void Set(double _x, double _y, double _z, double _radius, double _height);

    void Print();

    double Area();

    double Volume();
};

#endif //PRACTIC_6_CONUS_H
