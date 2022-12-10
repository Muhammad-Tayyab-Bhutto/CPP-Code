#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    cout<<"Hello";
    cin>>num2>>num1;
    char op;
    cin>>op;

    //=============================if else====================================
    if (num1 == 0) 
    {
        cout << "true";
    }
    else
        cout << "false";
    switch (op)
    {
    case '+':
        cout << num2 + num1 << endl;
        break;
    case '-':
        cout << num2 - num1 << endl;
        break;
    case '/':
        cout << num2 - num1 << endl;
        break;
    case '*':
        cout << num2 - num1 << endl;
        break;
    default:
        cout<< num2/num1;
        break;    
    }
    auto c = 7;
    auto d = 4.025;
    

    // =============================Loops======================================
    // int num1;
    // cin>>num1;
    // while (num1 < 30){
    //     cout<<"This is Number "<<num1<<endl;
    // }

    return 0;
}