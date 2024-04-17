#include <iostream>
using namespace std;

int main() {
    int x = 12;
    int *px;

    px = &x;

    cout << "dataType: " << typeid(*px).name() << endl;
    cout << "value: " << *px << endl;
    cout << "dataType: " << typeid(px).name() << endl;
    cout << "value: " << px << endl;

    return 0;
}