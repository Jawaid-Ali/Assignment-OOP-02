#include <iostream>
#include <string>
using namespace std;
class Book {
public:
    string title;
    string author;
    // constructor to initialize 
    Book(string t, string a) {
        title = t;
        author = a;}
    // function display book details
    void display() {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;}
};
int main() {
    // dynamically creating  Book object using  pointer
    Book* bookPtr = new Book("Origin of Species", "Javed Ali");
    // Displaying book details using the pointer
    bookPtr->display();
    // Deleting  memory
    delete bookPtr;

    return 0;
}
