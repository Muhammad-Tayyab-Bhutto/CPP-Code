#include <iostream> 
using namespace std;

void ARRRAY()
{
    int sizeOfArray, lowestValue;
    cout<<"Please enter the size of array: ";
    cin>>sizeOfArray;
    int *arr = new int[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout<<"Enter the value number "<<i+1<<" ";
        cin>>arr[i];
        if (i == 0)
        {
            lowestValue = arr[i];
        }

        if (lowestValue > arr[i])
        {
            lowestValue = arr[i];
        }
    }
    cout<<"Lowest value is: "<<lowestValue;

}
int main(){
    ARRRAY();
    return 0;
}