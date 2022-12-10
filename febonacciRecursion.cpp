#include <iostream>
using namespace std;
int febonacciRecursion(int number)
{
    if (number == 1 || number == 0)
    {
        return number;
    }
    else
    {
        return (febonacciRecursion(number-1) + febonacciRecursion(number-2));
    }
}
int main(){
    int number, i = 0;
    cin >> number;
    while (i < number)
    {
        cout << febonacciRecursion(i) << " ";
        i++;
    }
    return 0;
}