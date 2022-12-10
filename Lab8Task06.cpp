#include <iostream>
using namespace std;

int main(){
    int arrElements[10];
    int *ptr;
    int searchElement;
    bool flag = true;
    cout << "Enter the values. " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arrElements[i];
    }
    ptr = arrElements;
    cout << "\nThe values in array are. ";
    for (int i = 0; i < 10; i++)
    {
        cout << *(ptr + i) << "  ";    
    }
    cout << "\nEnter element you want to search. ";
    cin >> searchElement;
    for (int i = 0; i < 10; i++)
    {
        if (searchElement == *(ptr + i))
        {
            cout << "The element found at index. " << i;
            flag = false;
        }
    }
    if (flag)
    {
        cout << "Element not found (:<(";
    }
    return 0;
}