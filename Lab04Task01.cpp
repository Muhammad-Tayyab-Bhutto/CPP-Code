#include <iostream>
using namespace std;

int main()
{
    int tableNumber;
    int i = 1;
    cout<<"Please enter any number to print its table: ";
    cin>>tableNumber;
    // for (int i = 1; i<= 10; i++)
    // {
    //     cout<<i<<" x "<<tableNumber<<" = "<<i*tableNumber<<endl;
    // }

    // By Using While Loop
    while(i<=10)
    {
        cout<<i<<" x "<<tableNumber<<" = "<<i*tableNumber<<endl;
        i++;
    }

    return 0;
}