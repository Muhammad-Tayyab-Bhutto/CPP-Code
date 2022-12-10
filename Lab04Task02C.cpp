#include <iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Please Enter a number to check whether 1-12 : ";
    cin>>number;
    // if (number == 1 || number == 2 || number == 12)
    // {
    //     cout<<"Winter Season";
    // }
    // else if (number == 3 || number == 4)
    // {
    //     cout<<"Spring Season";
    // }
    // else if (number == 5 || number == 6 || number == 7 || number == 8 || number == 9)
    // {
    //     cout<<"Summer Season";
    // }
    // else if (number == 10 || number == 11)
    // {
    //     cout<<"Autumn Season";
    // }
    // else
    // {
    //     cout<<"Invalid";
    // }
    switch(number)
    {
        case 1:
            cout<<"Winter";
            break;
        case 2:
            cout<<"Winter";
            break;
        case 12:
            cout<<"Winter";
            break;
        case 3:
            cout<<"Spring";
            break;
        case 4:
            cout<<"Spring";
            break;
        case 5:
            cout<<"Summer";
            break;
        case 6:
            cout<<"Summer";
            break;
        case 7:
            cout<<"Summer";
            break;
        case 8:
            cout<<"Summer";
            break;
        case 9:
            cout<<"Summer";
            break;
        case 10:
            cout<<"Autumn";
            break;
        case 11:
            cout<<"Autumn";
            break;
        default:
            cout<<"Please enter a valid input";                    
    }
    return 0;
}