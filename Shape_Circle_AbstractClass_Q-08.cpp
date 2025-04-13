#include <iostream>
using namespace std;
class Shape {
private:
    double area;
protected:
    // Protected method 
    void setArea(double a) {
        area = a;
    }
    // irtual function
    virtual void calculateArea() = 0;

public:
    // Method display area
    void displayArea() {
        cout << "Area: " << area << endl;
    }
};
class Circle : public Shape {
private:
    double radius;
public:
    // Constructor
    Circle(double r) {
        radius = r;
        calculateArea(); 
    }
protected:
    // Overriding protected 
    void calculateArea() override {
        double a = 3.14 * radius * radius;
        setArea(a); 
    }
};
int main() {
    // Creating object of derived class
    Circle c1(5.0);
    cout << "Circle with radius 5:" << endl;
    c1.displayArea();
    return 0;
}
