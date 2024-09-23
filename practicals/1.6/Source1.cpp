/*1. Задано ціле значення А.Визначити, яких бітів(0 чи 1)
більше в його двійковому поданні.
2. Задано дві послідовності, які складаються з 0 та 1.
Скласти специфікацію для моделювання операцій XOR.*/


#include <iostream>
        using namespace std;

        int main() {
            int A;  // ціле число
            cout << "Введіть ціле число A: ";
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
