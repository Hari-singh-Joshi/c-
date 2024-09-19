#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void show() {
        cout << "Base class show function" << endl;
    }
};

// Derived class 1
class Derived1 : public Base {
public:
    void display1() {
        cout << "Derived1 class display function" << endl;
    }
};

// Derived class 2
class Derived2 : public Base {
public:
    void display2() {
        cout << "Derived2 class display function" << endl;
    }
};

int main() {
    Derived1 obj1;
    Derived2 obj2;

    obj1.show();    // calling function of Base class
    obj1.display1(); // calling function of Derived1 class

    obj2.show();    // calling function of Base class
    obj2.display2(); // calling function of Derived2 class

    return 0;
}
