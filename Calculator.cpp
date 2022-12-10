#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    float number1;
    float number2;
    char operatr;
    public:
        void setData(float n1, float n2, char op)
        {
            number1 = n1;
            number2 = n2;
            operatr = op;
        }

        void displayData()
        {
            if (operatr == '+')
            {
                cout<<"The sum of numbers is: "<<number1 + number2;
            }
            else if (operatr == '-')
            {
                cout<<"The difference of numbers is: "<<number1 - number2;
            }
            else if (operatr == '*')
            {
                cout<<"The multiplication of numbers is: "<<number1 * number2;
            }
            else if (operatr == '/')
            {
                cout<<"The division of numbers is: "<<number1 / number2;
            }
            else if (operatr == '%')
            {
                cout<<"The remainder of numbers is: "<<int(number1) % int(number2);
            }
        }
};

class ScientificCalculator
{
    float number1;
    int choice;

    public:
        void setDataSc(float n1, int ch)
        {
            number1 = n1;
            choice = ch;
        }

        void displayDataSc()
        {
            if (choice >= 1 || choice <= 4)
            {
                if (choice == 1)
                {
                    cout<<"The value of cos(a) is :"
                    <<cos(number1);
                }
                else if (choice == 2)
                {
                    cout<<"The value of sin(a) is :"
                    <<sin(number1);
                }
                else if (choice == 3)
                {
                    cout<<"The value of tan(a) is :"
                    <<tan(number1);
                }
                else if (choice == 4)
                {
                    cout<<"The value of log(a) is: "
                    <<log(double(number1));
                }
            }
            else
            {
                cout<<"Please Enter a Valid Input";
            }
        }
};
int main()
{
    SimpleCalculator s1;
    ScientificCalculator sc1;

    float number1;
    float number2;
    int choice;
    int option;
    char operatr;

    cout<<"Hello! Press 1 to use Simple Calculor"<<endl;
    cout<<"Hello! Press 2 to use Scientific Calculor"<<endl;
    cin>>choice;
    if (choice == 1)
    {
        cout<<"Please enter number1: ";
        cin>>number1;
        cout<<"Please enter operator: ";
        cin>>operatr;
        cout<<"Please enter number2: ";
        cin>>number2;

        s1.setData(number1, number2, operatr);
        s1.displayData();
    }
    else if (choice == 2)
    {
        cout<<"Please enter 1 for cos: \n";
        cout<<"Please enter 2 for sin: \n";
        cout<<"Please enter 3 for tan: \n";
        cout<<"Please enter 4 for log: \n";
        cin>>option;
        cout<<"Please enter a value: ";
        cin>>number1;
        
        sc1.setDataSc(number1, option);
        sc1.displayDataSc();
    }
    else
    {
        cout<<"Please enter a Valid Input";
    }

    return 0;
}