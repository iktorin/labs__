#include <iostream>
#include <limits.h> // ��� INT_MAX
#include <Windows.h>

using namespace std;

int main() {
    int n;
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "RU");
    cout << "������ ������� �������� � �����: ";
    cin >> n;

    int A[1]; // ��������� ����� A � n ����������
    cout << "������ �������� ������: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // ���������� ������� ��� ���������� � ���������� ��������
    int max_index = 0, min_index = 0;

    // ��������� �� ������, ��������� ��������� � ��������� �������
    for (int i = 1; i < n; i++) {
        if (A[i] > A[max_index]) {
            max_index = i; // ��������� ������ ���������� ��������
        }
        if (A[i] < A[min_index]) {
            min_index = i; // ��������� ������ ���������� ��������
        }
    }

    // ̳����� ������ ��������� � ��������� ��������
    int temp = A[max_index];
    A[max_index] = A[min_index];
    A[min_index] = temp;

    // �������� ��������� �����
    cout << "����� ���� ����� ���������� � ���������� ��������: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
