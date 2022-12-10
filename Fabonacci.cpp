#include <iostream>
using namespace std;

// Declaring class beecause I want to access some access modeifier using friend Function 
class Y;

// Initialisation of Function
class X
{
    int number1;
    public:
        // Initialisation of Methods or Functions 
        void setData(int value)
        {
            number1 = value;
        }
        void displayData()
        {
            cout<<number1<<endl;
        }

        // Declaring friend Function
        friend void swapData(X &, Y &);

};
// Initialisation of class
class Y{
    int number2;
    // We can Declare friend functions either in private or in public
    friend void swapData(X &, Y &);
    public:
        // Initialisation of Methods or Functions
        void setData(int value)
        {
            number2 = value;
        }

        void displayData()
        {
            cout<<number2<<endl;
        }
};

void swapData(X &o1, Y &o2)
{
    int tempValue;
    tempValue = o1.number1; // temp : 5
    o1.number1 = o2.number2; //7
    o2.number2 = tempValue; 
}

int main()
{
    X x;
    Y y;
    x.setData(5);
    y.setData(7);
    swapData(x, y);
    cout<<"The value after swaping data: ";
    x.displayData();
    y.displayData();

    return 0;
}