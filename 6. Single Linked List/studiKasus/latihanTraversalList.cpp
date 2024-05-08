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
    NASABAH *fourth = NULL;
    NASABAH *fifth = NULL;
    NASABAH *current = NULL;

    head = (struct NASABAH *)malloc(sizeof(struct NASABAH));
    second = (struct NASABAH *)malloc(sizeof(struct NASABAH));
    third = (struct NASABAH *)malloc(sizeof(struct NASABAH));
    fourth = (struct NASABAH *)malloc(sizeof(struct NASABAH));
    fifth = (struct NASABAH *)malloc(sizeof(struct NASABAH));

    head->data = 2;
    head->next = second;
    second->data = 4;
    second->next = third;
    third->data = 6;
    third->next = fourth;
    fourth->data = 8;
    fourth->next = fifth;
    fifth->data = 10;
    fifth->next = NULL;

    current = head;
    while (current != NULL) {
        cout << current << ": " << current->data << endl;
        current = current->next;
    }

    return 0;
}