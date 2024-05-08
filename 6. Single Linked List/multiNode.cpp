#include <iostream>
using namespace std;

struct NASABAH {
    int data;
    NASABAH *next;
};

int main() {
    NASABAH *head = NULL;  
    NASABAH *second = NULL;  
    NASABAH *third = NULL;

    head = new NASABAH();
    second = new NASABAH();
    third = new NASABAH();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    cout << "Alamat: " << head << "Nilai: " << head->data << endl;
    cout << "Alamat: " << second << "Nilai: " << second->data << endl;
    cout << "Alamat: " << third << "Nilai: " << third->data << endl;

    return 0;
}