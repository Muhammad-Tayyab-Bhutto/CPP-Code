#include <iostream>
#include <string>

using namespace std;
string my_upper(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
        else
        {
            str[i] = str[i];
        }
    }
    return str;
}
int main()
{
    string str;
    getline(cin, str);
    cout << my_upper(str);
    return 0;
}