//
// Created by lekas on 05.03.2023.
//

#ifndef CPPROJECT_RATIONAL_H
#define CPPROJECT_RATIONAL_H


class rational {
    int a, b;
    bool exist;

public:
    rational();

    rational(int a1, int b1);

    void set(int a1, int b1);

    void show();
};


#endif //CPPROJECT_RATIONAL_H
