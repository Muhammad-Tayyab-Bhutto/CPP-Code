#include <iostream>
using namespace std;

void Arr()
{
    int arr[5] = {1,2,3,4,5};
    int arr2[8] = {10,20,30,40,50,80,62, 56};
    int arr3[13];
    int k = 0;
    

    cout<<"\nThe values of first array: ";
    for (int i = 0; i < 5; i++)
    {
        arr3[k++] = arr[i];
        cout<<arr[i]<<" ";      
    }

    cout<<endl<<"The values of second array: ";
    for (int i = 0; i < 8; i++)
    {
        arr3[k++] = arr2[i];
        cout<<arr2[i]<<" ";        
    }

    cout<<endl<<"The values of third array: ";
    for (int i = 0; i < 13; i++)
    {
        cout<<arr3[i]<<" ";
    }
}
int main()
{
    Arr();
    return 0;
}