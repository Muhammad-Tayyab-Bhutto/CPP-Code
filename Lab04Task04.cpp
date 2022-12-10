#include <iostream>
using namespace std;

int main()
{
    int rang;
    int i = 1;
    cout<<"Please enter a range upto which loop should run: ";
    cin>>rang;
    // for (int i = 0; i<= rang; i++)
    // {
    //     if (i % 5 == 0)
    //     {
    //         cout<<i<<endl;
    //     }

    // }
    while (i <= rang)
    {
        if (i % 5 == 0)
        {
            cout<<i<<endl;
        }

    }
    

    return 0;
}