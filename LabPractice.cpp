#include <iostream>
using namespace std;

int main()
{
    int rang;
    cout<<"Please enter the range: ";
    cin>>rang;
    for (int i = 1; i<=rang; i++)
    {
        for (int j = 1; j<=10; j++)
        {
            cout<<j<<" x "<<i<<" = "<<j*i<<endl;
        }
    }

    return 0;
}