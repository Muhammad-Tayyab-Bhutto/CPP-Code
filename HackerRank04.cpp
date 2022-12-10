#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int number, queries; // quaries is variable for choice of index while number is variable for
    int length;
    cin >> number >> queries;
    cin.ignore();
    vector<vector<int>> arr(number);
    for (int i = 0; i < number; i++)
    {
        cin >> length;
        arr[i].resize(length);
        for (int j = 0; j < length; j++)
        {
            cin >> arr[i][j];
            cin.ignore();
        }
    }
    for (int k = 0; k < queries; k++)
    {
        int i, j;
        cin >> i >> j;
        cout << arr[i][j] << endl;
        cin.ignore();
    }
    return 0;
}