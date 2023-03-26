#include "Ocean.h"
#include "Sea.h"
#include "Bay.h"
#include <iostream>

using namespace std;

int main() {
    cout << "------------- Experiment 0 -------------" << endl;
    Ocean ocean1{};
    cin >> ocean1;
    cout << ocean1 << endl;

//    cout << "------------- Base -------------" << endl;
//
//    Ocean ocean1("Arctic", 5527, 14060000);
//    cout << ocean1 << endl;

    cout << "------------- Experiment 1: iteration 1 -------------" << endl;

    Sea sea1("Laptev", 3385, 662000);
    cout << sea1 << endl;

    Bay bay1("Tiksi", 11, 250, &sea1);
    cout << bay1 << endl;

    cout << "------------- Experiment 1: iteration 2 -------------" << endl;

    sea1.setParent(&ocean1);
    bay1.setParent(&sea1);

    cout << sea1 << endl;
    cout << bay1 << endl;

    cout << "------------- Experiment 2 -------------" << endl;

    Ocean ocean2("Pacific", 11022, 178684000);
    cout << ocean2 << endl;

    Bay bay2("Avachinsky", 20, 215, &ocean2);
    cout << bay2 << endl;

    cout << "------------- Experiment 3 -------------" << endl;

    Sea sea2("Caspian", 1025, 371000);
    cout << sea2 << endl;
}