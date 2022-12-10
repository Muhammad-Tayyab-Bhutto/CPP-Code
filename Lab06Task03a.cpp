#include <iostream>
using namespace std;

// Declaring Varibles 
float num1;
float num2;

// Function for to setdata
void setData(){
    cout<<"Please enter a number: ";
    cin>>num1;
    cout<<"Please enter a number: ";
    cin>>num2;
}

void Addition(){
    cout<<"The sum of two numbers is: "<<num1+num2<<endl;
}

void Substraction(){
    cout<<"The differnce between two numbers is: "<<num1-num2<<endl;
}

void Multiplication(){
    cout<<"The multiplication of two numbers is: "<<num1*num2<<endl;
}

void Division(){
    cout<<"The division of two numbers is: "<<num1/num2<<endl;
}

void Remainder(){
    cout<<"The Remainder of two numbers is: "<<int(num1)%int(num2)<<endl;
}

int main()
{
    setData();
    Addition();
    Substraction();
    Multiplication();
    Division();
    Remainder();


    return 0;
}