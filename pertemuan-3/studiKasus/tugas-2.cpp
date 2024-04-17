#include <iostream>
using namespace std;

struct MAHASISWA {
    string nama_mahasiswa;
    string nim;
    int angkatan;
    string prodi;
};

struct MATA_KULIAH {
    MAHASISWA mahasiswa;
    string nama_matkul;
    string kode_matkul;
};

MATA_KULIAH matdis;

int main() {
    matdis.mahasiswa.nim;

    return 0;
}