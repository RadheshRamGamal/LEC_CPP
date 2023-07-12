#include <iostream>
using namespace std;

class parent{
    public:
    int a;
    parent(){
        cout<<"parent constructor called";
    }
    ~parent(){
       cout<<"parent des called";
    }
};


class child:public parent {
    public:
        child(){
            
        cout<<"child constructor called";
        }
    
    ~child(){
        cout<<"child de  structor called";
    }
    };   

int main(){
    child c1;
    return 0;
}
    
    
