#include <iostream>

using namespace std;

class Door {
private:
    bool isopen;
    bool islocked;

public:
    Door();
    void opendoor();
    void closedoor();
    void lockdoor();
    void unlockdoor();
    bool isdooropen() const;
    bool isdoorlocked() const;
};

// Default constructor
Door::Door() : isopen(false), islocked(false) {}

// Function to open the door
void Door::opendoor() {
    if (!islocked) {
        isopen = true;
        cout << "Door is now open." << endl;
    } else {
        cout << "Cannot open the door. It is locked." << endl;
    }
}

// Function to close the door
void Door::closedoor() {
    isopen = false;
    cout << "Door is now closed." << endl;
}

int main() {
    cout << "Hello World" << endl;

    // You can create an instance of the Door class and use its methods here.

    return 0;
}