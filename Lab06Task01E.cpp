#include <iostream>
using namespace std;

int main()
{
    int num = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout<<j<<" ";
            // num++;
        }
        cout<<endl;
    }

    return 0;
}