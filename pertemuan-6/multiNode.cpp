#include <iostream>
using namespace std;

struct NODE {
    int data;
    NODE *next;
};

int main() {
    NODE *head = NULL;  
    NODE *second = NULL;  
    NODE *third = NULL;

    head = new NODE();
    second = new NODE();
    third = new NODE();

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