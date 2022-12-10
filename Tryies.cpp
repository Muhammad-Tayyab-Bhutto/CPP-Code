#include <iostream>  //Preprogressive Directive
using namespace std; // Global Identifier

int main() // Main Function
{
    int a = 5, b = 10;
    a = a<<1;
    b = b<<1;
    b = a<<2;   // Value will shift two units left in binary 0000 1010 after 0001 1000
    cout<<"value of a is: "<<a<<endl;
    cout<<"value of b is: "<<b<<endl;

    return 0;
}