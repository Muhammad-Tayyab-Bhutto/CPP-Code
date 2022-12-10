#include <iostream>
using namespace std;
// Function Declaration
// returnType FunctionName(parameters/arguments);
// void Greet(int a, int b);

string Wish(void);
string Wish(string name);
int main()
{
    // for(int i =1; i<=10; i++)
    // {
    // Greet(i, 5);
    // }
    cout<<Wish();
    string name;
    cin>>name;
    Wish(name);
    Wish("Happy");
    
    

    return 0;
}

// Function Defination
// returnType FunctionName(parameters/arguments){
// ========================fUNCTION WORK===========
// }

// void Greet(int a ,int b)
// {
//     // int a = 9;
//     // int b = 5;
//     int sum = a + b;
//     cout<<sum<<endl;
    
//     // return sum;
// }

string Wish(void)
{
    string name = "Happyy";
    return name;
}

string Wish(string name)
{
    cout<<name<<" Have Good Day";
    return name;
}