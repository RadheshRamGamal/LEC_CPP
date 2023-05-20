
include<iostream>

using namespace std;

class Room {
private:
    double length;
    double breadth;
    double height;

public:
    void setDimensions(double len, double bth, double ht) {
        length = len;
        breadth = bth;
        height = ht;
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    double length, breadth, height;
    cout << "Enter the length of the room: ";
    cin >> length;
    cout << "Enter the breadth of the room: ";
    cin >> breadth;
    cout << "Enter the height of the room: ";
    cin >> height;

    Room room;
    room.setDimensions(length, breadth, height);

    double area = room.calculateArea();
    double volume = room.calculateVolume();

    cout << "The area of the room is: " << area << " square units." << endl;
    cout << "The volume of the room is: " << volume << " cubic units." << endl;

    return 0;
}





