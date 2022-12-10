#include <iostream>
using namespace std;

void Arr()
{
    int rang;
    cout<<"Enter the size of array: ";
    cin>>rang;
    int *arr = new int[rang];
    for (int i = 0; i < rang; i++)
    {
        cout<<"enter value number "<<1+i<<": ";
        cin>>arr[i];
    }
    cout<<"The even numbers are: ";
    for (int i = 0; i < rang; i++)
    {
        if (arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
    Arr();
    return 0;
}