// A copy constructor is type of constructor that creates a copy of an other object
// We also can use copy constructor if no copy constructor is writen in the program 
#include <iostream>
using namespace std;

class Number
{
    int num;
    public:
    Number(){}
    Number(int a)
    {
        num = a;
    }

    // Creatin ga copy constructor
    Number(Number &obj)
    {
        num = obj.num;
        cout<<"This is copy constructor: "<<num<<endl;
    }
    void displaydata(){
        cout<<"The value of num is : "<<num<<endl;
    }
};
int main()
{
    Number x, y, z(10);
    x.displaydata();
    y.displaydata();
    z.displaydata();
    // z3 = z3(x);
    // Creating a copy constructor Which is given by compiler default
    Number z2 = z;
    Number z3(z);


    return 0;
}