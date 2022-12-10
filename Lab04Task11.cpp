#include <iostream>
using namespace std;

int main()
{
    int choice;
    float lowest = 0.0;
    float highest = 0.0;
    float number;
    cout<<"How many numbers do you have? ";
    cin>>choice;
    if (choice < 0)
    {
        cout<<"Sorry, you have entered an invalid input.\n"
        <<"Thank You.\n";
    }
    else if (choice == 0)
    {
        cout<<"Opps, you don't have any number for me to process.\n";
        cout<<"Thank You.\n";
    }
    else
    {
        for (int i = 1; i <= choice; i++)
        {
            cout<<"\nPlease enter a number: ";
            cin>>number;
            if(i ==1) 
            {
                highest = number;
                lowest = number;
            }
            if (highest < number)
            {
                highest = number;
            }
            else if (lowest > number)
            {
                lowest = number;
            }
        }
        cout<<"\nThe highest number is: "<<highest;
        cout<<"\nThe lowest number is: "<<lowest;
        cout<<"\nThank You.";
    }
    return 0;
}


