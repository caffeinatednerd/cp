#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int x, int y) {
        this->x = x; // x = x1
        this->y = y; // y = y1
        cout << x << " " << y << endl;
    }
};

int main() {
    Point p1(10, 20), p2(50, 30);
    return 0;
}