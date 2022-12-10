#include <iostream>
using namespace std;


int main()
{
    // int num;
    // cout<<"Please Eenter a number : ";
    // cin>>num;
    // for (int i =1; i <= 10; i++)
    // {
    //     // cout<<i<<" x "<<" 5 "<<" = "<<i*num<<endl;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for (int i = 1; i <= 10; i++)
    // {
    //     for (int i = 1; i <= 10; i++)
    // }
    // int i;
    // for (i =1; i<= 10; i++)
    // {
    //     cout<<i+i<<endl;
    // }
    // for (int i = 1; i<= 10; i++)
    // {
    //     if (i%2 == 0)
    //     {
    //         cout<<i<<" is Even"<<endl;
    //     }
    //     else{
    //         cout<<i<<" is odd"<<endl;
    //     }
    // }
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<i*i<<endl;
    // }

    // Printing infinite loop
    // bool op = true;

    // while (op)
    // {
    //     cout<<"Hello";
    // }

    // Febonacci Series
    int number1 = 0, number2 = 1, nextterm = 0, number;
    cin>>number;
    // cout<<t1<<","<<t2;
    while(nextterm <= number)
    {
        cout<<nextterm<<" ";
        number1 = number2;
        number2 = nextterm;
        nextterm = number1 + number2;
    }
    // for (nextterm =0 ;nextterm <= number; )
    // {
    //     cout<<nextterm<<" ";
    //     number1 = number2;
    //     number2 = nextterm;
    //     nextterm = number1 + number2;
    // }

    // Sum Of Numbers
    // int sum = 0;
    // for (int i =1; i <= 10; i++)
    // {
    //     sum = i+sum;
    // }
    // cout<<sum;
    


    
    // for (int i = 0; i<=10; i++)
    // {
    //     cout<<i<<endl<<i+i;
    //     // for (int j = 1; j<=i; i++)
    //     // {
    //     //     cout<<j+i<<endl;
    //     // }
    // }
    return 0;
}