/**
 * Done by: Kaznienko Viktoria
 * Student Name: Kaznienko Viktoria
 * Student Group: 123
 * Lab 1.5
 * Variant : 7
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //Завдання1: описати змінні.
    //Завдання2: описати змінні цілого та дійсного типу згідно з варіантом (табл. 2.8).

    float a = 42.6;
    float b = 3.0;
    int c = 12;
    int d = 79;

    //Завдання3: Використання унарних, бінарних логічних операцій та операцій відношення при обчисленні наступного виразу :
    // <УЛО1> (<УЛО2> (A<ОВ1>B) <БЛО> (<УЛО3> (C<ОВ2>D)))

    //  empty (    (a != b)    &&   (   !   (c >= d)))

    {
        bool res1 = ((a != b) && (!(c >= d)));
        cout << "result: " << boolalpha << res1 << endl;

    }
    return 0;
}