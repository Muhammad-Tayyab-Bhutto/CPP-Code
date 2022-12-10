#include <iostream>
#include <array>
using namespace std;

int main(){
    int length;
    int highest;
    int numbers;
    int lcm;
    cout << "How many numbers you have to find lcm.. ";
    cin>> length;
    
    for (int i = 0; i < length; i++)
    {
        cin>>numbers;
        if (i == 0)
        {
            highest = numbers;
        }
        if (highest < numbers)
        {
            highest = numbers;
        }

    }
    if (length == 2 && highest % 2 == 0)
    {
        cout << highest;
    }
    else if (length == 2 && highest % 2 != 0)
    {
        cout << highest * length;
    }
    else if (length > 2 && highest % 2 == 0 )
    {
        cout << highest * (length-1);
    }
    else if (length > 2 && highest % 2 != 0)
    {
        cout << highest * (length-1);
    }

    
    return 0;
}