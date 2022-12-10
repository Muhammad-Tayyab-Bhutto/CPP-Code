#include <iostream>
using namespace std;

int main()
{
    string salsa[3] = {"Mild", "Medium", "Sweet"};
    int quantity[3];
    int highest, lowest;
    int sum = 0;
    for (int i = 0; i < 3; i++){
        cin >> quantity[i];
        sum += quantity[i];
        if (i == 0)
        {
            highest = quantity[i];
            lowest = quantity[i];
        }
        if (highest < quantity[i])
        {
            highest = quantity[i];
        }
        else if (lowest > quantity[i])
        {
            lowest = quantity[i];
        }
    }
    cout << "Total solded " << sum<<endl;
    cout << "Highest solded " << highest<<endl;
    cout << "Lowest solded " << lowest<<endl;
    

    return 0;
}