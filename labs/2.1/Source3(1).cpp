// Done by: Kaznienko Viktoria
// 123
// Variant 7

#include<iostream>
#include <cstdlib>
#include <ctime>  
using namespace std;
int main() {

    srand(static_cast<unsigned>(time(0)));

    int arr[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << endl;
        }
        if (arr[i][i] > 0) {

            cout << "\nPositive values on the main diagonal: " << arr[i][i] << endl;

        }
    }
    return 0;
}