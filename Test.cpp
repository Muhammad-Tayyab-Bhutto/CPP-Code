#include <iostream>
using namespace std;

int fuction(int &x, int y = 10)
{
    if (x % y == 0)
    {
        return ++x;
    }
    else 
    {
        return y--;
    }
}
int main()
{
    int p = 20, q = 23;
    q = fuction(p, q);
    cout<<p<<q;
    p = fuction(q);

    return 0;
}