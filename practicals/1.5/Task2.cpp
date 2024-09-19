#include <iostream>
#include <limits.h> // ��� INT_MAX
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "RU");
    int n;
    cout << "������ ������� �������� � �����: ";
    cin >> n;

    int A[1]; // ��������� ����� A � n ����������
    cout << "������ �������� ������: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int min_positive = INT_MAX; // ���������� �������� ��������� �������� ����������� �������� ������

    for (int i = 0; i < n; i++) {
        if (A[i] > 0 && A[i] < min_positive) {
            min_positive = A[i]; // ��������� �������� ��������� ��������
        }
    }

    if (min_positive == INT_MAX) {
        cout << "� ����������� ���� �������� �����." << endl;
    }
    else {
        cout << "��������� �������� �������: " << min_positive << endl;
    }

    return 0;
}
