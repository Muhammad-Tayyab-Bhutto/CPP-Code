#include <iostream>     //preprogressive directive
using namespace std;    // Global Identifier

int main()              // main fuction
{                       // Entry Point
    // Declaring Veriable
    float a, b, x;
    cout<<"Enter The Value  of a : ";
    cin>>a;
    cout<<"Enter The Value  of b : ";
    cin>>b;
    x = 2*(a+b)-2*a*b;
    cout<<"The Value  of x : "<<x;

    return 0;
}