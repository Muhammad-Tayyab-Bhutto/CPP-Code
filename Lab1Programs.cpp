#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string name;
    cout<<"Please enter your name: ";
    cin>>name;
    for (int i=1; i<=name.length(); i++)
    {
        if(i.at()== " ")
        {
            cout<<name;
        }
    }

    return 0;
}