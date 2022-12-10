#include <iostream>
using namespace std;

void Palindrome()
{
    string str;
    cin >> str;
    bool flage = true;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != str[str.length()-i-1])
        {
            flage = false;    
        }
    }
    if (flage)
    {
        cout << "word is  palindrome";
    }
    else 
    {
        cout << "Not a  palindrome";
    }
    
}

int main()
{
    Palindrome();
    return 0;
}