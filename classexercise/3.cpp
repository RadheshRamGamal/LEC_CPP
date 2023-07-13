#include <iostream>

class MyClass {
public:
    const int a=5;

    MyClass(int value) : a(value) {
    }

    void displayConstantVar() const {
        std::cout << "a: " << a << std::endl;
    }
};

int main() {
    // Create objects of MyClass with different a values
    MyClass obj1(5);
    MyClass obj2(10);

    // Access and display the a for each object
    obj1.displayConstantVar();
    obj2.displayConstantVar();

    // Attempt to modify the a (results in a compilation error)
    // obj1.constantVar = 7;  // Uncommenting this line will cause a compilation error

    return 0;
}
