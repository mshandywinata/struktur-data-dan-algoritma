#include <iostream>
using namespace std;

struct DATA_MAHASISWA {
    string nim;
    string nama;
    string email;
};

struct NODE {
    DATA_MAHASISWA rpl;
    NODE *next;
};

NODE *head;
NODE *tail;

bool apakahKosong() {
    if (head == NULL) {
        return true;
    } return false;
}

void tambahAwal(string nim, string nama, string email) {
    NODE *nodeBaru;
    nodeBaru = new NODE;
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

void tampilkanList() {
    if (!apakahKosong()) {
        NODE *nodeSekarang;
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
    tambahAwal("2305848", "Muhamad Shandy Winata", "shandywinata007@gmail.com");
    tambahAwal("2305848", "Muhamad Shandy", "shandy@gmail.com");
    tambahAwal("2305848", "Winata", "winata007@gmail.com");

    tampilkanList();

    return 0;
}