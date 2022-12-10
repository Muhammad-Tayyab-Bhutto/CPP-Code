#include <iostream>
using namespace std;

void Arr()
{
    int arr[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,3,4,5};
    int arr3[5];

    cout<<"\nThe values of first array: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";        
    }

    cout<<endl<<"The values of second array: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr2[i]<<" ";        
    }

    cout<<endl<<"The values of third array: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i] + arr2[i]<<" ";
    }
}
int main()
{
    Arr();
    return 0;
}