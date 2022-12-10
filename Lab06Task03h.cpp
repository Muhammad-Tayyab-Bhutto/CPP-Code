#include <iostream>
using namespace std;

void Sum(int number)
{
    int sum = 0;
    for (int i = 1; i <= number; i++)
    {
        sum = sum + i;
    }
    cout<<"The sum of all "<<number<<" integers is "<<sum;
}

int main()
{
    int number;
    cout<<"Enter the range upto which you want to find the sum: ";
    cin>>number;
    Sum(number);

    return 0;
}
