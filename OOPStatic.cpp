#include <iostream>
#include <fstream>
using namespace std;

// class Employee
class Employee
{
    string id;
    static int count;   // Static Data member is accessible for every object of class
    
    public:
    // Method Defination
    void getData()
    {
        cout<<"\nPlease Enter Your Id : ";
        cin>>id;
    }

    void setData()
    {
        cout<<"\nThe Id of Employee : "<<count+1<<" is "<<id;
        count++;
    }

    static void getCount()
    {
        cout<<"\nTotal Number of Employees are : "<<count;
    }
    // public:
    // ofstream hout("OOPsStaticFile.txt");
};
int Employee::count;    // Default value is 0
// If we want to change the value of count variable so we can do this here
// int Employee::count = 100; 
int main()
{
    // tayyab.id = 1;
    // tayyab.count=1; // cannot do this as id and count are private

    // importing file
    ofstream hout("OOPsStaticFile.txt");
    
    Employee tayyab;
    Employee tanveer;
    Employee Muzammil;
    
    tayyab.getData();
    tayyab.setData();

    tanveer.getData();
    tanveer.setData();

    Muzammil.getData();
    Muzammil.setData();

    Employee::getCount();

    return 0;
}