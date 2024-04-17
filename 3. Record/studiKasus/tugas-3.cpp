#include <iostream>
using namespace std;

struct INVOICE_TIKET {
    string namaCustomer;
    double harga;
    int jumlahTiket;
    int tiketBonus;
    double diskon;
};

INVOICE_TIKET GOTG_2;

int main() {
    cout << "Nama                    : "; getline(cin, GOTG_2.namaCustomer);
    cout << "Jumlah Tiket            : "; cin >> GOTG_2.jumlahTiket;

    if (GOTG_2.jumlahTiket > 10) {
        GOTG_2.tiketBonus = 1;
    } else if (GOTG_2.jumlahTiket > 5) {
        GOTG_2.diskon = 0.1;
    } else if (GOTG_2.jumlahTiket == 0) {
        return 0;
    }

    GOTG_2.harga = 50000;
    int totalTiket = GOTG_2.tiketBonus + GOTG_2.jumlahTiket;
    double totalBayar = (GOTG_2.harga * GOTG_2.jumlahTiket);
    double totalDiskon = totalBayar * GOTG_2.diskon;
    double totalAkhir = totalBayar - totalDiskon;

    cout << "--------------------------------------------------" << endl;
    cout << "--- INVOICE TIKET GUARDIAN OF THE GALAXY VOL.2 ---" << endl;
    cout << "------------------- Rp.50.000 --------------------" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Nama                    : " << GOTG_2.namaCustomer << endl;
    cout << "Jumlah Tiket Pesanan    : " << GOTG_2.jumlahTiket << endl;
    cout << "Total Diskon            : Rp" << totalDiskon << endl;
    cout << "Jumlah Tiket Keseluruhan: " << totalTiket << endl;
    cout << "Total Pembayaran        : Rp" << totalAkhir << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "------------------TERIMA KASIH--------------------" << endl;
}