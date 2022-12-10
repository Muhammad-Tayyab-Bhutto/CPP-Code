#include <iostream>
using namespace std;


int main()
{
    int choice = 1;
    char quite_op;
    do
    {
        cout<<"Do you want to continue (y/n): ";
        cin>>quite_op;
        choice++;
    } while (choice < 4 || quite_op == 'y' || quite_op == 'Y');
    

    return 0;
}

