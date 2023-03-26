//
// Created by lekas on 26.03.2023.
//

#include "Ocean.h"
#include <iostream>

using namespace std;


Ocean::Ocean() {
    name = "";
    depth = size = 0;
}

Ocean::Ocean(string _name) {
    name = _name;
    depth = size = 0;
}

Ocean::Ocean(string _name, int _depth, int _size) {
    name = _name;
    depth = _depth;
    size = _size;
}


ostream &operator<<(ostream &stream, Ocean obj) {
    stream << "Type: "          << obj.getType() << endl;
    stream << "Name: "          << obj.name << endl;
    stream << "Depth (m): "     << obj.depth << endl;
    stream << "Size (sq.km): "  << obj.size << endl;
    return stream;
}

istream& operator>>(istream &stream, Ocean& obj) {
    cout << "Enter name of the ocean:\n";
    stream >> obj.name;
    cout << "Enter depth:\n";
    stream >> obj.depth;
    cout << "Enter size:\n";
    stream >> obj.size;
    cout << endl;
}



string Ocean::getName() {
    return name;
}

string Ocean::getType() {
    return "Ocean";
}