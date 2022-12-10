#include <iostream>

using namespace std;
class Real;
class Complex;
class Real
{
    int a, b;
    public:
    // using friend function so I am Declaring it here which will return the sum of two numbers
    friend Complex displayData(Real, Complex );

    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    
};

class Complex
{
    int a1, b1;

    public:
    // Declaring Friend Function
    friend Complex displayData(Real, Complex );
    void setData(int v1, int v2)
    {
        a1 = v1;
        b1 = v2;
    }

};

Complex displayData(Real o1, Complex o2)
{
    Complex c3;
    c3.setData((o1.a+ o2.a1),(o1.b+o2.b1));
    cout<<"The Sum of numbers : ";
    c3;
    return c3;
}

int main()
{
    Real r1, o;
    Complex c1;

    r1.setData(1, 5);
    c1.setData(5, 6);
    displayData(r1, c1);

    
    return 0;
}