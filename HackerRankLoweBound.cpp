#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, numbers, findindex, quaries;
    cin >> n;
    vector<int> vec(n, 0);
    int arr[2];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers;
        vec[i] += numbers;
    }
    sort(vec.begin(), vec.end());
    cin >> quaries;
    arr[quaries];
    for (int i = 0; i < quaries; i++)
    {
        cin >> findindex;
        vector<int>::iterator low = lower_bound(vec.begin(), vec.end(), findindex);
        if (vec[low - vec.begin()] == findindex)
        {
            cout << "Yes " << (low - vec.begin() + 1) << endl;
        }
        else
        {
            cout << "No " << (low - vec.begin() + 1) << endl;
        }
    }
    return 0;
}