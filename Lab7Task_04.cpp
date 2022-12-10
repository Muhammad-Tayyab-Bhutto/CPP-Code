#include <iostream>
using namespace std;

void swapArray()
{
    int arr[5] = {1,2,3,4,5};
    int *swapArr = new int[5];
    cout<<"The values of first array: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nThe values of second array: ";
    for (int i = 0 ; i< 5; i++)
    {
        swapArr[i] = arr[i];
        cout<<swapArr[i]<<" ";
    }
}
int main(){
    swapArray();
    return 0;
}