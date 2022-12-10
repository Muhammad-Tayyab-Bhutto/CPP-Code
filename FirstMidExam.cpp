#include <iostream>
using namespace std;

int main()
{
    int months;
    int years;
    cout<<"Please enter the month number 1-12: ";
    cin>>months;
    cout<<"Please enter the year ";
    cin>>years;
    

    if (months <= 1 || months <= 12)
    {
        if (months == 1)
        {
            cout<<"January : 31 Days ";
        }
        else if (months == 2)
        {
            if (years % 100 == 0)
            {    
                if (years % 400 == 0)
                {
                    
                    // cout<<"Leap Year\n";
                    cout<<"february : 29 Days ";
                
                }
                else
                {
                    // cout<<"Not a leap year\n";
                    cout<<"february : 28 Days ";
                }
            }            
            if (years %100 != 0)
            {
                if (years % 4 == 0)
                {
                    // cout<<"Leap Year\n";
                    cout<<"february : 29 Days ";
                }
                else
                {
                    // cout<<"Not a leap year\n";
                    cout<<"february : 28 Days ";
                }
            }
        }
        else if (months == 3)
        {
            cout<<"March : 31 Days ";
        }
        else if (months == 4)
        {
            cout<<"April : 30 Days ";
        }
        else if (months == 5)
        {
            cout<<"May : 31 Days ";
        }
        else if (months == 6)
        {
            cout<<"June : 30 Days ";
        }
        else if (months == 7)
        {
            cout<<"July : 31 Days ";
        }
        else if (months == 8)
        {
            cout<<"August : 31 Days ";
        }
        else if (months == 9)
        {
            cout<<"September : 30 Days ";
        }
        else if (months == 10)
        {
            cout<<"Octumber : 31 Days ";
        }
        else if (months == 11)
        {
            cout<<"November : 30 Days ";
        }
        else if (months == 12)
        {
            cout<<"December : 31 Days ";
        }

    }
    else
    {
        cout<<"Please Enter a valid input";
    }


    return 0;
}