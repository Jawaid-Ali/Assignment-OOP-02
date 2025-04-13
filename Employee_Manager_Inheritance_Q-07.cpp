#include <iostream>
#include <string>
using namespace std;
// Base class
class Employee {
protected:
    string name;
    int id;
    double salary;
public:
    // Constructor
    Employee(string n, int i, double s) {
        name = n;
        id = i;
        salary = s;
    }
    // Function to display employee details
    void displayEmp() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

// Derived class
class Manager : public Employee {
private:
    string department;

public:
    // Constructor
    Manager(string n, int i, double s, string dept)
        : Employee(n, i, s) {
        department = dept;
    }
    // Function to display manager details
    void displayManager() {
        displayEmp(); // Call base class function
        cout << "Department: " << department << endl;
    }
};
int main() {
    // Dynamic object for Employee
    Employee* emp1 = new Employee("Javed", 101, 5000);
    cout << "Employee Details:" << endl;
    emp1->displayEmp();

    cout << endl;

    // Dynamic object for Manager
    Manager* mgr1 = new Manager("Ali", 203, 15000, "Sales");
    cout << "Manager Details:" << endl;
    mgr1->displayManager();

    // Free memory
    delete emp1;
    delete mgr1;

    return 0;
}
