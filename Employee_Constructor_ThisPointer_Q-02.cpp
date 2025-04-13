#include <iostream>
using namespace std;
class Employee {
private:
    const double salary;
    int id;
public:
    // constructor initialization
    Employee(int i, double s) : id(i), salary(s) {
        cout << "Employee object created at address: " << this << endl;
    }
    // Function to display employee details
    void ShowDetail() const {
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
    // Destructor
    ~Employee() {
        cout << "Employee object at address " << this << " destroyed." << endl;
    }
};
int main() {
    // dynamically creating employee objects using 'new'
    Employee* emp1 = new Employee(103, 10000);
    Employee* emp2 = new Employee(104, 60000);
    // Show details
    emp1->ShowDetail();
    emp2->ShowDetail();
    // freeing memory
    delete emp2;
    delete emp1;
    return 0;
}
