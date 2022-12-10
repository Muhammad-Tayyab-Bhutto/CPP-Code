#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int i;
    do
    {
        cout<<"Please enter a number: ";
        cin>>i;
        if (i>30)
        {
            cout<<"The number is greater than 30 so it won't be calculated\n";
        }
        else if (i >= 0)
        {
            sum += i;
        }
        i++;
    } while (i > 0);
    cout<<"The sum is: "<<sum;
    

    return 0;
}