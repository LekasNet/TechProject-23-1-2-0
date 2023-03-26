//
// Created by lekas on 26.03.2023.
//

#include "Bay.h"
#include <iostream>
#include <variant>

using namespace std;

Bay::Bay() {
    oceanParent = nullptr;
    seaParent = nullptr;
}

Bay::Bay(string _name) : Sea(_name) {
    oceanParent = nullptr;
    seaParent = nullptr;
}

Bay::Bay(string _name, Sea *_seaParent) : Sea(_name) {
    oceanParent = _seaParent->getParent();
    seaParent = _seaParent;
}

Bay::Bay(string _name, Ocean *_oceanParent) : Sea(_name) {
    oceanParent = _oceanParent;
    seaParent = nullptr;
}

Bay::Bay(string _name, int _depth, int _size) : Sea(_name, _depth, _size) {
    oceanParent = nullptr;
    seaParent = nullptr;
}

Bay::Bay(string _name, int _depth, int _size, Sea *_seaParent) : Sea(_name, _depth, _size) {
    oceanParent = _seaParent->getParent();
    seaParent = _seaParent;
}

Bay::Bay(string _name, int _depth, int _size, Ocean *_oceanParent) : Sea(_name, _depth, _size) {
    oceanParent = _oceanParent;
    seaParent = nullptr;
}

ostream &operator<<(ostream &stream, Bay obj) {
    stream << "Type: " << obj.getType() << endl;
    stream << "Name: " << obj.name << endl;

    if (obj.seaParent or obj.oceanParent) {

        string seaParentName = (obj.seaParent ? obj.seaParent->getName() : "only ocean as parent");
        stream << "Parent sea: " << seaParentName << endl;

        string oceanParentName = (obj.oceanParent ? obj.oceanParent->getName()
                                                                  : "parent sea has no parent ocean");
        stream << "Parent ocean: " << oceanParentName << endl;

    } else {

        stream << "There is no information about papa and mama";

    }

    stream << "Depth (m): " << obj.depth << endl;
    stream << "Size (sq.km): " << obj.size << endl;

    return stream;
}


void Bay::setParent(Sea *_seaParent) {
    oceanParent = _seaParent->getParent();
    seaParent = _seaParent;
}

void Bay::setParent(Ocean *_oceanParent) {
    oceanParent = _oceanParent;
}

variant<Sea, Ocean> *Bay::getParent() {
    if (seaParent != nullptr) return reinterpret_cast<variant<Sea, Ocean> *>(seaParent);
    return reinterpret_cast<variant<Sea, Ocean> *>(oceanParent);
}

string Bay::getType() {
    return "Bay";
}
