#include <iostream>
using namespace std;
class student
{
    private:
     int roll;
     char name[20];
     char phone[10];
    public:
     void getdata();
     void showdata();
};
inline void student :: getdata()
{
    cout<<"\nEnter Roll No: ";
    cin>>roll;
    cout<<"\nEnter Name: ";
    cin>>name;
    cout<<"\nEnter Phone Number: ";
    cin>>phone;
}
inline void student :: showdata()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<roll<<endl;
    cout<<"Phone No: "<<phone<<endl;
}
int main()
{
    student s1, s2;
    s1.getdata();
    s2.getdata();
    cout<<"\nFirst Student Infos: "<<endl;
    s1.showdata();
    cout<<"\nSecond Student Infos: "<<endl;
    s2.showdata();
    return 0;
}