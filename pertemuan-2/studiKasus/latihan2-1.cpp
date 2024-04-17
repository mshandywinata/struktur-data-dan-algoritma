#include <iostream>
using namespace std;

int main() {
    int bil[] = {10, 15, 45, 70, 22, 13};

    cout << "array length: " << sizeof(bil) << endl;
    cout << "array length: " << sizeof(bil) / sizeof(int) << endl;

    return 0;
}