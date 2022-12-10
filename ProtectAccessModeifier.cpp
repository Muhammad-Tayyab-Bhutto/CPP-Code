// Protected Access Modifiers 
#include <iostream>
using namespace std;

// Initialisation Of Base Class 
class Base
{
    // By default variables in class
    protected:
        int a;
    private:
        int b;
    public:
        int c;
};
/*
Protect Access Modeifiers
                            Public Dderivation  Private Dervation   Protected Derivation
1. Private Access Modifiers Not Inherited        Not Inherited      Not Inherited          
2. Protected Access Modifiers protected          private            protected
3. Public Access Modifiers    public             private            protected

*/
// Initialisation of Derived class
class Derived: protected Base
{
    
};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a;  it will not work b/c it is protected in both Base and Derived class    
    return 0;
}