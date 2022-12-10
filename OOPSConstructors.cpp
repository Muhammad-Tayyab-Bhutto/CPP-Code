#include <iostream>

using namespace std;

// Constructor is a special member function with the same name as of the class
// it is used to initialise the objects of its class
// it is autometically invoked (to call) when ever object is created  
// It should be declared in the public section of the class 

class Complex
{
    int a, b;
    
    public:
    // Constructor Declaration
    Complex (void);
    void displayData(void)
    {
        cout<<"The Dafault values of constructors are : "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex::Complex(void) // This is default constructor as it takes no parameters
{
    a = 10;
    b = 20;
    // if we write here it will automatically invoked (call)
    // cout<<"Hello!";
}


int main()
{
    Complex c1,c2,c3;
    c1.displayData();
    c2.displayData();
    c3.displayData();

    return 0;
}