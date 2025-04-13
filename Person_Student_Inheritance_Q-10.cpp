#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;  
    int age;     
public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
};
// derived class
class Student : public Person {
private:
    char grade;  
public:
    // Constructor calling Person constructor
    Student(string n, int a, char g) : Person(n, a), grade(g) {}
    // display function 
    void display() {
        cout << "Name: " << getName() << endl;  
        cout << "Age: " << getAge() << endl;   
        cout << "Grade: " << grade << endl;    
    }
};
int main() {
    // Creating object dynamically
    Student* student = new Student("Javed", 20, 'A');
    // Display  details
    cout << "Student Details:" << endl;
    student->display();  
    // Free memory
    delete student;
    return 0;
}
