//
// Created by lekas on 05.03.2023.
//

#ifndef CPPROJECT_EQ2_H
#define CPPROJECT_EQ2_H


class eq2 {
    double a, b, c;
    double D;

public:
    eq2(double a1, double b1, double c1);

    void set(double a1, double b1, double c1);

    double find_X(), find_Y(double x1);

    double get_a(), get_b(), get_c();

    void print();
};

eq2 operator+(eq2 A, eq2 B);

#endif //CPPROJECT_EQ2_H
