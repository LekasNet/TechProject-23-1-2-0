//
// Created by lekas on 26.03.2023.
//

#ifndef INC_3_BAY_H
#define INC_3_BAY_H

#include "Ocean.h"
#include "Sea.h"
#include <variant>

using namespace std;

class Bay : public Sea {
protected:
    Ocean *oceanParent;
    Sea *seaParent;

public:
    Bay();

    Bay(string _name);

    Bay(string _name, Sea *_seaParent);
    Bay(string _name, Ocean *_oceanParent);

    Bay(string _name, int _depth, int _size);

    Bay(string _name, int _depth, int _size, Sea *_seaParent);
    Bay(string _name, int _depth, int _size, Ocean *_oceanParent);

    friend ostream &operator<<(ostream &stream, Bay obj);

    void setParent(Sea *_seaParent);
    void setParent(Ocean *_oceanParent);

    variant<Sea, Ocean> *getParent();

    static string getType();
};


#endif //INC_3_BAY_H
