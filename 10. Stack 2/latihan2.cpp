#include <iostream>
#include <cstring>
using namespace std;

const int kapasitas = 20;

struct Stack {
    int top;
    char isi[kapasitas];
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

void push(char data) {
    if (penuh() == 1) {
        cout << "Data stack sudah penuh" << endl;
    } else {
        Stack.top++;
        Stack.isi[Stack.top] = data;
    }
}

void pop() {
    if (kosong() == 0) {
        Stack.top--;
    } else {
        cout << "Tidak ada data pada stack." << endl;
    }
}

int main() {
    membuatStack();

    char inputKata[kapasitas];
    cout << "Kalimat: "; cin.getline(inputKata, kapasitas);

    for (int i = 0; i < strlen(inputKata); i++ ) {
        push(inputKata[i]);
    }

    cout << "Hasil: ";
    while (Stack.top >= 0) {
        cout << Stack.isi[Stack.top];
        pop();
    } return 0;
}