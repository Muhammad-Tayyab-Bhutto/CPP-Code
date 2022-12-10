#include <iostream>
using namespace std;

/*
We use initialization lists to initialize class objects.
Syntax for Initialize lists in constructor:
    Constructor (arguments or parameters-list) : initialization section
    {
        assignment + other code;
    }
    e.g
    
    class Test
    {
        int a;
        int b;
        Test (int i, int j) : a(i), b(j){ body of constructor}   
        // Value of a is i and b is j here
    };
*/


// Initialization list to assign values member class veriables
class Test
{
    int a;
    int b;
    public:
    // assigning value a and b using initializing lists method
    // Test (int i, int j): a(i), b(j)
    // Test (int i, int j): a(b+ i), b(j)
    // it is possible because value of a is given a first
    // Test (int i, int j): b(a+j),a(i)
    // its not possible if we have initalize b first and then a
    Test (int i, int j): a(i), b(5+j)
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }  
};
int main()
{
    Test t1(78, 89);

    return 0;
}