/*�������� ��������, �� ���������� � ��������� ����� main, �������� ��������� � main �����,
�� � �������� ������������ �� ��������� ���� �� ������, �� �� �������� ��������� ���� � ������ �����.*/
/*#include <iostream>

int main() {
    {
        int D = 1;
        {
        // � ������ ����� ���� ������� �� int=D
            int A = 2;
            int C = 3;
        }
    return 0;
}*/
/*������ � �������� ���� ��������� ������*/

#include <iostream>
using namespace std;
int main () {
    static int num = 0; // �������� �����, ������������ ���� ���� ���
    num++;
    cout << "Number: " << num << endl;
}

int main() {
    increment(); //Number: 1
    increment(); //Number: 2
    increment(); //Number: 3
    return 0
}

    /*������ � �������� ���� ��������� � ����� ������ � ���������(main)
    �� ��������� ������ �� ������������ ���� ��� �������� �� ��
        ��������� ������������.*/
    // �������� ����� � ��������� �����

   /* int* mainVar = new int(100); // ����������� ��� ��������
    cout << "Main block, dynamically value: " << *mainVar <<endl;

    // ������������ ���� ��������
    *mainVar = 200;
    cout << "Main block, reassigned value: " << *mainVar << endl;

    // ��������� ����
    {
        // �������� ����� � ���������� �����
        int* innerVar = new int; // ����������� ��� ��������
        *innerVar = 300;         // ����������� ����� ������������
        cout << "Inner block, dynamically allocated value: " << *innerVar <<:endl;

        // ��������� ���'��� ��� �������� �����
        delete innerVar;

        return 0;
    }

    }*/

    // ��������� �����
   /*#include<iostream>
    int globalVar = 500;

    void main () {
        static num = 0; // �������� �����, ������������ ���� ���
        num++;
        cout << "Counter: " <<num << endl;
    }

    int main() {
        // �������� ����� � ��������� �����
        int* mainVar = new int(100); // ����������� ��� ��������
        cout << "Main block, dynamically allocated value: " << *mainVar << endl;

        // ������������ ���� ��������
        *mainVar = 200;
        cout << "Main block, reassigned value: " << *mainVar <<endl;

        // ��������� ����
        {
            // �������� ����� � ���������� �����
            int* innerVar = new int; // ����������� ��� ��������
            *innerVar = 300;         // ����������� ����� ������������
            cout << "Inner block, dynamically allocated value: " << *innerVar << endl;

            // ��������� ���'��� ��� �������� �����
            delete innerVar;
        }

        // ������������ ��������� ����� ����� �������� ����������� �������
        int globalVar = 1000; // �������� ����� � ��� �� ��'��, �� � ���������
        cout << "Local globalVar: " << globalVar << endl;
        cout << "Global globalVar (using ::): " << globalVar <<endl;

        // ��������� ������� � ��������� ������
        increment(); //  number: 1
        increment(); //  number: 2
        //������ � �������� ���� ����� ��������� ������� �����/
       // int* pointerVar = nullptr;

    return 0;
}
   

