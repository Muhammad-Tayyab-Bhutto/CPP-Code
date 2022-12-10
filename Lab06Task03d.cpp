#include <iostream>
using namespace std;

void CheckNumbers(int num1)
{
    if (num1 % 2 == 0)
    {
        cout<<"Number is an even.";
    }
    else
    {
        cout<<"Number is an odd.";
    }
    
}

int main()
{
    int num1;
    cout<<"Please enter a number: ";
    cin>>num1;
    CheckNumbers(num1);
    return 0;
}
