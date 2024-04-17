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
    NODE *current = NULL;

    head = (struct NODE *)malloc(sizeof(struct NODE));
    second = (struct NODE *)malloc(sizeof(struct NODE));
    third = (struct NODE *)malloc(sizeof(struct NODE));

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