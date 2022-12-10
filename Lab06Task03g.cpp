#include <iostream>
using namespace std;

bool CheckNumber(int number)
{
    if (number % 2 == 0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int number;
    cout<<"Enter the number to check it is even or odd: ";
    cin>>number;
    if (CheckNumber(number))
    {
        cout<<"The number is even.";
    }
    else
    {
        cout<<"The number is not even.";
    }
    return 0;
}
