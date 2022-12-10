#include <iostream>
using namespace std;

void PrintTable(int number)
{
    for (int i = 1; i <= 10; i++)
    {
    cout<<i<<" x "<<number<<" = "<<i*number<<endl;
    }

}

int main()
{
    int number;
    cout<<"Enter any number to print its table: ";
    cin>>number;
    PrintTable(number);

    return 0;
}
