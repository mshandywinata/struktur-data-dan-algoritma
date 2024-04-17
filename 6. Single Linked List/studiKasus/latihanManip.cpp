#include <iostream>
#include <tuple>
using namespace std;

struct DATA {
    string nim;
    string nama;
    string email;
};

struct NODE {
    DATA mahasiswa;
    NODE *next;
};

NODE *head;
NODE *tail;

bool kosong() {
    if (head == NULL) {
        return true;
    } return false;
}

void tambahAwal(string nim, string nama, string email) {
    NODE *nodeBaru;
    nodeBaru = new NODE;
    nodeBaru -> mahasiswa.nim = nim;
    nodeBaru -> mahasiswa.nama = nama;
    nodeBaru -> mahasiswa.email = email;

    if (kosong()) {
        head = nodeBaru;
        head -> next = NULL;
    } else {
        nodeBaru -> next = head;
        head = nodeBaru;
    }
}

void tambahAkhir(string nim, string nama, string email) {
    NODE *nodeBaru, *current;
    nodeBaru = new NODE;
    nodeBaru -> mahasiswa.nim = nim;
    nodeBaru -> mahasiswa.nama = nama;
    nodeBaru -> mahasiswa.email = email;
    nodeBaru -> next = NULL;

    if (kosong()) {
        head = nodeBaru;
        head -> next = NULL;
    } else {
        current = head;
        while (current -> next != NULL) {
            current = current -> next;
        } current -> next = nodeBaru;
    }
}

void tambahTengah(struct NODE *nodeSebelum, string nim, string nama, string email) {
    if (nodeSebelum == NULL) {
        cout << "Nilai sebelumnya tidak boleh NULL";
        return;
    } else {
        NODE *nodeBaru = new NODE;
        nodeBaru -> mahasiswa.nim = nim;
        nodeBaru -> mahasiswa.nama = nama;
        nodeBaru -> mahasiswa.email = email;

        nodeBaru -> next = nodeSebelum -> next;
        nodeSebelum -> next = nodeBaru;
    }
}

void hapusAwal() {
    NODE *hapus;
    string nim, nama, email;

    if (kosong()) {
        nim = head -> mahasiswa.nim;
        nama = head -> mahasiswa.nama;
        email = head -> mahasiswa.email;

        head = NULL;
    } else {
        if (head -> next != NULL) {
            hapus = head;

            nim = hapus -> mahasiswa.nim;
            nama = hapus -> mahasiswa.nama;
            email = hapus -> mahasiswa.email;

            head = hapus -> next;
            delete hapus;
        } else {
            head = NULL;
        } 
    }
}

void hapusAkhir() {
    NODE *hapus, *current;
    if (kosong()) {
        head = NULL;
    } else {
        current = head;
        while (current -> next -> next != NULL) {
            current = current -> next;
        } delete current -> next; current -> next = NULL;
    }
}

void hapusSetelah(struct NODE *nodeSebelum) {
    if (nodeSebelum == NULL) {
        cout << "Nilai sebelumnya tidak boleh NULL!";
        return; 
    } else {
        NODE *hapus;
        string nim, nama, email;
        hapus = nodeSebelum -> next;
        nodeSebelum -> next = hapus -> next;

        nim = hapus -> mahasiswa.nim;
        nama = hapus -> mahasiswa.nama;
        email = hapus -> mahasiswa.email;

        delete hapus;
    }
}

int tampilkanList() {
    system("cls");
    int count = 0;

    if (!kosong()) {
        NODE *current;
        current = head;

        while (current != NULL) {
            cout << "List [" << count + 1 << "]" << endl;
            cout << "NIM    : " << current -> mahasiswa.nim << endl;
            cout << "Nama   : " << current -> mahasiswa.nama << endl;
            cout << "Email  : " << current -> mahasiswa.email << endl << endl;

            current = current -> next;
            count += 1;
        }
    } else {
        cout << "List masih kosong." << endl;
    } return count;
}

void tampilkanBanyakList() {
    int nomor = 0;

    if (!kosong()) {
        NODE *current;
        current = head;
        string data;

        while (current != NULL) {
            current = current -> next;
            nomor += 1;
            if (nomor == 1) {
                data = "Head: " + to_string(nomor);
            } else if (current == NULL) {
                data = "Tail: " + to_string(nomor);
            } else {
                data = to_string(nomor);
            } cout << "[" << data << "] -> ";
        } cout << "NULL " << endl;
    } cout << "Jumlah: " << nomor << " list" << endl << endl;
}

string kapital(string kata, bool kapital, bool judul) {
    if ((kapital || !kapital) && judul) {
        for (int i = 0; i < kata.length(); i++) {
            kata[0] = toupper(kata[0]);

            if (kata[i] == ' ') {
                kata[i + 1] = toupper(kata[i + 1]);
            }
        }
    } else if (!kapital) {
        for (int i = 0; i < kata.length(); i++) {
            kata[i] = tolower(kata[i]);
        }
    } else {
        for (int i = 0; i < kata.length(); i++) {
            kata[i] = toupper(kata[i]);
        }
    } return kata;
}

