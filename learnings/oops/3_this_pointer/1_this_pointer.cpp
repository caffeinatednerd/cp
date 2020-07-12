#include <iostream>
using namespace std;

// Advantages of this pointer:
// 1. Can be used to make parameters name more meaningful (x instead of x1)
// 2. Chaining Functions - p1.setX() is called first, return the object of the same (Point) type and then (p1.setX()).setY() is called on the previously returned Point object
// cout << is a good example of chaining functions.

// this pointer is constant pointer, changing it will cause compiler error


class Point {
    int x, y;
public:
    Point(int x, int y) {
        this->x = x; // x = x1
        this->y = y; // y = y1
    }
    Point &setX(int x) {
        this->x = x;
        return *this;
    }
    Point &setY(int y) {
        this->y = y;
        return *this;
    }
    void print() {
        cout << x << " " << y;
    }
};

int main() {
    Point p1(10, 10);
    p1.setX(20).setY(30);
    p1.print();
    return 0;
}