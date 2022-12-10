#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string user_name;
    cin >> user_name;
    char *email = new char[user_name.length()];
    for (int i = 0; i <= user_name.length(); i++)
    {
        email[i] = user_name[i];
    }
    
    cout << strcat(email,"@iba-suk.edu.pk");
    return 0;
}