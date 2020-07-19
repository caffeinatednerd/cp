#include <iostream>
#include <string>
using namespace std;

// Allows access of private and protected members of it
// Considered against encapsulation and OOPs principles
// Most languages including Java does not support friend function

// Here Print can access Employee as it is Employees friend

class Employee;

class Printer {
public:
    void printEmp(const Employee &e);
};

class Employee {
private:
    int id;
    string name;
public:
    // Syntax for writing friend function
    friend void Printer::printEmp(const Employee &e);
    Employee(int i, string n) : id(i), name(n) {}
};

void Printer::printEmp(const Employee &e) {
    cout << e.id << " " << e.name << endl;
}

int main() {
    Printer p;
    Employee e(101, "ABC");
    p.printEmp(e);
    return 0;    
}