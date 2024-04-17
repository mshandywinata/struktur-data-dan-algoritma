#include <iostream>
using namespace std;

int main() {
    int row = 2;
    int col = 3;
    
    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Masukkan nilai array " << "[" << i << "]" << "[" << j << "]: ";
            cin >> arr[i][j];
        }
    } cout << endl;

    int max = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    cout << "Nilai maksimum dari array 2 x 3 tersebut adalah: " << max << endl;
    return 0;
}