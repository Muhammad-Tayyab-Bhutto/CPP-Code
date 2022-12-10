#include <iostream>     // Preprogressive Directive
using namespace std;    // Global Identifier

// Structure 
// struct Employee
// {
//     string name;
//     int age;
//     int salary;
// };

// if we use type def so do not need to write struct in main function
typedef struct Employee
{
    string name;
    int age;
    int salary;
    void Iden(){
        int a = 5;
        int b = 10;
        int c = a + b;
    }
};

// Union (We can use only one time at a time like money either in dolar, rupee or euro)
union money
{
    int Dollar;
    float rupee;
    int Euro;
};

int main()
{
    // Employee one
    // struct Employee MuhammadTayyab;
    // // Employee two
    // struct Employee Tanveer;

    Employee MuhammadTayyab;
    Employee Tanveer;

    MuhammadTayyab.name = "Muhammad Tayyab";
    MuhammadTayyab.age = 18;
    MuhammadTayyab.salary = 100000000;
    MuhammmadTayyab.De
    Tanveer.name = "Tanveer";
    Tanveer.age = 20;
    Tanveer.salary = 10000000;

    cout<<"Data Of First Employee"<<endl;
    cout<<"=========================="<<endl;
    cout<<"Name Of Employee Is : "<<MuhammadTayyab.name<<endl;
    cout<<"Age Of Employee Is : "<<MuhammadTayyab.age<<endl;
    cout<<"Salary Of Employee Is : "<<MuhammadTayyab.salary<<endl;

    cout<<"Data Of Second Employee"<<endl;
    cout<<"=========================="<<endl;
    cout<<"Name Of Employee Is : "<<Tanveer.name<<endl;
    cout<<"Age Of Employee Is : "<<Tanveer.age<<endl;
    cout<<"Salary Of Employee Is : "<<Tanveer.salary<<endl;

    // Union
    union money mny;
    mny.Dollar = 45;
    cout<<"I want to pay in dolar "<<mny.Dollar<<endl;


    // Enum (it return value in whole number or the index of value)
    enum Meal{Breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<Breakfast<<m1;
    return 0;
}
