#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Number After swap \n";
    cout << "a = " << a << "\t b = " << b << endl;
}

int main()
{
    int a, b;
    cout << "Enter two numbers\n";
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Numbers Before swap\n";
    cout << "a = " << a << "\t b = " << b << endl;
    swap(a, b);
    return 0;
}
