#include <iostream>     // preprogressive directive
using namespace std;    // Global Identifier

int main()              // Main Function
{                       // Entry point
    // Declaring Variables 
    float distance, time, speed;
    cout<<"Enter The Value Of Distance : ";
    cin>>distance;
    cout<<"Enter The Value Of Time : ";
    cin>>time;
    speed = distance/time;
    cout<<"Speed = "<<speed<<"m/s";
    return 0;
}