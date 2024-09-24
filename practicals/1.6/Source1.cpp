/*1. Задано ціле значення А.Визначити, яких бітів(0 чи 1)
більше в його двійковому поданні.*/
// done by: Kaznienko Viktoria
//123
#include <iostream>
#include "Windows.h"
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "RU");
    int A;  //  число
    cout << "Введіть число A: ";
    cin >> A;

    int countOnes = 0, countZeros = 0;

    // Перебираємо біти числа
    for (int i = 0; i < sizeof(A) * 8; i++) {
        if (A & (1 << i)) {  // Якщо i-й біт дорівнює 1
            countOnes++;
        }
        else {  // Якщо i-й біт дорівнює 0
            countZeros++;
        }
    }

    cout << "Кількість одиниць: " << countOnes << endl;
    cout << "Кількість нулів: " << countZeros << endl;

    // Порівнюємо кількість бітів
    if (countOnes > countZeros) {
        cout << "Одиниць більше, ніж нулів." << endl;
    }
    else if (countOnes < countZeros) {
        cout << "Нулів більше, ніж одиниць." << endl;
    }
    else {
        cout << "Кількість одиниць та нулів однакова." << endl;
    }

    return 0;
}
