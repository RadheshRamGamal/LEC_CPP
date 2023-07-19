#include <iostream>
using namespace std;
class base{
    public:
    virtual void greeter() = 0 ;
 
};
class derriverd: public base{
    public:
    void greeter(){
        cout<<"hi";
    };
   
};
int main(){
    base *d1;
    d1->greeter();

}