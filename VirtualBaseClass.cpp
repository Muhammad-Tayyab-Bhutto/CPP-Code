// Class A => Derived B
// Class A => Derived C
// Class B => Derived D
// Class C => Derived D
// Protected : Protected is only used for inheritence 
// Public : Public is accessable every where
// Private : Private is only accessable in its class

#include <iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    
    public:
        void setdata(int rn)
        {
            roll_number = rn;
        }    
};

class Subjects: public Student
{
    protected:
        int math, physics;

    public:
        void setdata(void)
        {
            int mt;
            int phy;
            math = mt;
            physics = phy;
            cout<<"Please enter your Maths Marks: ";
            cin>>mt;
            cout<<"Please enter your Physics Marks: ";
            cin>>phy;
        }
};

class Sports: public Student
{
    protected:
        int pt;
    public:
        void setdata(void)
        {
            int ptm;
            pt = ptm;
            cout<<"Please enter your PT: ";
            cin>>ptm;
        }

};

class Result:public Subjects,public Sports
{
    int total;
    public:
        void displayTotal()
        {
            total = math + physics + pt;
            cout<<"Your Total Marks are: "<<total;
        }
};
int main()
{
    Student s1;
    Subjects sb1;
    Sports sp1;
    Result r1;
    s1.setdata(44565);
    sb1.setdata();
    sp1.setdata();
    r1.displayTotal();

    return 0;
}