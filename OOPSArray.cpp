#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

// Class For Shop
class DataTypes
{
    int num;
    long lng;
    char chr;
    float flt;
    double dbl;
    public:
        // Method For reading (Input) 
        void read(void);
        void display(void);
}dataTypes;

// Function Defination
void DataTypes::read()
{
    cout<<"Please enter a whole number ";
    cin>>num;
    cout<<"Please enter a large whole numbers ";
    cin>>lng;
    cout<<"Please enter a char ";
    cin>>chr;
    cout<<"Please enter a real number ";
    cin>>flt;
    cout<<"Please enter a real number ";
    cin>>dbl;
}

void DataTypes::display()
{
    cout<<num<<endl;
    cout<<lng<<endl;
    cout<<chr<<endl;
    cout<<endl<<endl; 
    cout<<fixed<<setprecision(3)<<flt<<endl;
    cout<<fixed<<setprecision(9)<<dbl<<endl;
}

int main()
{
    dataTypes.read();
    dataTypes.display();
    return 0;
}