#include <iostream>
using namespace std;

struct NASABAH {
    int data;
    NASABAH *next;
};

NASABAH *head; NASABAH *tail;

bool apakahKosong() {
    if (head == NULL) {
        return true;
    } return false;
}

void insertAwal(int nilai) {
    NASABAH *nodeBaru;
    nodeBaru = new NASABAH;
    nodeBaru->data = nilai;
    if (apakahKosong()) {
        head = nodeBaru;
        head->next = NULL;
    } else {
        nodeBaru->next = head;
        head = nodeBaru;
    }
}

void insertSetelah(struct NASABAH *nodeSebelum, int nilai) {
    if (nodeSebelum == NULL) {
        cout << "Nilai node sebelumnya tidak boleh NULL" << endl;
        return;
    }

    NASABAH *nodeBaru = new NASABAH;
    nodeBaru->data = nilai;
    nodeBaru->next = nodeSebelum->next;
    nodeSebelum->next = nodeBaru;
}

void insertAkhir(int nilai) {
    NASABAH *nodeBaru, *nodeSekarang;
    nodeBaru = new NASABAH;
    nodeBaru->data = nilai;
    nodeBaru->next = NULL;
    if (apakahKosong()) {
        head = nodeBaru;
        head->next = NULL;
    } else {
        nodeSekarang = head;

        while (nodeSekarang->next != NULL) {
            nodeSekarang = nodeSekarang->next;
        } nodeSekarang->next = nodeBaru;
    }
}

void tampilkanNasabah() {
    if (!apakahKosong()) {
        NASABAH *nodeSekarang;
        nodeSekarang = head;

        while (nodeSekarang != NULL) {
            cout << nodeSekarang->data << " -> ";
            nodeSekarang = nodeSekarang->next;
        }
    }
}

int main() {
    head = NULL;
    for (int i = 10; i > 0; i--) {
        if (i % 2 == 0) {
            insertAkhir(i);
        }
    } tampilkanNasabah();

    return 0;
}