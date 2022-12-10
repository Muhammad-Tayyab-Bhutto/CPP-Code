#include <iostream>     // Preprogressive Directive
using namespace std;    // Global Identifier

int main()              // Main Fuction
{
    int totalAmount;
    cout<<"Enter Total Amout : ";
    cin>>totalAmount;
    cout<<"You have to pay 2.5 Percent of Zakat : "
        <<totalAmount*2.5/100;
    return 0;          
}