#include <iostream>


using namespace std;

class Student {
protected:
    char name[50];
    int roll;

public:
    void getdat() {
        cout << "Enter student's name: ";
       cin>>name;
        cout << "Enter student's roll number: ";
        cin >> roll;
    }
};

class Test : public Student {
protected:
    int marks[3]; 

public:
    void getdat() {
        Student::getdat();
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for test " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    int caltotal() {
        int total = 0;
        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }
        return total;
    }
};

class Result : public Test {
public:
    void displAY() {
        cout << "\n--- Student Result ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Total Marks: " << caltotal() << endl;
  
    }
};

int main() {
    Result r1;
    r1.getdat();
    r1.displAY();

    return 0;
}
