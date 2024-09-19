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

// Derived class
class Derived : public Base1, public Base2 {
    public:
     void show() {
        cout << "Base1 class show function" << endl;
    }
};

int main() {
    Derived obj;
    obj.show();    // calling function of Base1 class
    obj.display(); // calling function of Base2 class
    return 0;
}
