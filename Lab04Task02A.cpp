#include <iostream>

using namespace std;

int main()
{
    int number1, number2;
    char op;
    cout<<"Please enter first number : ";
    cin>>number1;
    cout<<"Please enter second number : ";
    cin>>number2;
    cout<<"Please enter an operator +, -, *, /, % : ";
    cin>>op;
    switch(op)
    {
        case '+':
            cout<<"Addition of your entered numbers is "<<number1+number2;
            break;
        case '-':
            cout<<"Subtraction of your entered numbers is "<<number1-number2;
            break;
        case '*':
            cout<<"Multiplication of your entered numbers is "<<number1*number2;
            break;
        case '/':
            cout<<"Division of your entered numbers is "<<float(number1/number2);
            break;
        case '%':
            cout<<"Remainder of your entered numbers is "<<number1%number2;
            break;
        default:
            cout<<"Please enter a valid input";                    
    }

    return 0;
}