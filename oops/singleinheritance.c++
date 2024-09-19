#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void show() {
        cout << "Base class show function" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    void display() {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Derived obj;
    obj.show();    // calling function of Base class
    obj.display(); // calling function of Derived class
    return 0;
}
