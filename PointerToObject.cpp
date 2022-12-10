// Pointers to object and arrow -> 

#include <iostream>
using namespace std;

class PointerToObject
{
    int real;
    int imaginary;
public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    void displaydata()
    {
        cout<<"The real number is : "<<real<<endl;
        cout<<"The imaginary number is : "<<imaginary<<"i"<<endl;
    }
};

int main()
{
    PointerToObject p1;
    p1.setdata(15, 45);
    p1.displaydata();

    // using pointer to assign values  
    PointerToObject *p2 = &p1;
    (*p2).setdata(4, 52);
    (*p2).displaydata();

    // we can do this same work of pointer using arrow -> as under

    p2 -> setdata(26, 85);
    p2 -> displaydata();

    // We can also create an object of array using new keyword
    PointerToObject *p3 = new PointerToObject[4];
    (*p3).setdata(256, 566);
    p3 -> displaydata();


    return 0;
}
