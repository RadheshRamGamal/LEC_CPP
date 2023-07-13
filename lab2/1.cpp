#include <iostream>
#include <cmath>

const double PI = 3.14159;


int calculateArea(int length = 10) {
    return 6 * pow(length, 2);
}


double calculateArea(double radius) {
    return PI * pow(radius, 2);
}


double calculateArea(double length, double breadth) {
    return length * breadth;
}

int main() {
    int cubeLength;
    double circleRadius, rectangleLength, rectangleBreadth;

    std::cout << "Enter the length of the cube (integer value): ";
    std::cin >> cubeLength;
    std::cout << "Area of the cube: " << calculateArea(cubeLength) << std::endl;

    std::cout << "Enter the radius of the circle (decimal value): ";
    std::cin >> circleRadius;
    std::cout << "Area of the circle: " << calculateArea(circleRadius) << std::endl;

    std::cout << "Enter the length of the rectangle (decimal value): ";
    std::cin >> rectangleLength;
    std::cout << "Enter the breadth of the rectangle (decimal value): ";
    std::cin >> rectangleBreadth;
    std::cout << "Area of the rectangle: " << calculateArea(rectangleLength, rectangleBreadth) << std::endl;

    return 0;
}
