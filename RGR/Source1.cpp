//Done by: Kaznienko Viktoria
// 123
// variant 10
/*������� ��������, �� �� �������� ��� L(V):
1.*1234 (������ '*' �� �������)
2.1234* (������ '*' � ����)
3.abc*123 (�����, � �� �����)
4.123-456 (������������ ������� '-' ������ '*')

������� ��������, �� �������� ��� L(V):
1.123*456
2.7888*4456
3.5*9*/
#include <iostream>  // ϳ�������� �������� ��� ��������/���������
#include <string>    // ϳ�������� �������� ��� ������ � �������
#include <Windows.h> // ��� ����������� ��������
using namespace std; // std ��� ��������� ����������

// �������, ��� ��������, �� � ����� ������ ����� � ����� L(V)
bool isValidString(const string& word) {
    int len = word.size();  // �������� ������� �����
    bool result = true;     // ������ ��������� ����������, �� ����� � ����������

    // ��������� ������� ������� '*' � �����
    int starPos = word.find('*');

    // ����������, �� � ������ '*' � ����� � �� �� ����������� �� �� ������� ��� � ����
    if (starPos == string::npos || starPos == 0 || starPos == len - 1) {
        return false;  // ���� '*' �� �������� ��� �� �� ������� �� � ����, ��������� false
    }

    // ���������� ����� ������� ����� (�� ������� '*')
    for (int i = 0; i < starPos; ++i) {  // ��������� �� �������� �� '*'
        if (!isdigit(word[i])) {  // ���� ������ �� � ������
            return false;  // ����� ��������, ��������� false
        }
    }

    // ���������� ����� ������� ����� (���� ������� '*')
    for (int i = starPos + 1; i < len; ++i) {  // ��������� �� �������� ���� '*'
        if (!isdigit(word[i])) {  // ���� ������ �� � ������
            return false;  // ����� ��������, ��������� false
        }
    }

    return result;  // ���� �� �������� ������� ������, ��������� true
}

int main() {
    SetConsoleCP(1251);//��� ����������� ������ �� ���������
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "RU");
    string word;  // ��������� ����� ��� ��������� �����

    // �������� ����� ��� �������� �����
    cout << "������ �����: ";
    cin >> word;  // ������� ����� �� �����������

    // ��������� ������� isValidString ��� �������� �������� �����
    bool result = isValidString(word);

    // �������� ��������� ��������
    if (result) {
        cout << "����� �������� ��� L(V)" << endl;  // ���� ����� �������, �������� �����������
    }
    else {
        cout << "����� �� �������� ��� L(V)" << endl;  // ���� ����� �� �������, �������� ���� �����������
    }

    return 0;  
}

