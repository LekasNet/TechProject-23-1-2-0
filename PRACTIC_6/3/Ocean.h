//
// Created by lekas on 26.03.2023.
//

#ifndef INC_3_OCEAN_H
#define INC_3_OCEAN_H

#include <iostream>

using namespace std;

class Ocean {
protected:

    string name;
    int depth, size;

public:
    Ocean();

    Ocean(string _name);

    Ocean(string _name, int _depth, int _size);

    friend ostream &operator<<(ostream &stream, Ocean obj);

    friend istream& operator>>(istream &stream, Ocean& obj);

    string getName();

    static string getType();
};


#endif //INC_3_OCEAN_H
