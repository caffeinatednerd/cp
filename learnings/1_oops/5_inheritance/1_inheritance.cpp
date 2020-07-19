#include <iostream>
#include <string>
using namespace std;

// Base Member Initialization
// Initializing the members of the base class from derived class

class Person {
protected:
    string name;
    int id; 
public:
    Person(int id, string name) {
        this->id = id;
        this->name = name;
    }
    void print() {
        cout << name << " " << id << endl;
    }
};

class Student : public Person { 
private:
    int marks;
public:
    Student(int id, string name, int marks) : Person(id, name){ // <--------------- How to pass base class members from derived class
        this->marks = marks;
    }

    void print() {
        cout << name << " " << id << " " << marks << endl;
    }
};

int main() {
    Person p1(10, "Prabhu");
    p1.print();

    Student s1(20, "Rahul", 100);
    s1.print();
    return 0;
}