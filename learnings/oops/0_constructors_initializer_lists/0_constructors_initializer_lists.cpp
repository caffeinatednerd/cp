#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point() : x(0), y(0)
    {}
    Point(int x1, int y1): x(x1), y(y1)
    {}
    print() {
        cout << x << " " << y << endl;
    }
};

int main() {  
    Point p1, p2(10, 20);
    p1.print();
    p2.print();

    Point *ptr = new Point(30, 20);
    ptr -> print();
    return 0;
}