/*Написати програму, що складається з головного блоку main, декількох вкладених в main блоків,
що є динамічно розподіленими по відношенню один до іншого, та ще декількох вкладених один в другий блоків.*/
/*#include <iostream>

int main() {
    {
        int D = 1;
        {
        // в даному блоці немає доступу до int=D
            int A = 2;
            int C = 3;
        }
    return 0;
}*/
/*Додати в програму опис статичних змінних*/

#include <iostream>
using namespace std;
int main () {
    static int num = 0; // Статична змінна, ініціалізується лише один раз
    num++;
    cout << "Number: " << num << endl;
}

int main() {
    increment(); //Number: 1
    increment(); //Number: 2
    increment(); //Number: 3
    return 0
}

    /*Додати в програму опис динамічних в блоці змінних у головному(main)
    та вкладених блоках та ініціалізувати змінні при створенні та за
        допомогою привласнення.*/
    // Динамічна змінна в головному блоці

   /* int* mainVar = new int(100); // Ініціалізація при створенні
    cout << "Main block, dynamically value: " << *mainVar <<endl;

    // Привласнюємо нове значення
    *mainVar = 200;
    cout << "Main block, reassigned value: " << *mainVar << endl;

    // Вкладений блок
    {
        // Динамічна змінна в вкладеному блоці
        int* innerVar = new int; // Ініціалізація без значення
        *innerVar = 300;         // Ініціалізація через привласнення
        cout << "Inner block, dynamically allocated value: " << *innerVar <<:endl;

        // Звільняємо пам'ять для вкладеної змінної
        delete innerVar;

        return 0;
    }

    }*/

    // Глобальна змінна
   /*#include<iostream>
    int globalVar = 500;

    void main () {
        static num = 0; // Статична змінна, ініціалізується один раз
        num++;
        cout << "Counter: " <<num << endl;
    }

    int main() {
        // Динамічна змінна в головному блоці
        int* mainVar = new int(100); // Ініціалізація при створенні
        cout << "Main block, dynamically allocated value: " << *mainVar << endl;

        // Привласнюємо нове значення
        *mainVar = 200;
        cout << "Main block, reassigned value: " << *mainVar <<endl;

        // Вкладений блок
        {
            // Динамічна змінна в вкладеному блоці
            int* innerVar = new int; // Ініціалізація без значення
            *innerVar = 300;         // Ініціалізація через привласнення
            cout << "Inner block, dynamically allocated value: " << *innerVar << endl;

            // Звільняємо пам'ять для вкладеної змінної
            delete innerVar;
        }

        // Використання глобальної змінної через оператор глобального доступу
        int globalVar = 1000; // Локальна змінна з тим же ім'ям, що й глобальна
        cout << "Local globalVar: " << globalVar << endl;
        cout << "Global globalVar (using ::): " << globalVar <<endl;

        // Викликаємо функцію зі статичною змінною
        increment(); //  number: 1
        increment(); //  number: 2
        //Додати в програму опис першої типізованої вказівної змінної/
       // int* pointerVar = nullptr;

    return 0;
}
   

