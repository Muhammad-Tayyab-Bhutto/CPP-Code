#include <iostream>
using namespace std;

void checkNumber()
{
    int number;
    int highest;
    for (int i = 1; i <= 4; i ++)
    {
        cin>>number;
        if (i == 1)
        {
            highest = number;
        }
        if (highest < number)
        {
            highest = number;
        }
    }
    cout<<highest;
}
int main()
{
    checkNumber();

    return 0;
}