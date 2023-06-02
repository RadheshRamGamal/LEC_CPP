#include<iostream>
using namespace std;


class student{
public:
 int mark;
 student(int m){
 mark=m;
 }
};

void average(student s1,student s2){
    int avg;
    avg=(s1.mark+s2.mark)/2;
    cout<<avg;

}
int main(){
student s1(6);
student s2(9);
average(s1,s2);
};

