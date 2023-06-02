#include<iostream>
using namespace std;

class A{
    public:
    int data;

    void getdata(){
        cout<<"enter the data:";
        cin>>data;


    }
    void showdata(){
        cout<<"the data is"<<data;


    }


};

class B{
    public:
    class A a ;
    int b;
    
    void getdata(){
        a.getdata();
        cout <<"enter the value of b";
        cin>>b;


    }
 void showdata(){
    a.showdata();
    cout<<"the value of b is"<<b;

 }

};
int main(){
    class B c;
    c.getdata();
    c.showdata();
}

