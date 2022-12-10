#include <iostream>
using namespace std;

int main()
{
    char alphabet;
    for (alphabet = 'Z'; alphabet >= 'A'; alphabet--)
    {
        if (alphabet != 'A' && alphabet != 'E' && alphabet != 'I' && alphabet != 'O' 
        && alphabet != 'U')
        {
            cout<<alphabet<<" ";
        }
    }
    return 0;
}