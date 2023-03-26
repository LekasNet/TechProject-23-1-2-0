//
// Created by lekas on 25.03.2023.
//

#include "cone.h"
#include "conus.h"
#include <iostream>
#include <cmath>

const double pi = 3.14159265;

Cone::Cone() {
    x = y = z = radius1 = radius2 = height = 1;
}

Cone::Cone(double _radius1, double _radius2, double _height) {
    x = y = z = 0;
    radius1 = _radius1;
    radius2 = _radius2;
    height = _height;
}

Cone::Cone(double _x, double _y, double _z, double _radius1, double _radius2, double _height) {
    x = _x;
    y = _y;
    z = _z;
    radius1 = _radius1;
    radius2 = _radius2;
    height = _height;
}

void Cone::tSet(double _x, double _y, double _z, double _radius1, double _radius2, double _height) {
    x = _x;
    y = _y;
    z = _z;
    radius1 = _radius1;
    radius2 = _radius2;
    height = _height;
}

double Cone::tArea() {
    double l = sqrt(height * height + (radius1 - radius2) * (radius1 - radius2));
    return pi * radius1 * radius1 + pi * radius2 * radius2 + pi * (radius1 + radius2) * l;
}

double Cone::tVolume() {
    return (pi * height * (radius1 * radius1 + radius1 * radius2 + radius2 * radius2)) / 3;
}

std::ostream& operator<<(std::ostream& stream, Cone obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "r1 = " << obj.radius1 << " ";
    stream << "r2 = " << obj.radius2 << " ";
    stream << "h = " << obj.height << "\n";
    return stream;
}