/*

*/

#include <iostream>
using namespace std;

void ArraySorting ()
{
    int i = 0, j = 0, temp;
    int arr[10];
    int tempArray[10];
    for (i = 0; i < 10; i++)
    {
        cout<<"Enter elements for array: ";
        cin>>arr[i];
        tempArray[i] = arr[i];
    }

    for (i = 0; i < 10; i++)
    {
        for (j = i+1; j < 10; j++) 
        {     
            if(arr[i] > arr[j]) 
            {    
                temp = arr[i];    
                arr[i] = arr[j];    
                arr[j] = temp;    
            }     
        } 
    }

    cout<<"Sorted array in ascending order: ";
    
    for (i = 0 ; i < 10; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;

    for (i = 0; i < 10; i++)
    {
        for (j = i+1; j < 10; j++) 
        {     
            if(arr[i] < arr[j]) 
            {    
                temp = arr[i];    
                arr[i] = arr[j];    
                arr[j] = temp;    
            }     
        } 
    }
    cout<<"Sorted array in descending order: ";
    for (i = 0 ; i < 10; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;


    cout<<"Given elements of array was: ";
    for (i = 0; i < 10; i++)
    {
        cout<<tempArray[i]<<" ";
    }
}

int main()
{
    ArraySorting();    

    return 0;
}