#include <iostream>
using namespace std;

struct DATA_MAHASISWA {
    string nim;
    string nama;
    string email;
};

struct NASABAH {
    DATA_MAHASISWA rpl;
    NASABAH *next;
};

NASABAH *head;
NASABAH *tail;

bool apakahKosong() {
    if (head == NULL) {
        return true;
    } return false;
}

void tambahAkun(string nim, string nama, string email) {
    NASABAH *nodeBaru;
    nodeBaru = new NASABAH;
    nodeBaru->rpl.nim = nim;
    nodeBaru->rpl.nama = nama;
    nodeBaru->rpl.email = email;

    if (apakahKosong()) {
        head = nodeBaru;
        head->next = NULL;
    } else {
        nodeBaru->next = head;
        head = nodeBaru;
    }
}

void tampilkanNasabah() {
    if (!apakahKosong()) {
        NASABAH *nodeSekarang;
        nodeSekarang = head;

        while(nodeSekarang != NULL) {
            cout << nodeSekarang->rpl.nim << endl;
            cout << nodeSekarang->rpl.nama << endl;
            cout << nodeSekarang->rpl.email << endl << endl;

            nodeSekarang = nodeSekarang->next;
        }
    }
}

int main() {
    tambahAkun("2305848", "Muhamad Shandy Winata", "shandywinata007@gmail.com");
    tambahAkun("2305848", "Muhamad Shandy", "shandy@gmail.com");
    tambahAkun("2305848", "Winata", "winata007@gmail.com");

    tampilkanNasabah();

    return 0;
}