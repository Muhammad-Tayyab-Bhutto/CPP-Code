#include <iostream>
using namespace std;

int main()
{
    int i, arr[10];
    int min;
    int diceChoice[3][8] = {{4, 5, 6, 7, 2, 4, 5, 10}, {2, 4, 5, 10, 1, 4, 8, 9}, {1, 4, 8, 9, 4, 5, 6, 7}};
    // for (i = 0; i<10; i++)
    // {
    //     cout<<"Please enter number "<<i<<arr[i];
    //     arr[i] = arr[i];
    //     if (arr[i] < i);
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 8; j++)
    //     {
    //         cout << diceChoice[i][j] << "  ";
    //     }
    // }
    int *C = new int[4];
    for (int i = 0; i < 4; i++)
    {
        /* code */
        int n = rand() % 10 +1;
        C[i] = n;
        cout << C[i];
    }
    
    return 0;
}