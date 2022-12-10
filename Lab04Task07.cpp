#include <iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34 55 89

int main()
{
    int number1 = 0;
    int number2 = 1;
    cout<<number1<<" "<<number2<<" ";
    for (int i = 1; i <= 5; i++)
    {
        number1 += number2;
        number2 += number1;
        cout<<number1<<" "<<number2<<" ";
    }

    return 0;
}
