#include <iostream>
  using namespace std;

namespace BEI {
    int commonAttribute = 10;
    int uniqueAttribute = 20;
}

namespace BCT {
    int commonAttribute = 30;
    int uniqueAttribute = 40;
} 

int main() {
  

    // Accessing common attributes
    cout << "BEI::commonAttribute: " << BEI::commonAttribute << endl;
    cout << "BCT::commonAttribute: " << BCT::commonAttribute << endl;

    // Accessing unique attributes
    cout << "BEI::uniqueAttribute: " << BEI::uniqueAttribute << endl;
    cout << "BCT::uniqueAttribute: " << BCT::uniqueAttribute << endl;

    return 0;
}
