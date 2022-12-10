#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a; // first string
    string b; // second string
    string c; // third string
    cin >> a;
    cin >> b;
    c = a + b;           // cocatenate a and c and storing into c
    int len1 = a.size(); // size of string
    int len2 = b.size(); // size of string
    cout << len1 << " " << len2 << endl;
    cout << c << endl;
    swap(a[0], b[0]); // swapping first index of a and b
    cout << a << " " << b;
    return 0;
}