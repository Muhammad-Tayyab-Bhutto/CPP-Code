#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Please Enter first number : ";
    cin>>a;
    cout<<"Please Enter second number : ";
    cin>>b;
    if (a > b)
    {
        cout<<"First number is greater than second number";
    }
    else if (a < b)
    {
        cout<<"First number is less than second number";
    }
    else
    {
        cout<<"Both are equal";
    }
    
    return 0;
}