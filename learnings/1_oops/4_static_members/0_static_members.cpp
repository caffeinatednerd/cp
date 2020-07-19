#include <iostream>
using namespace std;

// Static Data Members
// Static variables are created once for a class and shared among all objects
// Recommended way to access static members is by using class name and NOT object name
// Recommended -> Player::count;
// Not Recomended -> p1.count;

class Player {
public:
    static int count;
    Player() { count++; }
    ~Player() { count--; }
};

int Player::count=0;

int main() {
    Player p1; // count = 1
    cout << Player::count << " "; // == p1.count
    {
        Player p2; // count = 2
        cout << Player::count << " ";
    } // count = 1
    cout << Player::count << " "; // == p1.count
    return 0;    
}