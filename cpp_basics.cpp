#include <iostream>  // Preprogressive Directive
using namespace std; // Global Identifier

// Creating Classes
class Employee
{
    public:
    string name;
    int id;
    
    // Creating Constructor
    Employee(string name, int id, int pw)
    {
        this->name = name;
        this->id = id;
        this->password = pw;
    } 
    void printDetails()
    {
        cout<<"Employee Name Is : "<<this->name<<" \nEmployee id is : "<<this->id;
    }
    void employeePassword()
    {
        cout<<"\nYour Password is : "<<this->password;
    }

    private:
        int password;

};

// Inheritance
class programmer : public Employee
{
    public:
        int salary;
        class Developper
        {
            int c;
        };
};


// Creating Funtion
int add(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main()       // Start Of main Funtion
{                // Program Entry Point
    // int num;     // Declare veriable
    // num = 56;    // initailizing veriable
    // string name; // Declaring veriable
    // // name = "Muhammad Tayyab";       //Initializing Veriable
    // cin >> name; // Getting Values
    // // Using If Else If and Else Conditions
    // if (name == "MuhammadTayyab") //If Condition
    // {                              //Entry Point Of Condition
    //     cout << "Hello! " << name << endl
    //          << "Your Room Is" << num;
    // }                           // End Point Of Loop
    // else if (name == "Tanveer") //Else If Condition
    // {                           //Entry Point Of Condition
    //     cout << "Hello! " << name << endl
    //         << "Your Room Is " << num;
    // } // End Point Of Condition
    // else{
    //     cout<<"Hello! There Is No Room For You Sir";
    // }

    // Using switch
    // int a;
    // int b; 
    // cin>>a>>b;
    // char op;
    // cin>>op;
    // switch (op)
    // {
    //     case '+':
    //     cout<<"The Sum Of Your Given Numbers Is : "<<a+b;
    //     break;
    //     case '-':
    //     cout<<"The Sum Of Your Given Numbers Is : "<<a-b;
    //     break;
    //     case '%':
    //     cout<<"The Sum Of Your Given Numbers Is : "<<a%b;
    //     break;
    //     case '*':
    //     cout<<"The Sum Of Your Given Numbers Is : "<<a*b;
    //     break;
    //     default:
    //     cout<<"The Sum Of Your Given Numbers Is : "<<a/b;
    //     break;
    // }

    // // Declaring Veriable
    // int n;
    // // Initializing value To Veriable
    // n = 5;
    // int i = 0;
    // // Using Loop
    // while (i < 10){
    //     cout <<"The Value Of i Is : "<<i<<endl;
    //     i++;
    // }

    // Inialializing Array
    // int arr[6];
    // int i = 0;      // Initializing Veriable For Loop
    // while (i < 6)
    // {
    //     cout<<"Enter Your Maths Marks : "<<endl;
    //     cin>>arr[i];
    //     i++;
    // }
    // int num1;
    // int num2;
    // cin>>num1>>num2;
    // cout<<"The Sum Of values "<<add(num1, num2);

    // Declaring Two D Array Having Two Rows three Columns
    // int arr[2][3] = {
    //                 {1,2,3},
    //                 {4,5,6} 
    //                 };

    // // Using Loops For Two Two D Array 
    // for (int i = 0; i < 2; i ++){
    //     // Using Nested Loop For Columns
    //     for (int j = 0; j < 3; j++){
    //         cout<<"The Values At "<<i<<" "<<j<<" "<<arr[i][j]<<endl;
    //     }
    // }

    Employee tayyab("Muhammad Tayyab", 29, 14527);
    tayyab.printDetails();
    tayyab.employeePassword();
    // Employ.name = MuhammadTayyab;
    // Employee.id = 2000;
    // We can access private methods and veraiables out side the class so we will access them to create an other seprate method
    

    return 0;
}
