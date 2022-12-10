#include <iostream>
using namespace std;

int main()
{
    int size;
    int i = 0;
    int sum = 0;
    cout<<"Enter the size of array: ";
    cin>>size;
    int *arr = new int[size];
    for (i = 0; i < size; i++)
    {
        cout<<"Enter value number "<<i+1<<" ";
        cin>>arr[i];
        sum += arr[i];
    }
    cout<<"The sum of given elements is: "<<sum;

    return 0;
}