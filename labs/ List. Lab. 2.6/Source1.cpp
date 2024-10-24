/*Done by: Kaznienko Viktoria.123
Task: Linked List and inline Functions

    1. addToEnd : Implement an inline function for adding an element to the end of the list
    3. removeFromEnd : Implement an inline function for removing the last element from the list
    4. searchElement : Implement an inline function for searching for an element by value in the list and returning the pointer to the found element.If the element is not found, the function should return nullptr.
    5. reverseList : Implement an inline function for reversing the list
    6. toTwoWayList : Implement an inline function for converting the singly linked list to a two - way circular linked list.
    7. clearList : Implement an inline function for clearing the list and releasing the memory for all nodes using the delete operator.
    */

#include <iostream>
#include <Windows.h>
using namespace std;
// Структура вузла однозв'язного списку
struct Node {
    int data;   // Поле для зберігання даних
    Node* next; // Вказівник на наступний елемент
};

// Функція для додавання елемента на початок списку
inline void addToFront(Node** head, int value) {
    Node* newNode = new Node; // Створюємо новий вузол
    newNode->data = value;    // Присвоюємо значення новому вузлу
    newNode->next = *head;    // Вказуємо, що новий вузол буде посилатися на поточний "головний" елемент
    *head = newNode;          // Робимо новий вузол "головним" елементом списку
}

// Функція для додавання елемента в кінець списку
inline void addToEnd(Node** head, int value) {
    Node* newNode = new Node;   // Створюємо новий вузол
    newNode->data = value;      // Присвоюємо значення новому вузлу
    newNode->next = nullptr;    // Новий елемент буде останнім, тому next = nullptr
    if (*head == nullptr) {     // Якщо список порожній
        *head = newNode;        // Новий елемент стає головним елементом
    }
    else {
        Node* current = *head;  // Починаємо з головного елемента
        while (current->next != nullptr) { // Проходимо до останнього елемента списку
            current = current->next;
        }
        current->next = newNode; // Додаємо новий елемент в кінець списку
    }
}

// Функція для видалення елемента з початку списку
inline void removeFromFront(Node** head) {
    if (*head != nullptr) {       // Якщо список не порожній
        Node* temp = *head;       // Зберігаємо поточний головний елемент для видалення
        *head = (*head)->next;    // Змінюємо головний елемент на наступний
        delete temp;              // Видаляємо попередній головний елемент
    }
}

// Функція для видалення елемента з кінця списку
inline void removeFromEnd(Node** head) {
    if (*head == nullptr) return;   // Якщо список порожній, нічого не робимо
    if ((*head)->next == nullptr) { // Якщо у списку лише один елемент
        delete* head;               // Видаляємо цей елемент
        *head = nullptr;            // Робимо список порожнім
    }
    else {
        Node* current = *head;      // Починаємо з головного елемента
        while (current->next->next != nullptr) { // Шукаємо передостанній елемент
            current = current->next;
        }
        delete current->next;       // Видаляємо останній елемент
        current->next = nullptr;    // Останній елемент списку тепер передостанній
    }
}

// Функція для пошуку елемента за значенням
inline Node* searchElement(Node* head, int value) {
    Node* current = head;       // Починаємо з головного елемента
    while (current != nullptr) { // Проходимо по всіх елементах
        if (current->data == value) { // Якщо знаходимо елемент з потрібним значенням
            return current;      // Повертаємо вказівник на цей елемент
        }
        current = current->next; // Переходимо до наступного елемента
    }
    return nullptr;              // Якщо елемент не знайдений, повертаємо nullptr
}


// Функція для очищення списку (видалення всіх елементів)
inline void clearList(Node** head) {
    while (*head != nullptr) {  // Поки список не порожній
        removeFromFront(head);  // Видаляємо елементи один за одним з початку
    }
}

// Функція для виведення всіх елементів списку
inline void printList(Node* head) {
    Node* current = head;           // Починаємо з головного елемента
    while (current != nullptr) {    // Проходимо по всіх елементах
        cout << current->data << " -> "; // Виводимо значення елемента
        current = current->next;    // Переходимо до наступного елемента
    }
    cout << "null" << endl; // Виводимо "null" в кінці списку
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "RU");
    Node* head = nullptr; // Створюємо порожній список

    // Додаємо елементи на початок списку
    addToFront(&head, 10);
    addToFront(&head, 20);
    addToFront(&head, 30);

    // Виводимо список після додавання елементів
    cout << "Список після додавання елементів на початок: ";
    printList(head);

    // Додаємо елементи в кінець списку
    addToEnd(&head, 40);
    addToEnd(&head, 50);

    // Виводимо список після додавання елементів в кінець
    cout << "Список після додавання елементів в кінець: ";
    printList(head);

    // Шукаємо елемент зі значенням 20
    Node* search = searchElement(head, 20);
    if (search) {
        cout << "Елемент 20 знайдений." << endl;
    }
    else {
        cout << "Елемент 20 не знайдений." << endl;
    }

    // Видаляємо елемент з початку списку
    removeFromFront(&head);
    cout << "Список після видалення елемента з початку: ";
    printList(head);

    // Видаляємо елемент з кінця списку
    removeFromEnd(&head);
    cout << "Список після видалення елемента з кінця: ";
    printList(head);

    // Очищаємо список
    clearList(&head);
    cout << "Список після очищення: ";
    printList(head);

    return 0;
}