#include <iostream>
using namespace std;
class Vehicle {
public:
    // Function  start the engine 
    void startEngine() {
        cout << "Vehicle engine started." << endl;
    }
};
class Airplane : public Vehicle {
public:
    // Overriding the  function
    void startEngine() {
        cout << "Airplane engine started." << endl;
    }
};
int main() {
    //  object dynamically
    Vehicle* vehicle = new Vehicle();
    cout << "Vehicle object:" << endl;
    vehicle->startEngine();  // Calling the base class function
    // Creating an Airplane object dynamically
    Airplane* airplane = new Airplane();
    cout << "Airplane object:" << endl;
    airplane->startEngine();  // Calling the overridden function in Airplane

    // Free Memory
    delete vehicle;
    delete airplane;

    return 0;
}
