#include<iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "The animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "The dog barks." << endl;
    }
};



int main() {
    Dog d1;
    Animal *bptr = &d1;
    bptr->makeSound();

  
}
