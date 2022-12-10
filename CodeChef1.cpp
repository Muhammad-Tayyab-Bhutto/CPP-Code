/*
Write a single integer to output, denoting how many integers ti are divisible by k.

Example
Input:
7 3
1
51
966369
7
9
999996
11

Output:
4
*/
// #include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main(){
    int n, k, t;
    int ans = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> t;
        if (t % k == 0)
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}