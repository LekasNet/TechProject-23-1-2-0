//
// Created by lekas on 26.03.2023.
//

#include "Sea.h"
#include <iostream>

using namespace std;

Sea::Sea() {
    oceanParent = nullptr;
}

Sea::Sea(string _name) : Ocean(_name) {
    oceanParent = nullptr;
}

Sea::Sea(string _name, Ocean *_oceanParent) : Ocean(_name) {
    oceanParent = _oceanParent;
}

Sea::Sea(string _name, int _depth, int _size) : Ocean(_name, _depth, _size) {
    oceanParent = nullptr;
}

Sea::Sea(string _name, int _depth, int _size, Ocean *_oceanParent) : Ocean(_name, _depth, _size) {
    oceanParent = _oceanParent;
}


ostream &operator<<(ostream &stream, Sea obj) {
    stream << "Type: " << obj.getType() << endl;
    stream << "Name: " << obj.name << endl;
    string oceanParentName = (obj.oceanParent ? obj.oceanParent->getName() : "there is an inland sea");
    stream << "Parent ocean: " << oceanParentName << endl;
    stream << "Depth (m): " << obj.depth << endl;
    stream << "Size (sq.km): " << obj.size << endl;
    return stream;
}


void Sea::setParent(Ocean *_oceanParent) {
    oceanParent = _oceanParent;
}


Ocean *Sea::getParent() {
    return oceanParent;
}

string Sea::getType() {
    return "Sea";
}
