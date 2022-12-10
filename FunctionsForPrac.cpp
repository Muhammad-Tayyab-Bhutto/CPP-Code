#include <iostream>
using namespace std;

// Function Initialization
void Greet()
{
    cout<<"Hello! Good Morning.";
}

void Sum(int a, int b)
{
    int c = a + b;
    cout<<"\nThe sum of two number is "<<c;
    
}

int Subt(int a, int b)
{
    int c = a - b;
    // cout<<"\nThe sum of two number is "<<c;
    return c;
}

int main()
{
    // Function Call
    Greet();
    Sum(4, 5);
    int b = Subt(4, 8);
    cout<<"\nThe difference of two numbers is : "<<b;
    return 0;
}