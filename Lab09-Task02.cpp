#include <iostream>
#include <string>
using namespace std;

int WordsCount(string str)
{
    int count = 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == ' ')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string str;
    getline(cin, str);
    cout << WordsCount(str);
    return 0;
}