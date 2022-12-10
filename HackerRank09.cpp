#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int len;
    cin>>len;
    vector <int> v1(len);
    for (int i = 0; i < len; i++)
    {
        cin>>v1[i]; cin.ignore();
    }
    sort(v1.begin(),v1.end());
    for (int i:v1)
    {
        cout << i << " ";
    }
    return 0;
}
