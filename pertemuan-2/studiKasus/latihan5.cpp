#include <iostream>
using namespace std;

int main() {
    int row = 2;
    int col = 3;

    int firstArr[row][col], secondArr[row][col], resultArr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Masukkan nilai array pertama " << "[" << i << "]" << "[" << j << "]: ";
            cin >> firstArr[i][j];
        }
    } cout << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Masukkan nilai array kedua " << "[" << i << "]" << "[" << j << "]: ";
            cin >> secondArr[i][j];
        }
    } cout << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            resultArr[i][j] = firstArr[i][j] + secondArr[i][j];
        }
    }

    cout << "Hasil penjumlahan dari 2 array 2 x 3 adalah:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << resultArr[i][j] << " ";
        } cout << endl;
    }

    return 0;
}