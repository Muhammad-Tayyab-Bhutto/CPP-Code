#include <iostream> 
using namespace std;

void ArrayElementSearch()
{
    int sizeOfArray, searchingValue;
    bool flage = false;
    cout<<"Please enter the size of array: ";
    cin>>sizeOfArray;
    int *arr = new int[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout<<"Enter the value number "<<i+1<<" ";
        cin>>arr[i];
    }
    cout<<"enter the value which you want search from array: ";
    cin>>searchingValue;
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arr[i] == searchingValue)
        {
            cout<<searchingValue<<" is present at index: "<<i;
            flage = true;
        }
    
    }
    if (!flage)
    {
        cout<<searchingValue<<" is not present in the array.";
    }
}
int main(){
    ArrayElementSearch();
    return 0;
}