#include <iostream>
#include <string>

using namespace std;

void Network()
{
    string network;
    cin >> network;
    for (int i = 0; i < network.length(); i++)
    {
        if (network.at(i) == '-')
        {
            network.erase(i, network.length());
        }
        if (network == "0300")
        {
            cout << "Mobilink";
        }
        else if (network == "0333")
        {
            cout << "Ufone";
        }
        else if (network == "0315")
        {
            cout << "Zong";
        }
        else if (network == "0345")
        {
            cout << "Telenor";
        }
    }
}
int main()
{
    Network();
    return 0;
}