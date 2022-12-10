// Multiple Inheritence: A derived class with multiple base classes
// Syntax
// class Derived: visibility mode(public/private/protected) base1, Visibility mode base2
// {
// class body of base class Derived 
// } 

#include <iostream>
using namespace std;

class Base1{
    protected:
        int number1;
    public:
        void setData1(int num1)
        {
            number1 = num1;
        }
};

class Base2{
    protected:
        int number2;
    public:
        void setData2(int number2)
        {
            this->number2 = number2;
        }
};

class Base3{
    protected:
        int number3;
    public:
        void setData3(int num3)
        {
            number3 = num3;
        }
};
class Derived: public Base1, public Base2, public Base3{
    public:
        void DisplayData()
        {
            cout<<"The value of first Base class is: "<<number1<<endl;
            cout<<"The value of second Base class is: "<<number2<<endl;
            cout<<"The value of third Base class is: "<<number3<<endl;
            cout<<"The sum of base class number is: "<<number1 + number2 + number3<<endl;
        }
};

int main()
{
    Derived d;
    d.setData1(25);
    d.setData2(50);
    d.setData3(25);
    d.DisplayData();

    return 0;
}