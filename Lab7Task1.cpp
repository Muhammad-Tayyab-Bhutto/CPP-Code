#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,100};
    int sum = 0;
    int length_of_array = 10;
    for (int i = 0; i<10; i++)
    {
        
        cout<<arr[i]<<endl;
        sum += arr[i];

    }
    cout<<"Sum is: "<<sum<<" and average is: "<<sum/length_of_array;
    return 0;

}