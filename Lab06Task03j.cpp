#include <iostream>
using namespace std;

void PrintTable(int number, int rang)
{
    for (int i = 1; i <= rang; i++)
    {
    cout<<i<<" x "<<number<<" = "<<i*number<<endl;
    }

}

int main()
{
    int number, rang;
    cout<<"Enter any number to print its table: ";
    cin>>number;
    cout<<"Enter the final range value: ";
    cin>>rang;
    PrintTable(number, rang);

    return 0;
}