void tampilkanHeader(string teks[], int baris, string simbol, int karakter) {
    system("cls");

    int maks = karakter;
    int panjangSimbol = simbol.length();
    char simbolTunggal[panjangSimbol] = {};

    for (int i = 0; i < panjangSimbol; i++) {
        simbolTunggal[i] = simbol[i];
    }
    
    for (int i = 0; i < baris; i++) {
        int banyakSimbol = ((maks - 2 - teks[i].length()) / 2);
        teks[i] = kapital(teks[i], true, false); 

        if (banyakSimbol > 0) {
            string kiri = ""; string kanan = " ";

            for (int j = 0; j < banyakSimbol; j++) {
                kiri += simbolTunggal[j % panjangSimbol];
            } kiri += " ";

            for (int j = 0; j < banyakSimbol; j++) {
                kanan += simbolTunggal[j % panjangSimbol];
            }

            if (teks[i].length() % 2 != 0) {
                int indeks;
                if (panjangSimbol % 2 != 0) {
                    indeks = i % panjangSimbol;
                } else {
                    indeks = i & panjangSimbol - 1;
                } kanan += simbolTunggal[indeks];
            } cout << kiri << teks[i] << kanan << endl;
        } else {
            cout << "Terlalu Panjang!" << endl;
        } 
    } cout << endl;
}

string menu(string opsi[], int banyak, bool bersihkan) {
    string inputOpsi;
    if (bersihkan) {
        system("cls");
    }
    for (int i = 0; i < banyak; i++) {
        opsi[i] = kapital(opsi[i], true, true);
        cout << "[" << i + 1 << "] " << opsi[i] << endl;
    } cout << endl << "Opsi: "; cin >> inputOpsi;

    return inputOpsi;
}

tuple<string, string, string> inputData() {
    string nim, nama, email;

    system("cls");
    cout << "NIM    : "; cin >> nim;
    cout << "Nama   : "; cin >> ws; getline(cin, nama);
    cout << "Email  : "; cin >> email;

    return make_tuple(nim, nama, email);
}

NODE *nodeSebelum(int nomor) {
    for (int i = 0; i < nomor; i++) {
        head = head -> next;
    } return head->next;
}

void sukses(string status) {
    status = kapital(status, false, false);

    cout << endl << "Data berhasil di" << status;
    if (status == "tambah") {
        cout << " ke dalam list!" << endl;
    } else if (status == "hapus") {
        cout << " dari list!" << endl;
    } system("pause"); system("cls");
}

void invalidInput() {
    cout << endl << "Input tidak valid!" << endl;
    system("pause"); system("cls");
}

int main() {
    string opsiAwal, opsiLanjutan;
    string nim, nama, email;

    string mainHeader[] = {"linked list", "manipulation program"};

    string menuAwal[] = {"tambah", "hapus", "tampilkan", "keluar"};
    string menuTambah[] = {"tambah awal", "tambah akhir", "tambah setelah", "kembali"};
    string menuHapus[] = {"hapus awal", "hapus akhir", "hapus setelah", "kembali"};

    while (true) {
        tampilkanHeader(mainHeader, 2, "#=#=", 32);
        tampilkanBanyakList();
        opsiAwal = menu(menuAwal, 4, false);

        if (opsiAwal == "1") {
            while (true) {
                opsiLanjutan = menu(menuTambah, 4, true);

                if (opsiLanjutan == "1") {
                    tie(nim, nama, email) = inputData();
                    tambahAwal(nim, nama, email);
                } else if (opsiLanjutan == "2") {
                    tie(nim, nama, email) = inputData();
                    tambahAkhir(nim, nama, email);
                } else if (opsiLanjutan == "3") {
                    tie(nim, nama, email) = inputData();
                    int nomorList; cout << "Nomor   : "; cin >> nomorList;
                    tambahTengah(nodeSebelum(nomorList), nim, nama, email);
                } else if (opsiLanjutan == "4") {
                    break;
                } else {
                    invalidInput();
                    continue;
                } sukses("tambah");
            }
        }
        
        else if (opsiAwal == "2") {
            while (true) {
                opsiLanjutan = menu(menuHapus, 4, true);

                if (opsiLanjutan == "1") {
                    hapusAwal();
                } else if (opsiLanjutan == "2") {
                    hapusAkhir();
                } else if (opsiLanjutan == "3") {
                    int nomorList; cout << "Nomor   : "; cin >> nomorList;
                    hapusSetelah(nodeSebelum(nomorList));
                } else if (opsiLanjutan == "4") {
                    break;
                } else {
                    invalidInput();
                    continue;
                } sukses("hapus");
            }
        }
        
        else if (opsiAwal == "3") {
            tampilkanList();
            system("pause");
        }
        
        else if (opsiAwal == "4") {
            system("cls"); return 0;
        }
        
        else {
            invalidInput();
        }
    }
}