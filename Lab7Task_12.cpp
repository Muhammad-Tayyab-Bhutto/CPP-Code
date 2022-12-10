#include <iostream> 
using namespace std;

void ARRRAY()
{
    int sizeOfArray, highestValue;
    cout<<"Please enter the size of array: ";
    cin>>sizeOfArray;
    int *arr = new int[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout<<"Enter the value number "<<i+1<<" ";
        cin>>arr[i];
        if (i == 0)
        {
            highestValue = arr[i];
        }

        if (highestValue < arr[i])
        {
            highestValue = arr[i];
        }
    }
    cout<<"Highest value is: "<<highestValue;

}
int main(){
    ARRRAY();
    return 0;
}