//Done by: Kaznienko Viktoria
// 123
#include <iostream>
using namespace std;
/*A – константа;
B, E – змінні;
C – вказівна змінна;
D – літерал;
F – індикатор типу або вираз.
7 9872 29 54.12 6 -11234 long*/
int main() {

    const int CONSTA = 7;
    int B, E;
    B = 9872;
    E = -11234;
    float C;
    float* pC;
    pC = &C;
    *pC = 54.12;
    int D = 6;
    long F;

    //((A <БО1> <УО> B) <АО1> <СО> C) <ОВ>( D <АО2>( E <БО2> <БазО> F));

    bool  bRez = ((CONSTA & ~B) * (-C)) < (D * (E << sizeof F));
    cout << "Result : " << boolalpha << bRez;

    return 0;
}