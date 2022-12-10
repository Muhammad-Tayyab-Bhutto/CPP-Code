#include <iostream>
using namespace std;

void bubblesort(int *arr)
{
    int temp;
    cout << "Unsorted array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (arr[i] > arr[j])
             {
                temp = arr[j]; // 2 5 6 1 
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

}
int main()
{
    int arr[] = {5, 7, 1, 6, 2, 4, 65, 40, 3, 9};
    
    bubblesort(arr);
    return 0;
}