#include <iostream>
#include <vector>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For initializing rand() through time()
#include <iomanip>  // For std::setw

// matrix in comment 10x10 with random numbers from -100 to 100
// Generated sequences:
// Sequence  1: -77  -9  46  19  44  21 -94  22  26 -99 
// Sequence  2: -83 -10  32  93  98   6  77  61  43 -26 
// Sequence  3: -96  37 -28  75 -80  26  13  -2 -53 -73 
// Sequence  4: -92   9 -85 -15 -10 -42   1 -57 -21  76 
// Sequence  5:  88   2  51 -87 -29  12  50  88 -81  -5 
// Sequence  6:  80   0  30 -12 -85  26 -68   8 -91 -72 
// Sequence  7:  55 -32 -69 -38  79  89  82 -10  14 -56 
// Sequence  8: -82 -49  17 -28  71 -79  72  53  -1 -53 
// Sequence  9: -79 -71 -92  -1  35 -86  90  -8 -15 -34           
// Sequence 10: -97  35  27   9 -87  40   3 -65  66  35 

int main() {
    srand(static_cast<unsigned>(time(0)));  // Initialize random number generator

    int m = 10;  // Number of sequences
    int n = 10; // Length of each sequence

    std::vector<std::vector<int>> A(m);  // Set of sequences

    // Generation of random numbers for each sequence
    for (int i = 0; i < m; ++i) {
        A[i].resize(n);
        for (int j = 0; j < n; ++j) {
            A[i][j] = rand() % 199 - 99;  // Random numbers from -99 to 99
        }
    }

    // Search for the maximum value by absolute value
    int max_value = A[0][0];  // Initialize with the first element
    for (const std::vector<int>& sequence : A) {
        for (int value : sequence) {
            if (std::abs(value) > std::abs(max_value)) {
                max_value = value;
            }
        }
    }

    // Output results
    std::cout << "Generated sequences:\n";
    for (int i = 0; i < m; ++i) {
        std::cout << "Sequence " << std::setw(2) << i + 1 << ": ";
        for (int value : A[i]) {
            std::cout << std::setw(3) << value << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nThe maximum value by absolute value from all sequences: " << max_value << std::endl;

    return 0;
}