//
// Created by lekas on 21.02.2023.
//

#ifndef CPPROJECT_TRIANGLE_H
#define CPPROJECT_TRIANGLE_H


class Triangle {
private:
    double a, b, c;

public:
    bool exst_tr ();
    void set (double a1, double b1, double c1);
    void show ();
    double perimetr();
    double square();
};


#endif //CPPROJECT_TRIANGLE_H
