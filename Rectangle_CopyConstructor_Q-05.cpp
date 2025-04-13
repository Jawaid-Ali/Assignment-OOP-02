#include <iostream>
using namespace std;
class Rectangle {
private:
    int length;
    int breadth;
public:
    // Parameterized constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }
    // Copy constructor
    Rectangle(const Rectangle &c) {
        length = c.length;
        breadth = c.breadth;
    }
    // Display function
    void display() {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
    }
    // Function to calculate area
    int area() {
        return length * breadth;
    }
};
int main() {
    // Original object
    Rectangle rect1(10, 5);
    cout << "Original Rectangle:" << endl;
    rect1.display();
    cout << "area: " << rect1.area() << endl << endl;
    // Copying using copy constructor
    cout << "Copied Rectangle:" << endl;
    Rectangle rect2 = rect1;
    rect2.display();
    cout << "area: " << rect2.area() << endl;
    return 0;
}
