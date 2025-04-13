#include <iostream>
using namespace std;
class Employee {
//count the total employees
    static int count;  
public:
    Employee() {
        count++;}
    ~Employee() {
        count--;}

    static void displayCount() {
        cout << "total employees: " << count << endl;}
};
int Employee::count = 0;
int main() {
    Employee* emp1 = new Employee();
    Employee* emp2 = new Employee();
	// dsplay count 
    Employee::displayCount(); 

    Employee::displayCount();  // display count after delete	
    delete emp1;
    delete emp2;
    return 0;
}
