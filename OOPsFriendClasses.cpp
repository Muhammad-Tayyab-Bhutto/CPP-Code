#include <iostream>
using namespace std;

// Declaring class for accessing modifiers of Friend Function
// Friend Function (To access private or protect modifiers of other class)
class Complex;

// Initialisation class for adding and accessing private and protected modifiers
class Sum
{
    public:
        // Initialisation of a function
        int add(int a, int b)
        {
            return (a + b);
        }
        // Declaring class for Friend Function (to access other class modifiers)
        int sumRealNumbrs(Complex o1, Complex o2);
};

int main()
{

    return 0;
}