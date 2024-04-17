#include <iostream>
using namespace std;

int main() {
    int row = 2;
    int col = 2;

    int A[row][col] = { {1, 2},
                        {3, 4} };
    int B[row][col] = { {1, 2},
                        {3, 4} };
    int C[row][col];
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << C[i][j] << " ";
        } cout << endl;
    }

    return 0;
}