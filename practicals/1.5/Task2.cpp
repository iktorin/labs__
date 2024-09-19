#include <iostream>
#include <limits.h> // Для INT_MAX
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введіть кількість елементів у масиві: ";
    cin >> n;

    int A[1]; // Оголошуємо масив A з n елементами
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int min_positive = INT_MAX; // Ініціалізуємо мінімальне позитивне значення максимально можливим числом

    for (int i = 0; i < n; i++) {
        if (A[i] > 0 && A[i] < min_positive) {
            min_positive = A[i]; // Оновлюємо мінімальне позитивне значення
        }
    }

    if (min_positive == INT_MAX) {
        cout << "У послідовності немає додатних чисел." << endl;
    }
    else {
        cout << "Найменший додатний елемент: " << min_positive << endl;
    }

    return 0;
}
