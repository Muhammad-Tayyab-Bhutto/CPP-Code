#include <iostream>
#include <string>
using namespace std;

int main(){
    string date;
    cin>>date;
    for (int i = 0; i < date.length(); i++)
    {
        if (date.at(i) == '/')
        {     
            date.erase(i, 1);
        }
    }
    cout << date.substr(0, 2) << endl;
    cout << date.substr(2, 2) << endl;
    cout << date.substr(4, 7) << endl;
    
    return 0;
}