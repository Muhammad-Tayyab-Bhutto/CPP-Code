#include <iostream>
using namespace std;

int main()
{
    string color1, color2;
    cout << "Enter first color: ";
    cin >> color1;
    cout << "Enter second color: ";
    cin >> color2;
    if (color1 == "red" && color2 == "blue")
    {
        cout << "You get Purple";
    }
    else if (color1 == "red" && color2 == "yellow")
    {
        cout << "You get orange";
    }
    else if (color1 == "blue" && color2 == "yellow")
    {
        cout << "you get green";
    }

    return 0;
}