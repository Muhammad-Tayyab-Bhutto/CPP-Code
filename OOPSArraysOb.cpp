#include <iostream>

using namespace std;
// Passing  Object as Function Argument
class Complex
{
    int a;
    int b;

    public:
        void setData (int v1, int v2)       // Pass arguments to get input from main (Values  can not assigned to function directly)
        {
            a = v1;
            b = v2;
        }

        // Giving Objects as arguments
        void setDataBySum(Complex o1, Complex o2)
        {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void displayNumbers()
        {
            cout<<"Your Complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};


int main()
{
    
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.displayNumbers();
    
    c2.setData(3, 4);
    c2.displayNumbers();

    c3.setDataBySum(c1, c2);
    c3.displayNumbers();

    
    return 0;
}