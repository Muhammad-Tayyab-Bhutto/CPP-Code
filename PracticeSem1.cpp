#include <iostream>
using namespace std;

// Function Declaring
int Sum(int a, int b);

int main()
{
    // int a, b;
    // cout<<"Please enter number one: ";
    // cin>>a;
    // cout<<"Please enter number two: ";
    // cin>>b;
    // cout<<Sum(a, b);
    int id[5];
    for (int i = 0; i<5; i++)
    {
        cout<<++i<<". id: ";
        cin>>id[i];
    }
    for (int i = 0; i<5; i++)
    {
        cout<<++i<<". id: "<<id[i];
    }

    return 0;
}

// Function Difination
int Sum(int a, int b)
{
    int c = a-b;
    return c;
}
