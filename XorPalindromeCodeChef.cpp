#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cin >> row;
    while (row--)
    {
        int col, y = 0, n = 0;
        string num;
        cin >> col;
        cin >> num;

        for (int j = 0; j < col; j++)
        {
            if (num[j] == '1')
            {
                y++;
            }
            else
            {
                n++;
            }
        }
        if (col % 2 == 0)
        {
            if (y == n)
            {
                cout << "YES" << endl;
            }
            else if (y % 2 == 0 && n % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}