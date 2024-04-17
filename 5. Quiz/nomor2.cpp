#include <iostream>
using namespace std;

struct DATA_MAHASISWA {
    string nama;
    string mataKuliah;
    double kehadiran;
    double tugas;
    double uts;
    double uas;
};

DATA_MAHASISWA rplUpi;

int main() {
    cout << "Nama           : "; getline(cin, rplUpi.nama);
    cout << "Mata Kuliah    : "; getline(cin, rplUpi.mataKuliah);
    cout << "Nilai Kehadiran: "; cin >> rplUpi.kehadiran;
    cout << "Nilai Tugas    : "; cin >> rplUpi.tugas;
    cout << "Nilai UTS      : "; cin >> rplUpi.uts;
    cout << "Nilai UAS      : "; cin >> rplUpi.uas; cout << endl;

    double total = rplUpi.kehadiran + rplUpi.tugas + rplUpi.uts + rplUpi.uas;
    double rerata = total / 4;
    double nilai = rplUpi.kehadiran * 0.1 + rplUpi.tugas * 0.2 + rplUpi.uts * 0.3 + rplUpi.uas * 0.4;
    string nilaiAkhir;

    if (nilai >= 92) {
        nilaiAkhir = "A";
    } else if (nilai >= 86) {
        nilaiAkhir = "A-"; 
    } else if (nilai >= 80) {
        nilaiAkhir = "B";
    } else if (nilai >= 74) {
        nilaiAkhir = "B-";
    } else if (nilai >= 68) {
        nilaiAkhir = "C";
    } else if (nilai >= 62) {
        nilaiAkhir = "C-";
    } else {
        nilaiAkhir = "D";
    }

    cout << "Nilai Akhir    : " << nilaiAkhir;

    return 0;
}