#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Please enter a number : ";
    cin >> number;
    int answer = number % 2; 
    switch (answer)
    {
        case 0:
            cout<<"Even";
            break;
        default:
            cout<<"odd";    
    }
    return 0;
}