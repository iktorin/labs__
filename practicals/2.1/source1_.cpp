//Done by: Kaznienko Viktoria
//123 
/* Given a set of sequences of values A[m, n] where m is the sequence number and n is the number of elements in the m-th sequence.
Find the maximum absolute value across the entire set of sequences. */
#include <iostream>
#include <vector>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For initializing rand() through time()
#include <iomanip>  // For std::setw
using namespace std;
int main() {
    srand(static_cast<unsigned>(time(0)));  // Initialize random number generator

    int m;  // Number of sequences
    int n; // Length of each sequence
    cin >> m;// Number of sequences
    cin >> n;// Length of each sequence
    vector<vector<int>> A(m);  // Set of sequences

    // Generation of random numbers for each sequence
    for (int i = 0; i < m; ++i) {
        A[i].resize(n);
        for (int j = 0; j < n; ++j) {
            A[i][j] = rand() % 100 - 20;  // Random numbers
        }
    }

    // Search for the maximum value by absolute value
    int max_value = A[0][0];  // Initialize with the first element
    for (const vector <int>& sequence : A) {
        for (int value : sequence) {
            if (abs(value) > abs(max_value)) {
                max_value = value;
            }
        }
    }

    // Output results
    cout << "Generated sequences:\n";
    for (int i = 0; i < m; ++i) {
        cout << "Sequence " << setw(2) << i + 1 << ": ";
        for (int value : A[i]) {
            cout << setw(3) << value << " ";
        }
        cout << endl;
    }

    cout << "\nThe maximum value by absolute value from all sequences: " << max_value << endl;

    return 0;
}