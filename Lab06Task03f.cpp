#include <iostream>
using namespace std;

void Grade(float percentage)
{
    if (percentage <= 100.0 && percentage >= 90.0)
    {
        cout<<"A+";
    }
    else if (percentage < 90.0 && percentage >= 80.0)
    {
        cout<<"A";
    }
    else if (percentage < 80.0 && percentage >= 70.0)
    {
        cout<<"B";
    }
    else if (percentage < 70 && percentage >= 60)
    {
        cout<<"C";
    }
    else
    {
        cout<<"F";
    }
    
}

int main()
{
    float percentage;
    cout<<"Please enter your percentage to know your grade: ";
    cin>>percentage;
    Grade(percentage);
    return 0;
}
