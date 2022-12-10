#include <iostream>
using namespace std;

int main()
{
    int testCases, number, a;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        cin >> number;
        int even = 0, odd = 0;
        for (int i = 0; i < number * 2; i++)
        {
            cin >> a;
            a & 1 ? odd++ : even++; // Checking number is odd then increase odd else increament even
        }
        if (even % 2 == 0 && odd % 2 == 0)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}