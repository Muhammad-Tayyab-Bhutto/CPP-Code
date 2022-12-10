#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    cout<<"Calculating Bill Of Electricity\n";
    cout<<"===============================\n";
    string name;
    string customer_id;
    float consumed_unit;
    cout<<"Please enter your name : ";
    getline(cin, name);
    cout<<"Please enter Customer Id : ";
    cin>>customer_id;
    cout<<"Please enter Consumed Unit : ";
    cin>>consumed_unit;
    if (consumed_unit < 0)
    {
        cout<<"Please enter a valid input\n";
    }
    else if (consumed_unit > 0 && consumed_unit < 200)
    {
        /* code */
        cout<<"Hello Mr. "<<name<<endl
        <<"Id : \t"<<customer_id<<endl
        <<"Your Electricity Bill is : "<<consumed_unit*5;
    }
    else if (consumed_unit > 199 && consumed_unit < 400)
    {
        /* code */
        cout<<"Hello Mr. "<<name<<endl
        <<"Id :   \t"<<customer_id<<endl
        <<"Your Electricity Bill is : "<<consumed_unit*10;
    }
    else if (consumed_unit > 399 && consumed_unit < 600)
    {
        /* code */
        cout<<"Hello Mr. "<<name<<endl<<"Id :   \t"
        <<customer_id<<endl<<"Your Electricity Bill is : "
        <<consumed_unit*15;
    }
    else
    {
        /* code */
        cout<<"Hello Mr. "<<name<<endl<<"Id :   \t"
        <<customer_id<<endl<<"Your Electricity Bill is : "
        <<consumed_unit*20;
    }




    return 0;

}