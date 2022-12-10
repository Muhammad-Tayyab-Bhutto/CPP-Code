#include <iostream>     //preprogressive directive
using namespace std;    // Global Identifier

int main()              // main fuction
{                       // Entry Point
    // Declaring Veriable
    int sub1, sub2, sub3, sub4, sub5, totalMarks = 500, obtainedMarks;
    float percentage;
    cout<<" Enter the marks of first subject : ";
    cin>>sub1;
    cout<<" Enter the marks of second subject : ";
    cin>>sub2;
    cout<<" Enter the marks of third subject : ";
    cin>>sub3;
    cout<<" Enter the marks of fourth subject : ";
    cin>>sub4;
    cout<<" Enter the marks of fifth subject : ";
    cin>>sub5;

    obtainedMarks = sub1+sub2+sub3+sub4+sub5;
    percentage = (obtainedMarks*100) /totalMarks;
    cout<<"Obtained Marks   : "<<obtainedMarks<<endl;
    cout<<"Percentage Marks : "<<percentage<<"%";



    return 0;
}