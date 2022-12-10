/*
Statement
You have been given an array of all zeros Size of array will be N then you
will get Q quaries In each query you will get two numbers L and R and then increase 
all values from index [L, R] by 1. At last print the array.

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n, 0);  // Initializing array with zeros upto n
    int queries;    // Q quaries
    cin >> queries;
    while (queries--)
    {
        int l;
        int r;
        cin >> l >> r;
        arr[l]++;
        if (r+1 < n)    //if r = n so what do (So applied this condition)
        {
            arr[r+1]--;
        }

    }
    // Cumulative Sum
    for (int i = 1; i < n; i++)
    {
        arr[i] += arr[i-1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}
