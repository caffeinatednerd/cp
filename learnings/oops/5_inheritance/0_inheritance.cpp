#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int id; 
};

class Student : public Person {
private:
    int marks;
public:
    void print() {
        cout << name << " " << id << " " << marks << endl;
    }
};

int main() {

    return 0;
}