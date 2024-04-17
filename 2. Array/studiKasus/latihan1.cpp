#include <iostream>
using namespace std;

int main() {
    char huruf[12] = {'c', 'h', 'a', 'm', 'p', 'i', 'o', 'n', 's', 'h', 'i', 'p'};
    cout << huruf[0] << huruf[4] << huruf[sizeof(huruf) / sizeof(char) - 1]; 
}