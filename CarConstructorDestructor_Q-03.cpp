#include <iostream>
#include <string>
using namespace std;
class Car {
    string model;
    int year;
public:
    // Parameterized constructor
    Car(string m, int y) {
        model = m;
        year = y;
        cout << "Car object created: " << model << ", " << year << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car object destroyed: " << model << ", " << year << endl;
    }

    // Display function
    void display() {
        cout << "Car model: " << model << ", Year: " << year << endl;
    }
};
int main() {
    // Creating object using parameterized constructor
    Car car1("Toyota", 2020);
    car1.display();
    // Another object
    Car car2("Civic", 2022);
    car2.display();

    return 0;
}
