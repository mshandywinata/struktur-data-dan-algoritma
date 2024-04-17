#include <iostream>
using namespace std;

int main() {
    int baris = 2; int kolom = 2;
    double A[baris][kolom]; double B[baris][kolom]; double C[baris][kolom];

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "A[" << i << "," << j << "]: "; cin >> A[i][j];
        }
    } cout << endl;

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "B[" << i << "," << j << "]: "; cin >> B[i][j];
        }
    } cout << endl;

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            C[i][j] = 0;

            for (int k = 0; k < baris; k++) {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    cout << "Hasil perkalian matriks AxB:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << C[i][j] << " ";
        } cout << endl;
    }

    return 0;
}