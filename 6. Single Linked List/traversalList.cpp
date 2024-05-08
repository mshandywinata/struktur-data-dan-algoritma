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
    NASABAH *current = NULL;

    head = (struct NASABAH *)malloc(sizeof(struct NASABAH));
    second = (struct NASABAH *)malloc(sizeof(struct NASABAH));
    third = (struct NASABAH *)malloc(sizeof(struct NASABAH));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    current = head;
    while (current != NULL) {
        cout << current << ": " << current->data << endl;
        current = current->next;
    }

    return 0;
}