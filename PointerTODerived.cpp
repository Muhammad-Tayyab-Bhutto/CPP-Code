#include <iostream>
using namespace std;

class Base
{
    public:
        int var_base;
        void display()
        {
            cout<<"The value of var_base in base class is: "<<var_base<<endl;
        }
};

class Derived: public Base{
    public:
        int var_derived;
        void display()
        {
            cout<<"The value of var_base in derived class is: "<<var_base<<endl;
            cout<<"The value of var_derived in derived class is: "<<var_derived<<endl;
        }
};
int main()
{
    
    Base *base_class_ptr;
    Base obj_base;
    Derived obj_derived;
    Derived *derived_class_ptr;

    base_class_ptr = &obj_derived;
    base_class_ptr->var_base = 55;  // assigning value to var_base;
    base_class_ptr->display();

    base_class_ptr = &obj_base;
    base_class_ptr->var_base = 77;
    base_class_ptr->display();

    derived_class_ptr = &obj_derived;
    derived_class_ptr->var_base = 88;
    derived_class_ptr->var_derived = 99;
    derived_class_ptr->display();


    return 0;
}