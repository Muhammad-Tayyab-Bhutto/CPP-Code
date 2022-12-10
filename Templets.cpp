// Classes are the templets for object class is templates
// but for class templet is template
// Class templates can be with multiple parameters (1, 2, more)

#include <iostream>
using namespace std;

template <class T1 = int, class T2 = int>   // we initialize it because we want varible in obj according to us
class MyClass
{
    T1 data1;
    T2 data2;
    public:
        MyClass(T1 a, T2 b)
        {
            data1 = a;
            data2 = b;
        }
        void displayData()
        {
            cout<<"The value of data1 is: "<<data1<<endl;
            cout<<"The value of data2 is: "<<data2<<endl;
        }
};

int main()
{
    // declaring T1, T2 here in which variable I want T1 and T2;
    MyClass<int, float> obj(4, 55.2);
    obj.displayData();
    MyClass<string, float> obj1("Muhammad Tayyab", 55.2);
    obj1.displayData();
    MyClass<string, char> obj2("Muhammad Tayyab", 'B');
    obj2.displayData();
    MyClass<> obj3(5, 55);
    obj3.displayData();
}
