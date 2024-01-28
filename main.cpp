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


int main() {
    cout << "Hello World" << endl;

    // You can create an instance of the Door class and use its methods here.

    return 0;
}