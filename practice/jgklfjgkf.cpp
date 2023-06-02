#include<iostream>
using namespace std;

class friends{
    public:
    int phone;
    char name[32];
    char address[32];

    void getdata(){

        
        cout<<"enter phone number:";
        cin>>phone;
        cout<<"enter address";
        cin>>address;

    }
    void show(){
        cout<<"data are"<<name,phone,address;
    }
  
   

    
    
};
int main(){

    friends ram,hari;
    cout<<"about ram:"<<endl;
    ram.getdata();
    cout<<"\nabout hari"<<endl;
    hari.getdata();
    ram.show();
    hari.show();
    return 0;

}

