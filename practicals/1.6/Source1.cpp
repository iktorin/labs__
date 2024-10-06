// Task: Determine whether there are more 1-bits or 0-bits in the binary representation of an integer A.
// done by: Kaznienko Viktoria

#include <iostream>
#include "Windows.h"
using namespace std;

int main() {
    SetConsoleCP(1251);         // Sets the input code page to Windows-1251 for reading in Russian characters
    SetConsoleOutputCP(1251);   // Sets the output code page to Windows-1251 for printing in Russian characters

    setlocale(LC_ALL, "RU");    // Sets the locale to Russian for proper character display
    int A;  // the integer value
    cout << "Enter number A: ";
    cin >> A;

    int countOnes = 0, countZeros = 0;

    // Iterate through each bit of the integer
    for (int i = 0; i < sizeof(A) * 8; i++) {
        if (A & (1 << i)) {  // Checks if the i-th bit is 1
            countOnes++;
        }
        else {  // Otherwise, the i-th bit is 0
            countZeros++;
        }
    }

    cout << "Number of ones: " << countOnes << endl;
    cout << "Number of zeros: " << countZeros << endl;

    // Compare the counts of bits
    if (countOnes > countZeros) {
        cout << "There are more ones than zeros." << endl;
    }
    else if (countOnes < countZeros) {
        cout << "There are more zeros than ones." << endl;
    }
    else {
        cout << "The number of ones and zeros is equal." << endl;
    }

    return 0;
}
