#include <iostream>
using namespace std;

int main() {
    int baris, kolom = 2;
    int i, j;

    int A[baris][kolom] = { {1, 2},
                            {3, 4} };

    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            cout << A[i][j] << endl;
        }
    }

    return 0;
}