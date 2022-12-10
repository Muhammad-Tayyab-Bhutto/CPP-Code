#include <iostream>
using namespace std;

int main()
{
    int size;
    int i = 0;

    cout<<"Enter the size of the array: ";
    cin>>size;
    int *arr = new int[size];
    for (i = 0; i < size; i++)
    {
        cout<<"Enter value number "<<i+1<<" ";
        cin>>arr[i];
    }
    cout<<"The numbers in reverse order are: ";
    for (i = size-1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}