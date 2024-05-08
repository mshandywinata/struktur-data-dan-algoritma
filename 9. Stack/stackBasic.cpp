#include <iostream>
using namespace std;

const int kapasitas = 5;

struct Stack {
    int top;
    int temp[kapasitas];
} Stack;

void createStack() {
    Stack.top = -1;
}

int isEmpty() {
    if (Stack.top == -1) {
        return 1;
    } return 0;
}

int isFull() {
    if (Stack.top == kapasitas - 1) {
        return 1;
    } return 0;
}

void push(int data) {
    if (isFull() == 1) {
        cout << "Maaf, stack sudah penuh" << endl;
    } else {
        Stack.top++; Stack.temp[Stack.top] = data;
        cout << "Data: " << Stack.temp[Stack.top] << " berhasil masuk ke dalam stack" << endl;
    }
}

void displayStack() {
    if (isEmpty() == 0) {
        cout << "Menampilkan isi stack: " << endl;

        for (int i = Stack.top; i >= 0; i--) {
            cout << "Data index stack ke-" << i << " adalah " << Stack.temp[i] << endl;
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