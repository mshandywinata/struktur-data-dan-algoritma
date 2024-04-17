#include <iostream>
using namespace std;

struct NODE {
    int data;
    NODE *prev;
    NODE *next;
};

NODE *head;
NODE *tail;
NODE *current = NULL;

bool kosong() {
    if (head == NULL) {
        return true;
    } return false;
}

void insertAwal(int nilai) {
    NODE *nodeBaru;
    nodeBaru = new NODE;
    nodeBaru->data = nilai;

    if (kosong()) {
        head = nodeBaru;
        head->next = NULL;
    } else {
        nodeBaru->next = head;
        nodeBaru->prev = NULL;
        head = nodeBaru;
    }
}

void insertAkhir(int nilai) {
    NODE *nodeBaru;
    nodeBaru = new NODE;
    nodeBaru->data = nilai;
    nodeBaru->next = NULL;

    if (kosong()) {
        nodeBaru->prev = NULL;
        head = nodeBaru;
    } else {
        current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = nodeBaru;
        nodeBaru->prev = current;
    }
}

void insertSetelah(struct NODE *nextNode, int nilai) {
    if (nextNode == NULL) {
        cout << "Nilai sebelumnya tidak boleh NULL!";
        return;
    }

    NODE *nodeBaru = new NODE;
    nodeBaru->data = nilai;

    if (kosong()) {
        nodeBaru->prev->next = nodeBaru;
    } else {
        nodeBaru->next = nextNode->prev;
        nextNode->prev = nodeBaru;
        nodeBaru->next = nextNode;
        head->next = nodeBaru;
    }
}

void hapusAwal() {
    NODE *hapus;
    if (kosong()) {
        head = NULL;
    } if (head == hapus) {
        head = hapus->next;
    } if (hapus->next != NULL) {
        hapus->next->prev = hapus->prev;
    } if (hapus->prev != NULL) {
        hapus->prev->next = hapus->next;
    }

    delete hapus;
}

// void hapusAwalMod() {
//     if (kosong()) {
//         cout << "List kosong, tidak ada NODE yang bisa dihapus!" << endl;
//         return;
//     } if (head) {
//         head = head->next;
//     } if (head->next != NULL) {
//         head->next->prev = head->prev;
//     } if (head->prev != NULL) {
//         head->prev->next = head->next;
//     }
// }

void hapusAkhir() {
    NODE *hapus, *current;

    if (kosong()) {
        head = NULL;
    } else if (head->next == NULL) {
        hapus = head;
        head = NULL;
        tail = NULL;
        delete hapus;
    } else {
        current = head;
        while (current->next->next != NULL) {
            current = current->next;
        }
        delete current->next;
        current->next = NULL;
        tail = current;   
    }
}

void outputList() {
    if (!kosong()) {
        NODE *nodeSekarang;
        nodeSekarang = head;

        while (nodeSekarang != NULL) {
            cout << nodeSekarang->data << " ";
            nodeSekarang = nodeSekarang->next;
        } cout << endl;
    } else {
        cout << "Belum ada node yang terbentuk" << endl;
    }
}

int main() {
    head = NULL;

    insertAkhir(1);
    insertAkhir(3);
    insertAkhir(5);
    outputList();
    hapusAkhir();
    outputList();
    hapusAwal();
    outputList();

    return 0;
}