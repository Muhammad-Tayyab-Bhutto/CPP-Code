#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int employeeNumber;
    string name; 
    float basicSalary;
    int houseAllowance;
    int medicalAllowance; 
    float tax;
    float grossPay; 
    float netSalary;

    void emplSalary()
    {
        cout << "Please enter employee name: ";
        getline(cin, name);
        cout << "Please enter employee number: ";   
        cin >> employeeNumber;
        cout << "Please enter Basic Salary: ";
        cin >> basicSalary;
        houseAllowance = (basicSalary * 10)/100;
        medicalAllowance = (basicSalary * 5)/100; 
        tax = (basicSalary * 4)/100;
        grossPay = basicSalary + houseAllowance + medicalAllowance; 
        netSalary = grossPay - tax;
    }

    void display()
    {
        cout << "\n_______________________________________________________________\n";
        cout << "Employee Salary Details\n";
        cout << "_______________________________________________________________\n";
        cout << "Employee Number: " << employeeNumber << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Basic Salary: " << basicSalary << endl;
        cout << "Employee House Allowance: " << houseAllowance << endl;
        cout << "Employee Madical Allowance: " << medicalAllowance << endl;
        cout << "Employee Gross Pay: " << grossPay << endl;
        cout << "Employee Tax Deduction: " << tax << endl;
        cout << "Employee Net Salary: " << netSalary << endl;
        cout << "_______________________________________________________________\n";
    }
    
}e1;
int main(){
    e1.emplSalary();
    e1.display();
    return 0;
}