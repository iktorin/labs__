/*2. Two sequences consisting of 0s and 1s are given.
Create a specification for modeling XOR operations. */
#include <iostream>
#include <vector>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
#include "Windows.h"
using namespace std;

// Function to perform XOR operation between two sequences
vector<int> xorSequences(const vector<int>& A, const vector<int>& B) {

    // Resulting sequence
    vector<int> result(A.size());

    // Perform XOR on each element
    for (size_t i = 0; i < A.size(); ++i) {
        result[i] = A[i] ^ B[i];
    }

    return result;
}

// Function to generate a random sequence of 0s and 1s
vector<int> generateRandomSequence(size_t length) {
    vector<int> sequence(length);
    for (size_t i = 0; i < length; ++i) {
        sequence[i] = rand() % 2;  // Generate a random 0 or 1
    }
    return sequence;
}

// Function to print a sequence
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
    // Initialize the random number generator
    srand(static_cast<unsigned>(time(0)));

    // Ask the user for the length of the sequence
    size_t length;
    cout << "Enter the sequence length: ";
    cin >> length;

    // Generate two random sequences
    vector<int> A = generateRandomSequence(length);
    vector<int> B = generateRandomSequence(length);

    // Print the generated sequences
    cout << "First random sequence: ";
    printSequence(A);

    cout << "Second random sequence: ";
    printSequence(B);

    // Calculate the XOR result
    vector<int> result = xorSequences(A, B);

    // Print the result
    cout << "XOR result: ";
    printSequence(result);

    return 0;
}
