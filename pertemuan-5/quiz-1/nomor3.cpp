#include <iostream>
using namespace std;

int hitungKata(char *pChar) {
    int jumlah = 0; bool spasi = true;

    while (*pChar) {
        if (*pChar == ' ') {
            spasi = true;
        } else if (spasi == true) {
            spasi = false;
            jumlah++;
        } *pChar++;
    } return jumlah;
}

int main() {
    int maks = 100;
    char huruf[maks]; char *pHuruf = huruf;

    cout << "Kata: "; cin.getline(huruf, maks);

    int jumlahKata = hitungKata(pHuruf);

    cout << "Banyak Kata: " << jumlahKata << endl;

    return 0;
}