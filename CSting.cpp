#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char arr[5] = {'a', 'v', 'c', 'd', '\0'};
    char arr2[5] = {'a', 'v', 'c', 'd'};
    cout << arr;
    cout << arr2;
    int index = 0;
    char our_string[2];
    while (our_string[index] != '\0')
    {
        our_string[index] = 'X';
        cout <<our_string[index];
        index++;
    }
    
    return 0;
}