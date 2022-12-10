#include <iostream>

using namespace std;

// Defining class 
class Complex
{
    int a, b;
    // Declaring Friend Function 
    friend Complex sumByData(Complex, Complex);
    // Defining Constructors Parameterise
    // Constructors is special member function of class which is created with same name as class
    // Constructor don't has return type 
    // Constructor Overloading is Constructor with same name but different parameters or arguments 
    public:
    // Declaring Constructor to define it out side  class

    Complex(int, int, int);
    Complex()
    {
        a = 9;
        b = 1;
    }
    Complex(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    Complex(int v3)
    {
        a = v3;
        b = 0;
    }

    // Creating Method or function for Displaying numbers
    void displayNumbers()
    {
        cout<<"The numbers are "<<a<<" + "<<b<<"i"<<endl;
    }
    void setData(int v3, int v4)
    {
        a = v3;
        b = v4;
    }
};

// Defining Constructors
Complex::Complex(int x, int y, int z)
{
    a = z;
    b = a;
    y = z;
    x = y;
    cout<<"The value of x is "<<x<<" and y  : "<<y<<" z : "<<z<<endl;
}

// Defining Friend Function
Complex sumByData(Complex o1, Complex o2)
{
    Complex c;
    c.setData((o1.a+o2.a), (o1.b + o2.b));
    return c;
}


int main(){
    Complex c1;
    c1.displayNumbers();
    Complex c2(2, 5);
    c2.displayNumbers();
    Complex c3(34);
    c3.displayNumbers();

    Complex c4(1, 2, 3);
    Complex c5;
    c5 = sumByData(c2, c3);
    c5.displayNumbers();
    return 0;
}