#include <iostream>
using namespace std;

struct CAR {
    string brand;
    string type;
    string fuel;
    int year;
    string engine;
    bool isAutomatic;
    int price;
    int topRpm;
};

CAR sport;
CAR casual;

int main() {
    sport.brand = "Toyota";
    sport.type = "GR86";
    sport.fuel = "Gasoline";
    sport.year = 2012;
    sport.engine = "4U-GSE";
    sport.isAutomatic = false;
    sport.price = 1036600000;
    sport.topRpm = 7000;

    casual.brand = "Honda";
    casual.type = "HR-V";
    casual.fuel = "Petrol";
    casual.year = 2022;
    casual.engine = "1.8-litre SOHC i-VTEC I4";
    casual.isAutomatic = true;
    casual.price = 24600;
    casual.topRpm = 7000;

    cout << casual.price << endl;
    cout << casual.price << endl;
    
    return 0;
}