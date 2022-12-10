// Ambiguity (When two or more base functions have same function name and they are 
// called in inherited class so the compiler will confused which class it has to call
// so we use ambiguity for instance base :: func();)

#include <iostream>
using namespace std;

class Base1{
    public:
        void greetings()
        {
            cout<<"Good Morning :)";
        }
};

class Base2{
    public: 
        void greetings()
        {
            cout<<"Good Afternoon :)";
        }
};

// Using Multiple Inheritence (one derived class from two or more base classes)
class Derived: public Base1, public Base2{
    int a;
    
    public:
        // resolving ambiguity
        // void greetings()
        // {
        //     Base1::greetings();
        // }

        // If it has its own greeting function so it will call it own function
        // because it is present in this class so compiler will not check others
        void greetings()
        {
            cout<<"Good Night :)";
        }
};
int main()
{
    Derived d1;
    d1.greetings();

    return 0;
}


