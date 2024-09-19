/**
 * Done by:
 * Student Name: Kaznienko Viktoria
 * Student Group: 123
 * Practice 1.5
 */
/*
2. Задано послідовність значень А[n]. Знайти найменше значення серед
додатних елементів послідовності А[n].
3. Задано послідовність значень А[n]. Знайти найбільше і найменше
значення та поміняти їх місцями.*/
#include <iostream>
#include "Windows.h"
#include <vector>
using namespace std;

//1. Задано послідовність значень А[n] і деяке значення P.Знайти індекс першого входження Р у послідовність А[n].

using namespace std;

void initRandomizer() {
    // Seed the random number generator with the current time
    srand(time(0));  // srand(time(NULL)) could also be used
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "RU");
        initRandomizer();

        int n, P;
        cout << "Введіть довжину послідовності: ";
        cin >> n;

        vector<int> A(n);

        // Вводимо елементи послідовності
        cout << "Введіть елементи послідовності: ";
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }

        // Вводимо значення P
        cout << "Введіть значення P: ";
        cin >> P;

        // Пошук першого входження P
        int index = -1;  // Ініціалізуємо індекс значенням -1
        for (int i = 0; i < n; i++) {
            if (A[i] == P) {
                index = i;  // Якщо знайшли P, зберігаємо індекс і виходимо з циклу
                break;
            }
        }

        // Виводимо результат
        if (index != -1)
            cout << "Перше входження P на індексі: " << index << endl;
        else
            cout << "Значення P не знайдено в послідовності." << endl;

        return 0;
    }