#include <iostream>
using namespace std;

int main() {
    char arr[3] = {'a', 'b', 'c'};
    for (int i = 0; i < sizeof(arr) / sizeof(char); i++) {
        cout << "index ke-" << i << " = " << arr[i] << endl;
    }

    return 0;
}