#include <iostream>
using namespace std;

int main()
{
    int rang;
    int i = 1;
    cout<<"Please enter a Range: ";
    cin>>rang;

    while(i <= rang)
    {
        if (i % 2 == 0)
        {
            cout<<i<<" is Even"<<endl;
        }
        else
        {
            cout<<i<<" is Odd"<<endl;
        }
        i++;
    }
    return 0;
}