#include <iostream> 
#include <cstring>

using namespace std;

int main(){
    int age;
    int count = 1;
    char para[500];
    cout << "Enter Para ";
    cin.get(para, 500);
    for (int i = 0; para[i] != '\0'; i++)
    {
        if (para[i] == ' ')
        {
            count++;
        }
    }
    cout << "Words in your para. " << count;

    return 0;
}