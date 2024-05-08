#include <iostream>
using namespace std;

struct NASABAH {
    int data;
    struct NASABAH *prev;
    struct NASABAH *next;
};

int main() {
    NASABAH *head;
    NASABAH *first = NULL;
    NASABAH *second = NULL;
    NASABAH *third = NULL;
    NASABAH *current = NULL;

    first = (struct NASABAH *)malloc(sizeof(struct NASABAH));
    second = (struct NASABAH *)malloc(sizeof(struct NASABAH));
    third = (struct NASABAH *)malloc(sizeof(struct NASABAH));

    first->data = 1;
    second->data = 2;
    third->data = 3;

    first->next = second;
    first->prev = NULL;
    second->next = third;
    second->prev = first;
    third->next = NULL;
    third->prev = second;

    head = first;

    current = head;
    // cout << current->data << endl;
    while (current != NULL)
    {
        cout << current->data << endl;
        current = current->next;
    } return 0;
}