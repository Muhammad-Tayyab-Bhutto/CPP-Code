#include <iostream>
#include <array> 
using namespace std;

int main(){
    // Initialization of array 
    // array<type, size> arrayName = {elementes};
    array <int, 5> arr = {1,2,3,4,5};
    for (int i = 0; i < 5; i++){
        cout<<"The elemtnts in array are: "<<arr[i]<<endl;
    }

    cout<<"Array at 2nd index is "<<arr.at(2)<<endl;

    cout<<"Array is empty or not "<<arr.empty()<<endl;

    cout<<"Array at first index is "<<arr.front()<<endl;
    
    cout<<"Array at last index is "<<arr.back()<<endl;

    cout<<"The size of array is "<<arr.size()<<endl;
    return 0;
}