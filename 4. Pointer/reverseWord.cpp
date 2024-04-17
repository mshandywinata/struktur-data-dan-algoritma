#include <iostream>
#include <cstring>
using namespace std;

char *balikKata(char *pStr) {
    int len = strlen(pStr);
    for (int i = 0; i < len / 2; i++) {
        swap(pStr[i], pStr[len - i - 1]);
    } return pStr;
}

int hitungKata(char *pStr) {
    int len = strlen(pStr); 
    if (len <= 0) {
        return 0;
    }
    int count = 1;
    for (int i = 0; i < len; i++) {
        if (pStr[i] == ' ') {
            count += 1;
        }
    } return count;
}

int main() {
    char kata[100];
    char *pKata = kata;
    
    cout << "Kata Original      : "; cin.getline(kata, 100);
    
    int jumlahKata = hitungKata(pKata);

    cout << "Jumlah Kata        : " << jumlahKata << endl;
    cout << "Hasil Pembalikan   : " << balikKata(pKata) << endl;

    return 0;
}