//Done by: Kaznienko Viktoria
// 123
#include <iostream>
using namespace std;
/*A � ���������;
B, E � ����;
C � ������� �����;
D � ������;
F � ��������� ���� ��� �����.
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

    //((A <��1> <��> B) <��1> <��> C) <��>( D <��2>( E <��2> <����> F));

    bool  bRez = ((CONSTA & ~B) * (-C)) < (D * (E << sizeof F));
    cout << "Result : " << boolalpha << bRez;

    return 0;
}