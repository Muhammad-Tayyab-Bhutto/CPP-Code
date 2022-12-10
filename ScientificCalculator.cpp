#include <iostream>
#include <cmath>
using namespace std;

void SimpleCalculator()
{
    float number1;
    float number2;
    char symbl;
    cout<<"Please enter a number: ";
    cin>>number1;
    cout<<"Please enter a number: ";
    cin>>number2;
    cout<<"Please enter a symbol (+,-,/,*,%): ";
    cin>>symbl;
    switch (symbl)
    {
        case '+':
            cout<<"The sum of two numbers is: "<<number1 + number2;
            break;
        case '-':
            cout<<"The sum of two numbers is: "<<number1 - number2;
            break;
        case '*':
            cout<<"The sum of two numbers is: "<<number1 * number2;
            break;
        case '/':
            cout<<"The sum of two numbers is: "<<number1 / number2;
            break;
        case '%':
            cout<<"The sum of two numbers is: "<<number1 % number2;  
            break;   
        default:
            cout<<":<( Invalid.";       
    }
}

void ScientificCalculator()
{
    int op;
    float value;

    cout<<"Please enter 1 for cos: \n";
    cout<<"Please enter 2 for sin: \n";
    cout<<"Please enter 3 for tan: \n";
    cout<<"Please enter 4 for cosec: \n";
    cout<<"Please enter 5 for sec: \n";
    cout<<"Please enter 6 for cot: \n";
    cout<<"Please enter 7 for log: \n";
    cout<<"Please enter 8 for square root: \n";
    cout<<"Please enter 9 for round: \n";
    cout<<"Please enter 10 for square: \n";

    cin>>op;
    cout<<"\nPlease enter the value ";
    cin>>value;
    switch (op)
    {
        case 1:
            cout<<"The value of cos: "<<cos(value);
            break;
        case 2:
            cout<<"The value of sin: "<<sin(value);
            break;
        case 3:
            cout<<"The value of tan: "<<tan(value);
            break;
        case 4:
            cout<<"The value of cosec: "<<asin(value);
            break;
        case 5:
            cout<<"The value of sec: "<<acos(value);
            break;
        case 6:
            cout<<"The value of cot: "<<atan(value);
            break;
        case 7:
            cout<<"The value of log: "<<log(value);
            break;
        case 8:
            cout<<"The square root of number is: "<<sqrt(value);  
            break;   
        case 9:
            cout<<"The rounded value is: "<<round(value);  
            break;   
        case 10:
            cout<<"The square value is: "<<value*value;  
            break;
        default:
            cout<<":<( Invalid.";    
    }


}
int main()
{
    int number;
    cout<<"Please enter 1 for Simple Calculator\n";
    cout<<"Please enter 2 for Scientific Calculator\n";
    cin>>number;
    if (number == 1)
    {
        SimpleCalculator();
    }
    else if (number == 2)
    {
        ScientificCalculator();
    }
    else
    {
        cout<<":<( Invalid.";
    }
    return 0;
}