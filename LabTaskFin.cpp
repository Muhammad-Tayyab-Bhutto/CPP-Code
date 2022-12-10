#include <iostream>
using namespace std;

void Survay(int arr[], int size)
{
    float count = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "Number of movies watched. " << arr[i] << endl;
        count += arr[i];
    }
    cout << "The Average of movies saw is " << count/size;
    
}
int main()
{
    int size;
    int *arr = new int[size];
    cout << "How many total persons are survayed. ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Please enter number of movies you saw. ";
        cin >> arr[i];
    }
    Survay(arr, size);
    return 0;
}