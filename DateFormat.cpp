#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char date[20];
    cin.getline(date, 20);
 
    for (int i = 0; i < strlen(date); i++)
    {
        if (date[i] == ' ')
        {
            date[i] = '/';
        }
    }
    cout << date;
    return 0;
}