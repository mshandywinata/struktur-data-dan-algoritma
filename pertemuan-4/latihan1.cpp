#include <iostream>
using namespace std;

int main() {
    int firstNum = 5, secondNum = 7;
    int *pNum;
    pNum = &firstNum;
    *pNum = 10;
    pNum = &secondNum;
    *pNum = 20;

    cout << "First Num: " << firstNum << " and second num: " << secondNum;

    return 0;
}