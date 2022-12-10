#include <iostream>
using namespace std;

int main()
{
    int number1, choice;
    cout<<"Please enter first number: ";
    cin>>number1;
    for (int i =1; i <= 5; i++)
    {
        cin>>choice;
        if (choice < number1)
        {
            cout<<"Number is less than Actual Number"<<endl;
        }
        else if (choice > number1)
        {
            cout<<"Number is greater than Actual Number"<<endl;
        }
        else
        {
            cout<<"You Got a Number"<<endl;
            break;
        }
    }
    
    return 0;
}