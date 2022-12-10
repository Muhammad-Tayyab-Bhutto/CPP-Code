#include <iostream>
using namespace std;
void Grade()
{
    float per;
    cout<<"Please enter your percentage: ";
    cin>>per;
    if (per <= 100 && per >= 90)
    {
        cout<<"A+";
    }
    else if (per < 90 && per >= 80)
    {
        cout<<"A";
    }
    else if (per < 80 && per >= 70)
    {
        cout<<"B";
    }
    else if (per < 70 && per >= 60)
    {
        cout<<"C";
    }
    else if (per < 60 && per >= 0)
    {
        cout<<"F";
    }
    else
    {
        cout<<"Please enter a valid Input";
    }
}

int main()
{
    Grade();
    return 0;
}