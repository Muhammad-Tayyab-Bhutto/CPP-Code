// Member fuction templates 

#include <iostream>
using namespace std;

template <class T1>
class MemberFunctionTemplates
{
    T1 data;
    public:
        void setData(T1 data)
        {
            this->data = data;
        }
        void displayData();
        
};

template <class T1>
void MemberFunctionTemplates<T1>:: displayData()
{
    cout<<"The value of data is: "<<data;
}

void Average(int a, int b)
{
    cout<<"\nThe avaerage of numbers is: "<<(a+b)/2<<endl;
}

template <class T1, class T2>
void Average(T1 a, T2 b)
{
    cout<<"The avaerage in templatised of numbers is: "<<(a+b)/2<<endl;
}

int main(){
    MemberFunctionTemplates <string> mtf1;
    mtf1.setData("Muhammad Tayyab");
    mtf1.displayData();
    Average(5, 15);     // Exact Match takes highest priority so it will call int, int prameterized fuction
    Average(12.5, 12);

    return 0;
}