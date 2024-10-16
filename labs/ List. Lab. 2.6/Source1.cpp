 Task: Linked List and inline Functions

## Description :
    You need to implement a singly linked list that allows adding elements to the front and end, removing elements from the front and end, searching for an element by value, reversing the list, clearing the list, and sorting the list in ascending order using the bubble sort algorithm.For this, you will use inline functions to improve performance.

    Some of the functions are already implemented for you, but you need to implement the rest of the functions.

    ## Steps :
    1. Node Structure

    Create a structure for a list node, which will store an integer and a pointer to the next element.

    ```cpp
    struct Node {
    int data;
    Node* next;
};
```

2. Functions for Working with the List

Implement functions for adding elements, removing elements, and printing all elements.These functions should be inline.

```cpp
// Inline function to add an element to the front of the list
inline void addToFront(Node * *head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

// Inline function to remove an element from the front of the list
inline void removeFromFront(Node * *head) {
    if (*head != nullptr) {
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
    }
}

// Inline function to print all elements of the list
inline void printList(Node * head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "null" << std::endl;
}
```

3. Main Program

In the main function, create a list, add a few elements, remove one, and display the results.

```cpp
int main() {
    Node* head = nullptr;

    // Adding elements to the list
    addToFront(&head, 10);
    addToFront(&head, 20);
    addToFront(&head, 30);

    // Printing the list
    std::cout << "List after adding elements: ";
    printList(head);

    // Removing an element from the front
    removeFromFront(&head);
    std::cout << "List after removing an element: ";
    printList(head);

    // Clearing the list
    while (head != nullptr) {
        removeFromFront(&head);
    }

    return 0;
}
```

## Tasks:
1. addToEnd : Implement an inline function for adding an element to the end of the list
3. removeFromEnd : Implement an inline function for removing the last element from the list
4. searchElement : Implement an inline function for searching for an element by value in the list and returning the pointer to the found element.If the element is not found, the function should return nullptr.
5. reverseList : Implement an inline function for reversing the list
6. sortList : Implement an inline function for sorting the list in ascending order using the bubble sort algorithm.
7. toTwoWayList : Implement an inline function for converting the singly linked list to a two - way circular linked list.
8. clearList : Implement an inline function for clearing the list and releasing the memory for all nodes using the delete operator.