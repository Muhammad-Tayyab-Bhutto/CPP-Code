#include <iostream> // Preprogressive Directive
using namespace std; // Global Identifier

// Function Declaration
void Greetings(void);

int  main()     // Main Function
{
    Greetings();
    Greetings();
    Greetings();
    Greetings();
    Greetings();

    return 0; // return type
}

// Function Defination
// Function Declaration
void Greetings(void)
{
    cout<<"Good Morning!\n";
    int a, b;
    int c;
    cout<<"Please enter a number: ";
    cin>>a;
    cout<<"Please enter a number: ";
    cin>>b;
    c = a+b;
    cout<<"The sum is: "<<c;
}