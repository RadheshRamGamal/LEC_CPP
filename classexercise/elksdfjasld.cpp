#include <iostream>
using namespace std;
class anish{
    public:
    virtual void greeter()= 0;

    };

class radhesh:public anish{
    public:
    void greeter() {
        cout<<"hi";
    }
};
int main() {
    radhesh obj; 
    radhesh* ptr = &obj;  
    ptr->greeter();  

    return 0;
}

