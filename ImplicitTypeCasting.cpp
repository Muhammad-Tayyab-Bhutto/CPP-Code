// Implicit Type casting=====> Any data type converts automatically
// Explicit Type casting=====> Any data type converts by user.

#include <iostream>
using namespace std;


int main()
{
    // Implicit Type casting
    float a;
    float b;
    cin>>a>>b;
    float c = float(a)/float(b);
    cout<<c;

    return 0;
}

