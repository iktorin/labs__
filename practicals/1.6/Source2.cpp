/*2. ������ �� �����������, �� ����������� � 0 �� 1.
������� ������������ ��� ����������� �������� XOR.*/
#include <iostream>
#include <vector>
#include <cstdlib>  // ��� rand() � srand()
#include <ctime>    // ��� time()
#include "Windows.h"
using namespace std;

// ������� ��� ��������� �������� XOR �� ����� ��������������
vector<int> xorSequences(const vector<int>& A, const vector<int>& B) {

    // ����������� �����������
    vector<int> result(A.size());

    // �������� XOR ��� ������� ��������
    for (size_t i = 0; i < A.size(); ++i) {
        result[i] = A[i] ^ B[i];
    }

    return result;
}

// ������� ��� ��������� ��������� ����������� � 0 � 1
vector<int> generateRandomSequence(size_t length) {
    vector<int> sequence(length);
    for (size_t i = 0; i < length; ++i) {
        sequence[i] = rand() % 2;  // �������� ���������� 0 ��� 1
    }
    return sequence;
}

// ������� ��� ��������� �����������
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
    // ���������� ��������� ���������� �����
    srand(static_cast<unsigned>(time(0)));

    // �������� � ����������� ������� �����������
    size_t length;
    cout << "������ ������� �����������: ";
    cin >> length;

    // �������� �� �������� �����������
    vector<int> A = generateRandomSequence(length);
    vector<int> B = generateRandomSequence(length);

    // �������� ���������� �����������
    cout << "����� ��������� �����������: ";
    printSequence(A);

    cout << "����� ��������� �����������: ";
    printSequence(B);

    // ���������� ��������� XOR
    vector<int> result = xorSequences(A, B);

    // �������� ���������
    cout << "��������� XOR: ";
    printSequence(result);

    return 0;
}
