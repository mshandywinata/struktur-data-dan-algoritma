#include <iostream>
using namespace std;

struct NODE {
    int data;
    NODE *next;
};

NODE *head; NODE *tail;

bool apakahKosong() {
    if (head == NULL) {
        return true;
    } return false;
}

void insertAwal(int nilai) {
    NODE *nodeBaru;
    nodeBaru = new NODE;
    nodeBaru->data = nilai;
    if (apakahKosong()) {
        head = nodeBaru;
        head->next = NULL;
    } else {
        nodeBaru->next = head;
        head = nodeBaru;
    }
}

void insertSetelah(struct NODE *nodeSebelum, int nilai) {
    if (nodeSebelum == NULL) {
        cout << "Nilai node sebelumnya tidak boleh NULL" << endl;
        return;
    }

    NODE *nodeBaru = new NODE;
    nodeBaru->data = nilai;
    nodeBaru->next = nodeSebelum->next;
    nodeSebelum->next = nodeBaru;
}

void insertAkhir(int nilai) {
    NODE *nodeBaru, *nodeSekarang;
    nodeBaru = new NODE;
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

void tampilkanList() {
    if (!apakahKosong()) {
        NODE *nodeSekarang;
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
    } tampilkanList();

    return 0;
}