#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string isbn;
    string title;
    double price;

public:
    // Default constructor
    Book() : isbn(""), title(""), price(0.0) {}

    // Parameterized constructor
    Book(string isbn, string title, double price)
        : isbn(isbn), title(title), price(price) {}

    // Getters and setters
    string getIsbn() const { return isbn; }
    void setIsbn(const string& newIsbn) { isbn = newIsbn; }

    string getTitle() const { return title; }
    void setTitle(const string& newTitle) { title = newTitle; }

    double getPrice() const { return price; }
    void setPrice(double newPrice) { price = newPrice; }

    // Pure virtual function for printing book details
    virtual void Details() const = 0;
};

// Class TeachYourselfPlusPlus that inherits from Book
class TeachYourselfPlusPlus : public Book {
public:
    // Parameterized constructor for TeachYourselfPlusPlus
    TeachYourselfPlusPlus(string isbn, string title, double price)
        : Book(isbn, title, price) {}

    // Implementation of the Details function to print book details
    void Details() const override {
        cout << "ISBN: " << getIsbn() << " - Title: " << getTitle() << " - Price: " << getPrice() << endl;
    }
};

int main() {
    // Create an object of TeachYourselfPlusPlus
    TeachYourselfPlusPlus book("978-0-321-99278-9", "Teach Yourself C++", 29.99);

    // Print the book details
    book.Details();

    return 0;
}
