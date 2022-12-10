#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin >> row;
    int *output = new int[row];
    for (int i = 0; i < row; i++)
    {
        int col, ans = 0;
        cin >> col;
        int* arr = new int[col];
        for (int j = 0; j < col; j++)
        {
            cin >> arr[j];
        }
        for (int k = 0; k < col; k++)
        {
            int x = 1 + k + ans;
            if (x == arr[k])
            {
                ans++;
            }
        }
        output[i] = ans;
    }
    for (int i = 0; i < row; i++)
    {
        cout << output[i] << endl;
    }

}