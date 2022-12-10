#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Please Enter first number : ";
    cin>>a;
    cout<<"Please Enter second number : ";
    cin>>b;
    cout<<"Please Enter third number : ";
    cin>>c;
    if (a > b && a > c)
    {
        cout<<"First number is greater than second and third number ";
    }
    else if (a < b && b > c)
    {
        cout<<"Second number is greater than first and third number ";
    }
    else if (c > a && c > a)
    {
        cout<<"Third number is greater than first and second number ";
    }
    else
    {
        cout<<"All are equal";
    }
    
    return 0;
}