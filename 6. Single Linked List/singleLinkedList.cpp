#include <iostream>
#include <malloc.h>
using namespace std;

struct NODE {
    int bilangan;
    NODE *next;
};

int main() {
    struct NODE *head = NULL;
    head = (struct NODE*)malloc(sizeof(struct NODE));
    cout << head << endl;
    
    return 0;
}