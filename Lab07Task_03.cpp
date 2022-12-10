#include <iostream>
using namespace std;

void Arrays()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    float sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    cout<<"The average is: "<<sum/10;
}
int main()
{
    Arrays();
    return 0;
}