#include <iostream>
using namespace std;

// Base class (Level 1)
class Animal {
public:
    void eat() {
        cout << "Animal eats food." << endl;
    }
};

// Derived class (Level 2)
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

// Derived class (Level 3)
class Puppy : public Dog {
public:
    void play() {
        cout << "Puppy is playing." << endl;
    }
};

int main() {
    Puppy p1;

    p1.eat();    // From Animal
    p1.bark();   // From Dog
    p1.play();   // From Puppy

    return 0;
}

