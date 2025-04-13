#include <iostream>
#include <cstring>
using namespace std;

class Person {
    char* name;

public:
    // Constructor
    Person(const char* n) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // Shallow Copy Constructor
    Person(const Person& p) {
        name = p.name; // Just copying the pointer (shallow copy)
    }

    // Deep Copy Constructor
    Person(const Person& p, bool deepCopy) {
        if (deepCopy) {
            name = new char[strlen(p.name) + 1];
            strcpy(name, p.name);
        } else {
            name = p.name;
        }
    }

    // Assignment operator for deep copy
    Person& operator=(const Person& p) {
        if (this != &p) { // Prevent self-assignment
            delete[] name;
            name = new char[strlen(p.name) + 1];
            strcpy(name, p.name);
        }
        return *this;
    }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Person() {
        delete[] name;
    }
};

int main() {
    // Creating original object
    Person p1("Javed Ali");
    cout << "Original Person: ";
    p1.display();

    // Shallow Copy
    Person p2 = p1;
    cout << "\nAfter Shallow Copy:" << endl;
    p2.display();

    cout << "Original After Shallow Copy:" << endl;
    p1.display();

    // Deep Copy using deep-copy constructor
    Person p3(p2, true);
    cout << "\nAfter Deep Copy:" << endl;
    p3.display();

    cout << "Original After Deep Copy:" << endl;
    p1.display();

    // Deep Copy using assignment operator
    Person p4("Temp");
    p4 = p1;

    cout << "\nAfter Deep Assignment Copy:" << endl;
    p4.display();

    cout << "Original After Deep Assignment Copy:" << endl;
    p1.display();

    return 0;
}
