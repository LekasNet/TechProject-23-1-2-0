#include "cone.h"
#include <iostream>
#include <windows.h>
#include <locale>


using namespace std;


int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    setlocale(LC_ALL, "Russian");
    int r, h, x, y, z, r1, r2;


    cout << "Cone at origin\n";
    cout << "Enter the radius and height\n";
    cin >> r >> h;


    conus cone1(r, h);


    cout << "\nArbitrary cone\n";
    cout << "Enter the origin (x, y, z), radius and height\n";
    cin >> x >> y >> z >> r >> h;


    conus cone2(x, y, z, r, h);


    cout << "\n--- First cone ---\n";
    cout << "- Area: " << cone1.Area() << '\n';
    cout << "- Volume: " << cone1.Volume() << '\n';

    cout << "\n--- Second cone ---\n";
    cout << "- Area: " << cone2.Area() << '\n';
    cout << "- Volume: " << cone2.Volume() << '\n';

    cout << "\nTruncated cone at origin\n";
    cout << "Enter the base radius, then section radius and height\n";
    cin >> r1 >> r2 >> h;


    Cone trunked_cone1(r1, r2, h);


    cout << "\nArbitrary truncated cone\n";
    cout << "Enter the origin (x, y, z), base radius, then section radius and height\n";
    cin >> x >> y >> z >> r1 >> r2 >> h;


    Cone trunked_cone2(x, y, z, r1, r2, h);


    cout << "Truncated cone at origin volume, area and meta:\n";
    cout << trunked_cone1.tVolume() << endl;
    cout << trunked_cone1.tArea() << endl;
    cout << trunked_cone1 << endl;

    cout << "Arbitrary truncated cone volume, area and meta:\n";
    cout << trunked_cone2.tVolume() << endl;
    cout << trunked_cone2.tArea() << endl;
    cout << trunked_cone2 << endl;


}