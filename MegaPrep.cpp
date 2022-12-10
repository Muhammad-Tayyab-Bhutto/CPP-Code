#include <iostream>
#include <string>
using namespace std;

int* display()
{
    // Array Merging and sorting
    int arr[5];
    int size, temp;
    int k = 0;
    cin >> size;
    int* arr2 = new int[size];
    int* arr3 = new int[size+5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Elements of First array. ";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Elements of second array. ";
        cin >> arr2[i];
    }
    for (int i = 0; i < 5; i++)
    {
        arr3[k++] = arr[i];
    }
    for (int i = 0; i < 5+size; i++)
    {
        arr3[k++] = arr2[i];
    }
    for (int i = 0; i < size+5; i++)
    {
        for (int j = i+1; j < size+5; j++)
        {
            if (arr3[i] > arr3[j])
            {
                temp = arr3[j];
                arr3[j] = arr3[i];
                arr3[i] = temp;
            }
        }
    }
    // for (int i = 0; i < 5+size; i++)
    // {
    //     cout << arr3[i] << " ";
    // }    
    return arr3;
}

int main(){
    
    // int *p = display();
    // for (int i = 0; i < 8; i++)
    // {
    //     cout << *(p + i) << "  ";
    // }
    string str = "Hello Programming Fundamentals Student. I am there";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e'||
        str[i] == 'i' ||
        str[i] == 'o' || str[i] == 'u')
        {
            cout << str[i];
        }
    }
    
    return 0;
}