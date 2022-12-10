#include <iostream>
using namespace std;

void CheckNumbers(int num1, int num2)
{
    if (num1 > num2)
    {
        cout<<"Number 1 is greater than Number 2.";
    }
    else if (num1 < num2)
    {
        cout<<"Number 1 is less than Number 2.";
    }
    else
    {
        cout<<"Both Numbers are equal.";
    }
    
}

int main()
{
    int num1, num2;
    cout<<"Please enter a number: ";
    cin>>num1;
    cout<<"Please enter a number: ";
    cin>>num2;
    CheckNumbers(num1, num2);
    return 0;
}
