//Done by: Kaznienko Viktoria
//123
/* Given a set of sequences of values A[m, n] where m is the sequence number and n is the number of elements in the m-th sequence.
Find the maximum negative value within the set. */
#include <iostream>
#include <vector>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Set seed for random number generator
    srand(time(0));

    // Input the number of sequences
    int m;
    cout << "Enter the number of sequences: ";
    cin >> m;

    // Vector to store the sequences
    vector<vector<int>> A(m);

    // Generate random sequences
    for (int i = 0; i < m; ++i) {
        int n = rand() % 10 + 1; // Random number of elements between 1 and 10
        A[i].resize(n);

        cout << "Sequence " << i + 1 << ": ";
        for (int j = 0; j < n; ++j) {
            // Generate random numbers between -50 and 49
            A[i][j] = rand() % 100 - 50;
            cout << A[i][j] << " "; // Output the sequence
        }
        cout << endl;
    }

    // Initialize the maximum negative value
    int maxNegative = 0;
    bool foundNegative = false; // Flag to check if a negative value was found

    // Find the maximum negative value
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < A[i].size(); ++j) {
            if (A[i][j] < 0 && (!foundNegative || A[i][j] > maxNegative)) {
                maxNegative = A[i][j]; // Update the maximum negative value
                foundNegative = true; // Negative value found
            }
        }
    }

    // Output the result
    if (foundNegative) {
        cout << "Maximum negative value: " << maxNegative << endl;
    }
    else {
        cout << "No negative values found." << endl;
    }

    return 0;
}
