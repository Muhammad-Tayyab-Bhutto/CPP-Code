#include <iostream>
using namespace std;

// Friend Functions 
// A friend funtion that is outside the class but has the ability to access (access modifiers) class members either protected 

/* Properties of friend function
1. Not in the scope of class  (Means it is not a part of class but can just access its private )
2. since it is not in the scope of the class so it can not called by the object of class 
    e-g : c3.setDataBySum(c1, c2); (invalid)
          c3 = setDataBySum(c1, c2); (valid)

3. can be invoke without the help of any object
4. Usually contains the objects as arguments
5. can be declare inside public or private section of  class
6. It cannot access the members directly by their names and need objects_name.member_name to access
    any member

*/
class Complex
{
    int a, b;

    public:

        // Declaring Friend Function (So that we can access class members)
        // Means setDataBySum funtion is allowed to do anythng with this class 
        // but it is not a part of this class
        friend Complex setDataBySum(Complex o1, Complex o2); 
        void setData(int v1, int v2)
        {
            a = v1;
            b = v2;
        }

        // Displaying Data
        void displayData()
        {
            cout<<"Your ComplexNumbers are "<<a<<" + "<<b<<"i"<<endl;
        }
};

// Using Friend Function
Complex setDataBySum(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, c3;

    c1.setData(1, 2);
    c1.displayData();

    c2.setData(3, 4);
    c2.displayData();

    c3=setDataBySum(c1, c2);
    c3.displayData();
    return 0;
}