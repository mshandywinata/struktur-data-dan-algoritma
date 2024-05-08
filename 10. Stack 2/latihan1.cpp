#include <iostream>
using namespace std;

const int kapasitas = 10;

struct Stack {
    int top;
    int isi[kapasitas];
} Stack;

void membuatStack() {
    Stack.top = -1;
}

int kosong() {
    if (Stack.top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int penuh() {
    if (Stack.top == kapasitas - 1) {
        return 1;
    } else {
        return 0;
    }
}

void push(int data) {
    if (penuh() == 1) {
        cout << "Data stack sudah penuh" << endl;
    } else {
        Stack.top++;
        Stack.isi[Stack.top] = data;
        cout << "Data " << Stack.isi[Stack.top] << " telah masuk ke dalam stack." << endl;
    }
}

void tampilkanStack() {
    if (kosong() == 0) {
        cout << "Menampilkan isi stack:" << endl;
        for (int i = Stack.top; i >= 0; i--) {
            cout << "Data index stack ke-" << i << " adalah " << Stack.isi[i] << endl;
        } cout << endl;
    } else {
        cout << "Tidak ada data pada stack." << endl;
    }
}

void pop() {
    if (kosong() == 0) {
        Stack.top--;
        cout << "Data sudah berhasil dikeluarkan dari stack." << endl;
    } else {
        cout << "Tidak ada data pada stack." << endl;
    }
}

void clear() {
    Stack.top = -1;
    cout << "Stack sudah berhasil dikosongkan." << endl;
}

void cariStack(int data) {
    int tmp, iTmp;

    if (kosong() == 1) {
        cout << "Tidak ada data yang bisa dicari karena stack kosong." << endl;
    } else {
        for (int i = Stack.top; i >= 0; i--) {
            if (data == Stack.isi[i]) {
                tmp = data; iTmp = i;
            }
        } if (data == tmp) {
            cout << "Data " << data << " ditemukan pada index ke-" << iTmp << endl;
        } else {
            cout << "Tidak ada data " << data << " ditemukan pada stack" << endl;
        }
    }
}

int main() {
    membuatStack();

    string opsiOperasi;
    int inputData;

    while (true) {

        system("cls");
        cout << "OPERASI STACK" << endl;
        cout << "[1] Push\n[2] Pop\n[3] Display\n[4] Clear\n[5] Find \n[6] Keluar" << endl << endl;

        cout << "> "; cin >> opsiOperasi;

        if (opsiOperasi == "1") {
            system("cls");
            cout << "PUSH" << endl << endl;
            cout << "Data: "; cin >> inputData;
            push(inputData);
            system("pause");
        } else if (opsiOperasi == "2") {
            system("cls");
            cout << "POP" << endl << endl;
            pop();
            system("pause");
        } else if (opsiOperasi == "3") {
            system("cls");
            cout << "DISPLAY STACK" << endl << endl;
            tampilkanStack();
            system("pause");
        } else if (opsiOperasi == "4") {
            system("cls");
            cout << "CLEAR STACK" << endl << endl;
            clear();
            system("pause");
        } else if (opsiOperasi == "5") {
            system("cls");
            cout << "FIND STACK" << endl << endl;
            cout << "Data: "; cin >> inputData;
            cariStack(inputData);
            system("pause");
        } else if (opsiOperasi == "6") {
            break;
        } else {
            cout << "Input opsi tidak valid." << endl;
            system("pause");
        }
    }

    return 0;
}