#include <iostream>
using namespace std;

/*
Case1:
class B: public A{
    // Order of execution of constructor ==> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor ==> first B() then C() then A()
};

Case3:
class A: public B,virtual public C{
    // Order of execution of constructor ==> first virtual C() then B() then A()
};

*/

class Base1{
    int data1;
    public:
        // Initializing Constructors
        Base1(int a)
        {
            data1 = a;
            cout<<"\nBase1 class constructor called.";
        }
        void displayBase1Data()
        {
            cout<<"\nThe value of data1 is: "<<data1;
        }
};

class Base2{
    int data2;
    public:
        // Initializing Constructors
        Base2(int a)
        {
            data2 = a;
            cout<<"\nBase2 class constructor called.";
        }
        void displayBase2Data()
        {
            cout<<"\nThe value of data2 is: "<<data2;
        }
};

class Derived: public Base1, public Base2{
    int derivedData1, derivedData2;
    public:
    Derived(int a, int b, int c, int d): Base1(a), Base2(b){
        derivedData1 = c;
        derivedData2 = d;
        cout<<"\nDerived class constructor is called.";
    }
    void displayDerivedData()
    {
        cout<<"\nThe value of derivedData1 is: "<<derivedData1;
        cout<<"\nThe value of derivedData2 is: "<<derivedData2;

    }

};
int main()
{
    Derived d1(1, 2, 4, 5);
    d1.displayBase1Data();
    d1.displayBase2Data();

    return 0;
}