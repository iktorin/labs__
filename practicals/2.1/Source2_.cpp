//Done by: Kaznienko Viktoria 
//123
/* Given a set of sequences of values A[m, n] where m is the sequence number and n is the number of elements in the m-th sequence.
Find the indices of the minimum value within the set. */
#include <iostream>
#include <vector>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Set the seed for the random number generator
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
            A[i][j] = rand() % 100; // Random values between 0 and 99
            cout << A[i][j] << " ";  // Output the sequence
        }
        cout << endl;
    }

    // Initialize the minimum value with the first element
    int minValue = A[0][0];
    vector<pair<int, int>> minIndexes(m * 10); // Preallocate space for indices
    int count = 0; // Counter for the number of indices
    minIndexes[count] = { 0, 0 }; // Add the first index
    count++;

    // Find the minimum value and its indices
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < A[i].size(); ++j) {
            if (A[i][j] < minValue) {
                minValue = A[i][j]; // Update the minimum value
                count = 0; // Reset the counter, clearing previous indices
                minIndexes[count] = { i, j }; // Add the new index
                count++;
            }
            else if (A[i][j] == minValue) {
                minIndexes[count] = { i, j }; // Add the index if the value matches the minimum
                count++;
            }
        }
    }

    // Output the result
    cout << "Minimum value: " << minValue << endl;
    cout << "Indices of the minimum value: " << endl;
    for (int i = 0; i < count; ++i) {
        cout << "Sequence: " << minIndexes[i].first << ", Index: " << minIndexes[i].second << endl;
    }

    return 0;
}
