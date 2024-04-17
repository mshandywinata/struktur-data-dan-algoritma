#include <iostream>
using namespace std;

int main() {
    int x; int *px;

    cout << "------------- Value 1 -------------" << endl;
    cout << "Value x    : "; cin >> x;

    px = &x;

    cout << "------------- Ouput 1 -------------" << endl;
    cout << "Value x    : "; cout << x << endl;
    cout << "Address x  : "; cout << px << endl;
    cout << "\n" << endl;

    cout << "------------- Value 2 -------------" << endl;
    cout << "Value x    : "; cin >> x;
    
    *px = x;

    cout << "------------- Ouput 2 -------------" << endl;
    cout << "Value x    : "; cout << *px << endl;
    cout << "Address x  : "; cout << px << endl;
    cout << "\n" << endl;


    return 0;
}