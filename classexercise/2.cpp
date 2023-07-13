#include <iostream>
using namespace std;
 
    const int c=6;
class a{

public:
void func() {

   static int num = 1;
   cout <<"Value of num: "<< num <<"\n";
   num++;
   cout<<c;
}
};
int main() {
    a b;
    b.func();
cout<<c;
   return 0;
}