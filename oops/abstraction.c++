#include <iostream>
using namespace std;
// Abstract class
class Animal {
public:
    // Pure virtual function
    virtual void makeSound() = 0;
};

// Derived class from Animal
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof Woof" <<endl;
    }
};

// Another derived class from Animal
class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow Meow" <<endl;
    }
};

int main() {
    // Create objects of derived classes
    Dog myDog;
    Cat myCat;

    // Call the makeSound method
    myDog.makeSound();  // Outputs: Woof Woof
    myCat.makeSound();  // Outputs: Meow Meow

    return 0;
}
