#include <iostream>
using namespace std;

const int kapasitas = 5;

struct STACK {
    int top;
    int temp[kapasitas];
} STACK;

void createStack() {
    STACK.top = -1;
}

int isEmpty() {
    if (STACK.top == -1) {
        return 1;
    } return 0;
}

int isFull() {
    if (STACK.top == kapasitas - 1) {
        return 1;
    } return 0;
}

void push(int data) {
    if (isFull() == 1) {
        cout << "Maaf, stack sudah penuh" << endl;
    } else {
        STACK.top++; STACK.temp[STACK.top] = data;
        cout << "Data: " << STACK.temp[STACK.top] << " berhasil masuk ke dalam stack" << endl;
    }
}

void displayStack() {
    if (isEmpty() == 0) {
        cout << "Menampilkan isi stack: " << endl;

        for (int i = STACK.top; i >= 0; i--) {
            cout << "Data index stack ke-" << i << " adalah " << STACK.temp[i] << endl;
        } cout << endl;
    } else {
        cout << "Maaf tidak ada data pada stack" << endl;
    }
}

int main() {
    int data;
    createStack();
    cout << "Push data: " << endl;
    push(1); push(2); push(3); push(4); push(5);

    cout << endl;
    displayStack();
    return 0;
}