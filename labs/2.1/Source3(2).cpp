// Done by: Kaznienko Viktoria
// 123
// Variant 7

#include<iostream>
#include <cstdlib>
#include <ctime>  
using namespace std;
int main() {

    srand(static_cast<unsigned>(time(0)));

    float arr[4][5];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << endl;
        }
        for (int j = 0; j < 5; j++) {
            float product = 1;
            float negativeCount = 0;

            for (int i = 0; i < 4; i++) {
                if (arr[i][j] < 0) {
                    product *= arr[i][j];
                    negativeCount++;
                }
            }
            if (negativeCount > 0) {
                cout << j + 1 << ": " << product << endl;
            }
            else {
                cout << j + 1 << ": No negative values" << endl;
            }
        }



    }
    return 0;
}
