#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
 
        // for (int j = i - 1; j >= 1; j--)
        // {
        //     cout<<" ";

        // }
        for (int k = 5; k >= i; k--)
        {
            
            if (k<=i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}