#include <iostream>
#include <limits.h> // Для INT_MAX
#include <Windows.h>

using namespace std;

int main() {
    int n;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "RU");
    cout << "Введіть кількість елементів у масиві: ";
    cin >> n;

    int A[1]; // Оголошуємо масив A з n елементами
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Ініціалізуємо індекси для найбільшого і найменшого елементів
    int max_index = 0, min_index = 0;

    // Проходимо по масиву, знаходимо найбільший і найменший елемент
    for (int i = 1; i < n; i++) {
        if (A[i] > A[max_index]) {
            max_index = i; // Оновлюємо індекс найбільшого елемента
        }
        if (A[i] < A[min_index]) {
            min_index = i; // Оновлюємо індекс найменшого елемента
        }
    }

    // Міняємо місцями найбільший і найменший елементи
    int temp = A[max_index];
    A[max_index] = A[min_index];
    A[min_index] = temp;

    // Виводимо оновлений масив
    cout << "Масив після обміну найбільшого і найменшого елементів: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
