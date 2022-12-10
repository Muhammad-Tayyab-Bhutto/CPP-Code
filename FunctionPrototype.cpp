#include <iostream>
using namespace std;

// Function Prototype
// int sum(int a, int b);
// OR
// We Can Declare The Funtion
int sum(int, int);

int main()
{
    int num1, num2;
    cout<<"Enter Number : ";
    cin>>num1;
    cout<<"Enter Number : ";
    cin>>num2;
    // Actual Parameters (num1, num2)
    cout<<"Result : "<<sum(num1, num2);    

    return 0;
}

// Function Defination
// Formal Parameters (int a, int b)
int sum(int a, int b)
{
    int c = a+b;
    return c;
}
