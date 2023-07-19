#include <iostream>
using namespace std;

class student{
    protected:
   char name[50];
    int roll;
    public:
    void getdata(){
        cout<<"enter name";
        cin>>name;
        cout<<"enter roll";
        cin>>roll;
    }

};
class test:public student{
    
 protected:
    int marks[3]; 

public:
    void getdata() {
        student::getdata();
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for test " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
    
     int calculate_total_marks() {
        int total = 0;
        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }
        return total;
    



};
class result:public student{
    public:
    void display(){

 cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll<< endl;
        cout << "Total Marks: " << calculate_total_marks() << endl;

}
};
int main() {
    result r1;
    r1.getdata();
    r1.display();

    return 0;
}