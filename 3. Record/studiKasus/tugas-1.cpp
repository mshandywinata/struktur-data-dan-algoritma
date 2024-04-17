#include <iostream>
using namespace std;

struct MATA_KULIAH {
    string namaMahasiswa;
    string nim;
    string tugas1;
    string tugas2;
    string tugas3;
    // float nilaiAkhir = (tugas1 + tugas2 + tugas3) / 3; 
    float nilaiAkhir;
};

int main() {
    MATA_KULIAH matdis;
    

    cout << "------- Hitung Nilai Akhir Matematika Diskrit -------" << endl;
    cout << "Nama                : "; getline(cin, matdis.namaMahasiswa);
    cout << "NIM                 : "; cin >> matdis.nim;
    cout << "Nilai Tugas 1       : "; cin >> matdis.tugas1;
    cout << "Nilai Tugas 2       : "; cin >> matdis.tugas2;
    cout << "Nilai Tugas 3       : "; cin >> matdis.tugas3;

    matdis.nilaiAkhir = (stof(matdis.tugas1) + stof(matdis.tugas2) + stof(matdis.tugas3)) / 3;
    cout << "Nilai Akhir (rerata): " << matdis.nilaiAkhir << endl << endl;

    if (matdis.nilaiAkhir > 75) {
        cout << "Selamat " << matdis.namaMahasiswa << "! Kamu lulus mata kuliah ini!";
    } else {
        cout << "Maaf, " << matdis.namaMahasiswa << " kamu belum lulus mata kuliah ini.";
    }
    return 0;
}