#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string bookname;
    int Isbin;

public:
    Book() {
        bookname = "";
        Isbin = 0;
    }

    Book(string x, int y) {
        bookname = x;
        Isbin = y;
    }

    Book(Book& b) {
        bookname = b.bookname;
        Isbin = b.Isbin;
    }

    void display() {
        cout << "The book name is: " << bookname << endl;
        cout << "The book ISBN is: " << Isbin << endl;
    }
};

int main() {
    string name;
    int isbn;

    cout << "Enter the book name: " << endl;
    cin >> name;
    cout << "Enter the ISBN number: " << endl;
    cin >> isbn;

    Book b1(name, isbn);
    Book b2(b1);

    b1.display();
    b2.display();

    return 0;
}
