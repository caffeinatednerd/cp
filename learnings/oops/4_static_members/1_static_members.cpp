#include <iostream>
using namespace std;

// Used for accessing and modifying static data members
// Simple functions can also be used for it but it is NOT recommended, so we require static member functions

// Imp. Note 
// 1. Static functions are not allowed to access non-static parts (cos they are called on a class)
// 2. But non-static functions can access the static data members
// 3. Static functions do not have any "this pointer" as they can be called using class and this pointer is a pointer to an object

class Player {
private:
    static int count;
public:
    Player() { count++; }
    ~Player() { count--; }
    static int getCount() { return count; }
};

int Player::count=0;

int main() {
    Player p1, p2;
    cout << Player::getCount();
    return 0;    
}