/* Write a program that consists of a main block, several blocks nested in the main block
that are dynamically distributed relative to each other, and several more blocks nested within one another. */

/* #include <iostream>

int main() {
    {
        int D = 1;
        {
        // In this block, there is no access to int D
            int A = 2;
            int C = 3;
        }
    }
    return 0;
} */

/* Add a description of static variables to the program */

#include <iostream>
using namespace std;

int main() {
    static int num = 0; // Static variable, initialized only once
    num++;
    cout << "Number: " << num << endl;
}

int main() {
    increment(); // Number: 1
    increment(); // Number: 2
    increment(); // Number: 3
    return 0;
}

/* Add a description of dynamic variables in the main block
and nested blocks, and initialize variables upon creation and via assignment. */

// Dynamic variable in the main block

/* int* mainVar = new int(100); // Initialization upon creation
cout << "Main block, dynamically allocated value: " << *mainVar << endl;

// Assign a new value
*mainVar = 200;
cout << "Main block, reassigned value: " << *mainVar << endl;

// Nested block
{
    // Dynamic variable in the nested block
    int* innerVar = new int; // Initialization without a value
    *innerVar = 300;         // Initialization via assignment
    cout << "Inner block, dynamically allocated value: " << *innerVar << endl;

    // Free the memory for the inner variable
    delete innerVar;

    return 0;
}

/* Global variable */
#include <iostream>
int globalVar = 500;

void increment() {
    static int num = 0; // Static variable, initialized only once
    num++;
    cout << "Counter: " << num << endl;
}

int main() {
    // Dynamic variable in the main block
    int* mainVar = new int(100); // Initialization upon creation
    cout << "Main block, dynamically allocated value: " << *mainVar << endl;

    // Assign a new value
    *mainVar = 200;
    cout << "Main block, reassigned value: " << *mainVar << endl;

    // Nested block
    {
        // Dynamic variable in the nested block
        int* innerVar = new int; // Initialization without a value
        *innerVar = 300;         // Initialization via assignment
        cout << "Inner block, dynamically allocated value: " << *innerVar << endl;

        // Free the memory for the inner variable
        delete innerVar;
    }

    // Use the global variable through the global access operator
    int globalVar = 1000; // Local variable with the same name as the global one
    cout << "Local globalVar: " << globalVar << endl;
    cout << "Global globalVar (using ::): " << ::globalVar << endl;

    // Call the function with the static variable
    increment(); // number: 1
    increment(); // number: 2

    // Add a description of the first typed pointer variable
    // int* pointerVar = nullptr;

    return 0;
}

   

