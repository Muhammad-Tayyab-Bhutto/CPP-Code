#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"Please enter a number : ";
    cin>>a;
    if (a<0)
    {
        cout<<a<<" is a negative number";
    }
    else if (a>0)
    {
        cout<<a<<" is a positive number";
    }
    else
    {
        cout<<a<< " is zero";
    }
    return 0;
}