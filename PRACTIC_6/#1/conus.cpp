//
// Created by lekas on 25.03.2023.
//

#include "conus.h"
#include <iostream>
#include <cmath>

conus::conus() {
    x = y = z = radius = height = 1;
}

conus::conus(double _radius, double _height) {
    x = y = z = 0;
    radius = _radius;
    height = _height;
}

conus::conus(double _x, double _y, double _z, double _radius, double _height) {
    x = _x;
    y = _y;
    z = _z;
    radius = _radius;
    height = _height;
}

void conus::Set(double _x, double _y, double _z, double _radius, double _height) {
    x = _x;
    y = _y;
    z = _z;
    radius = _radius;
    height = _height;
}

void conus::Print() {
    std::cout << "\nКоординаты центра основания: " << x << ", " << y << ", " << z << '\n';
    std::cout << "Радиус основания: " << radius << '\n';
    std::cout << "Высота конуса: " << height << '\n';
}

double conus::Area() {
    double l = sqrt(radius * radius + height * height);

    return M_PI * radius * l + M_PI * radius * radius;
}

double conus::Volume() {
    return M_PI * radius * radius * height / 3;
}