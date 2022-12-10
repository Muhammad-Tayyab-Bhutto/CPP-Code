#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {30, 5, 10, 15, 20};
    // loop for print lowest elements first
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < arr[i+1])
        {
            cout<<arr[i]<<" ";
            if (arr[i]%2 == 0)
            {
                cout<<" Even "<<endl;
            }

            else
            {
                cout<<" Odd "<<endl;
            }
        }
    }
    // loop for print highest elements at last
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > arr[i+1])
        {
            cout<<arr[i]<<" ";
            if (arr[i]%2 == 0)
            {
                cout<<" Even "<<endl;
            }

            else
            {
                cout<<" Odd "<<endl;
            }
        }

    }

    return 0;
}