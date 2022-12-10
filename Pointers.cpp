// Pointers, Array, Delete and New Keywords
// By using pointers we assingn the address of variable to new variable
#include <iostream>
using namespace std;

int main()
{
    // Pointers in simple variable
    int a = 47;
    int* b = &a; // Means is a pointer variable (which stores the memory location of a) 

    cout << "The address of b is "<<b<<endl;    // It will give the address of a
    cout << "The value of b is "<<*b<<endl;     // This will give the value of b

    // Uisng new key word
    float* c = new float(52.5);
    cout << "The address of c is "<<c<<endl;    // It will give the address of c
    cout << "The value of c is "<<*c<<endl;     // This will give the value of c

    int *arr = new int[3];
    arr[0] = 55;
    arr[1] = 99;
    arr[2] = 20;
    cout<< "The value of arr[0] : "<<arr[0]<<endl;
    cout<< "The value of arr[1] : "<<arr[1]<<endl;
    cout<< "The value of arr[2] : "<<arr[2]<<endl;

    // Uisng Delete Keyword
    int *arr1 = new int[3];
    arr1[0] = 55;
    arr1[1] = 99;
    arr1[2] = 20;
    delete[] arr;
    cout<< "The value of arr1[0] after deleting is : "<<arr1[0]<<endl;
    cout<< "The value of arr1[1] after deleting is : "<<arr1[1]<<endl;
    cout<< "The value of arr1[2] after deleting is : "<<arr1[2]<<endl;
    

    return 0;
}