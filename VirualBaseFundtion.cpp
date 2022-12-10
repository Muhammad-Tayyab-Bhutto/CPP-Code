#include <iostream>
using namespace std;

class Base{
    public:
        int var_base;
        // void display()
        virtual void display()  // because I want to call derived class fuction
        {
            cout<<"The value of virtual base class is: "<<var_base<<endl;
        }
};

class Derived: public Base
{
    public:
        int var_derived;
        void display()
        {
            cout<<"The value of virtual base class is: "<<var_base<<endl;
            cout<<"The value of virtual base class is: "<<var_derived<<endl;
        }
};


int main()
{
    Base *base_class_ptr;
    Base obj_base;
    Derived *derived_class_ptr;
    Derived obj_derived;
    base_class_ptr = &obj_derived;

    // Here I gave the adress of Derived class to an base class object 
    // but it will call the base class fuctions for eg.
    // if I initialize base_class_ptr->var_base = 89; and
    // if I initialize base_class_ptr->var_derived = 56; it will give an error

    // base_class_ptr->var_derived = 56; // Error even we gave adress of derived class
    base_class_ptr->var_base = 85;
    base_class_ptr->display();

    // if want call derived class fuction so we should have to define base class
    // function as virtual but whole work will be done on run time
    derived_class_ptr->var_derived = 120;

    base_class_ptr->display();   

    return 0;
}