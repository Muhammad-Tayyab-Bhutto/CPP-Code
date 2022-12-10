#include <iostream>
#include <string>

using namespace std;
string my_lower(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 92)
        {
            str[i] = str[i] + 32;
        }
    }
    return str;
}
int main()
{
    string str;
    getline(cin, str);
    cout << my_lower(str);
    return 0;
}