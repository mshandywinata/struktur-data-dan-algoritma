#include <iostream>
using namespace std;

int main() {
    int row = 2;
    int col = 3;
    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Masukkan nilai array" << "[" << i << "]" << "[" << j << "]: ";
            cin >> arr[i][j];
        }
    } cout << endl;

    cout << "Nilai array 2 x 3 adalah:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }

    return 0;
}