#include <iostream>
#include <string>
using namespace std;

class Person {
// private: //Can't be accessed anyhow
protected: // Can be accessed by all 3 access specifiers
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

class Student : private Person { 
private:
    int marks;
public:
    Student(int id, string name, int marks) : Person(id, name){
        this->marks = marks;
    }

    void access() {
        cout << name;
    }

    void print() {
        cout << name << " " << id << " " << marks << endl;
    }
};

int main() {
    Student s1(20, "Rahul", 100);
    s1.access();
    return 0;
}