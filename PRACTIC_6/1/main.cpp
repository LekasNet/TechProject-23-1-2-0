#include "conus.h"
#include <iostream>


using namespace std;


int main() {
    int r, h, x, y, z;


    cout << "Конус с центром в начале координат\n";
    cout << "Введите радиус основания и высоту конуса:\n";


    cin >> r >> h;
    conus cone1(r, h);


    cout << "\nПроизвольный конус\n";
    cout << "Введите координаты центра основания, а затем радиус и высоту конуса:\n";
    cin >> x >> y >> z >> r >> h;


    conus cone2(x, y, z, r, h);


    cout << "\nПервый конус:\n";
    cout << "Площадь поверхности конуса: " << cone1.Area() << '\n';
    cout << "Объем конуса: " << cone1.Volume() << '\n';

    cout << "Второй конус:\n";
    cout << "Площадь поверхности конуса: " << cone2.Area() << '\n';
    cout << "Объем конуса: " << cone2.Volume() << '\n';


    conus *cone3 = new conus();


    cout << "\nПроизвольный динамический конус\n";
    cout << "Введите координаты центра основания, а затем радиус и высоту конуса:\n";
    cin >> x >> y >> z >> r >> h;
    cone3->Set(x, y, z, r, h);
    cout << "\nДинамический конус:";


    cone3->Print();
    delete cone3;
    int n = 3;
    conus *A = new conus[n];


    for (int i = 0; i < n; i++) {
        A[i] = conus(1, 1, 1, 1, 1);
    }

    cout << "\n\nМассив из трех одинаковых конусов:";

    for (int i = 0; i < n; i++) {
        cout << '\n';
        A[i].Print();
    }

    delete[] A;
}