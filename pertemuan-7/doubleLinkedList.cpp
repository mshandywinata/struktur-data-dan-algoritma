#include <iostream>
using namespace std;

struct NODE {
    int data;
    struct NODE *prev;
    struct NODE *next;
};

int main() {
    NODE *head;
    NODE *first = NULL;
    NODE *second = NULL;
    NODE *third = NULL;
    NODE *current = NULL;

    first = (struct NODE *)malloc(sizeof(struct NODE));
    second = (struct NODE *)malloc(sizeof(struct NODE));
    third = (struct NODE *)malloc(sizeof(struct NODE));

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