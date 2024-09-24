/*2. Задано дві послідовності, які складаються з 0 та 1.
Скласти специфікацію для моделювання операцій XOR.*/
#include <iostream>
#include <vector>
#include <cstdlib>  // Для rand() і srand()
#include <ctime>    // Для time()
#include "Windows.h"
using namespace std;

// Функція для виконання операції XOR між двома послідовностями
vector<int> xorSequences(const vector<int>& A, const vector<int>& B) {

    // Результуюча послідовність
    vector<int> result(A.size());

    // Виконуємо XOR для кожного елемента
    for (size_t i = 0; i < A.size(); ++i) {
        result[i] = A[i] ^ B[i];
    }

    return result;
}

// Функція для генерації випадкової послідовності з 0 і 1
vector<int> generateRandomSequence(size_t length) {
    vector<int> sequence(length);
    for (size_t i = 0; i < length; ++i) {
        sequence[i] = rand() % 2;  // Генеруємо випадковий 0 або 1
    }
    return sequence;
}

// Функція для виведення послідовності
void printSequence(const vector<int>& sequence) {
    for (int bit : sequence) {
        cout << bit;
    }
    cout << endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "RU");
    // Ініціалізуємо генератор випадкових чисел
    srand(static_cast<unsigned>(time(0)));

    // Запитуємо у користувача довжину послідовності
    size_t length;
    cout << "Введіть довжину послідовності: ";
    cin >> length;

    // Генеруємо дві випадкові послідовності
    vector<int> A = generateRandomSequence(length);
    vector<int> B = generateRandomSequence(length);

    // Виводимо згенеровані послідовності
    cout << "Перша випадкова послідовність: ";
    printSequence(A);

    cout << "Друга випадкова послідовність: ";
    printSequence(B);

    // Обчислюємо результат XOR
    vector<int> result = xorSequences(A, B);

    // Виводимо результат
    cout << "Результат XOR: ";
    printSequence(result);

    return 0;
}
