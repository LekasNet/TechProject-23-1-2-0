//
// Created by lekas on 26.03.2023.
//

#ifndef INC_3_SEA_H
#define INC_3_SEA_H

#include "Ocean.h"
#include <iostream>

using namespace std;

class Sea : public Ocean {
protected:
    Ocean *oceanParent;

public:
    Sea();

    Sea(string _name);

    Sea(string _name, Ocean *_oceanParent);

    Sea(string _name, int _depth, int _size);

    Sea(string _name, int _depth, int _size, Ocean *_oceanParent);

    friend ostream &operator<<(ostream &stream, Sea obj);



    void setParent(Ocean *_oceanParent);

    Ocean *getParent();

    static string getType();
};


#endif //INC_3_SEA_H
