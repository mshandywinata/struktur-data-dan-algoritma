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
    NODE *fourth = NULL;
    NODE *fifth = NULL;
    NODE *current = NULL;

    head = (struct NODE *)malloc(sizeof(struct NODE));
    second = (struct NODE *)malloc(sizeof(struct NODE));
    third = (struct NODE *)malloc(sizeof(struct NODE));
    fourth = (struct NODE *)malloc(sizeof(struct NODE));
    fifth = (struct NODE *)malloc(sizeof(struct NODE));

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