/* Add a description of static variables to the program */
#include <iostream>
using namespace std;

void increment() {
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