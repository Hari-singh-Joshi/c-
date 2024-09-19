#include <iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    void show() {
        cout << "Base1 class show function" << endl;
    }
};

// Base class 2
class Base2 {
public:
    void display() {
        cout << "Base2 class display function" << endl;
    }
};

// Derived class 1
class Derived1 : public Base1, public Base2 {
public:
    void display1() {
        cout << "Derived1 class display function" << endl;
    }
};

// Derived class 2
class Derived2 : public Derived1 {
public:
    void display2() {
        cout << "Derived2 class display function" << endl;
    }
};

int main() {
    Derived2 obj;
    obj.show();    // calling function of Base1 class
    obj.display(); // calling function of Base2 class
    obj.display1(); // calling function of Derived1 class
    obj.display2(); // calling function of Derived2 class
    return 0;
}
