#include <iostream>
using namespace std;


class A {
    public:
     int data;
     void get_data(){
        cout<<"enter the value of data";
        cin>> data;
     }
     void show_data(){
        cout << "the value if data is  : "<<data;
     }
};
class B{
    public:
    class A a ;
    int b;
    
    
    void get_data(){
        
        a.get_data();
        cout<<"enter teh value of b";
        cin>>b;
        
    }
    void show_data(){
          a.show_data();
        cout<<"the value of b: "<< b;;
        
    }

};
int main (){
    class B bea;
    bea.get_data();
    bea.show_data();
}