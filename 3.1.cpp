#include <iostream>
#include <string>
using namespace std;

class Person {	
public:
    string name;
    string contact_number;
    string address;
    
    void getdata() {
        cout << "enter the name of the person:" << endl;
        cin >> name;
        cout << "enter the contact_number:" << endl;
        cin >> contact_number;
        cout << "enter the address:" << endl;
        getline(cin >> ws, address);
    }
    
    void showdata() {
        cout << "the name of the person is :" << name << endl;
        cout << "the contact_number of the person is:" << contact_number << endl;
        cout << "the address of the person is " << address << endl;
    }
};

class Student : public Person {
public:
    string classs;
    int rollno;
    float marks;
    
    void input() {
        cout << "class of the student:" << endl;
        cin >> classs;
        cout << "roll number of the student:" << endl;
        cin >> rollno;
        cout << "marks of the student:" << endl;
        cin >> marks;
    }
    
    void display() {
        cout << "class of the student:" << classs << endl;
        cout << "roll number of the student:" << rollno << endl;
        cout << "marks of the student:" << marks << endl;
    }
};

int main() {
    Student s;
    
    s.getdata();
    s.input();
    
    s.showdata();
    s.display();

    return 0;
}
