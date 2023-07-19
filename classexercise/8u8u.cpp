#include <iostream>
using namespace std;
class base{
    public:
    virtual void greeter() = 0 ;
    void display(){
        cout<<"displaying";
    }
};
class derriverd: public base{
    public:
    void display(){
         cout<<"displaying";
    }
};
int main(){
    derriverd *d1;
    d1->display();

}