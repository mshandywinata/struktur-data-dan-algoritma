#include <iostream>
#include <malloc.h>
using namespace std;

struct NASABAH {
    int bilangan;
    NASABAH *next;
};

int main() {
    struct NASABAH *head = NULL;
    head = (struct NASABAH*)malloc(sizeof(struct NASABAH));
    cout << head << endl;
    
    return 0;
}