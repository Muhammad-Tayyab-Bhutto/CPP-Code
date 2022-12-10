#include <iostream>     // preprogressive directive
using namespace std;    // Global Identifier

int main()              // Main Function
{                       // Entry point
    float initialVelocity, finalVelocuty, acceleration;
    cin>>initialVelocity>>acceleration;
    finalVelocuty = initialVelocity + acceleration;
    cout<<"Final Velocity is : "<<finalVelocuty;
    return 0;
}
