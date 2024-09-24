/*1. ������ ���� �������� �.���������, ���� ���(0 �� 1)
����� � ���� ��������� ������.*/
// done by: Kaznienko Viktoria
//123
#include <iostream>
#include "Windows.h"
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "RU");
    int A;  //  �����
    cout << "������ ����� A: ";
    cin >> A;

    int countOnes = 0, countZeros = 0;

    // ���������� ��� �����
    for (int i = 0; i < sizeof(A) * 8; i++) {
        if (A & (1 << i)) {  // ���� i-� �� ������� 1
            countOnes++;
        }
        else {  // ���� i-� �� ������� 0
            countZeros++;
        }
    }

    cout << "ʳ������ �������: " << countOnes << endl;
    cout << "ʳ������ ����: " << countZeros << endl;

    // ��������� ������� ���
    if (countOnes > countZeros) {
        cout << "������� �����, �� ����." << endl;
    }
    else if (countOnes < countZeros) {
        cout << "���� �����, �� �������." << endl;
    }
    else {
        cout << "ʳ������ ������� �� ���� ��������." << endl;
    }

    return 0;
}
