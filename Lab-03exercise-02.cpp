#include <iostream>

using namespace std;

int main()
{
    float percentage;
    cout<<"Please enter your percentage : ";
    cin>>percentage;
    if (percentage > 100)
    {
        cout<<"Please Enter A Valid Input";
    }
    else if (percentage >= 90)
    {
        cout<<"A1";
    }
    else if (percentage >= 80)
    {
        cout<<"A";
    }
    else if (percentage >= 70)
    {
        cout<<"B";
    }
    else if (percentage >= 60)
    {
        cout<<"C";
    }
    else if (percentage >= 50)
    {
        cout<<"F";
    }
    return 0;
}