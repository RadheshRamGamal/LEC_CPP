#include<iostream>
using namespace std;

class a {
public:
    static int add(int a, int c) {
   return a+c;
    }
};

int main() {
  
    int result = a::add(5, 3);
    cout<< "Result: " << result << std::endl;

    return 0;
}
