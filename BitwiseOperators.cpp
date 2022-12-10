#include <iostream> 
using namespace std;

struct Info{
    int id[2];
    string name;
};

// int Sum(int a, int b){
    
//     int c = a + b;

//     return c;
// }
struct Employee
{
    string name;
    int age;
    int salary;
    void Iden(){
        int a = 5;
        int b = 10;
        int c = a + b;
        cin>>a;
        cout<<"The sum is "<<c;
    }
};


int main(){
    // Employee e1;
    // e1.Iden();
    int a,b;
    cin>>a; 
    cin >> b;



    // Info i1;
    // char str[20];

    // cin.get(str, 20);
    // string name;
    // for (int i = 0; i < 3; i++)
    // {
    //     cin>>i1.id[i];
    // }
    // int id[2] = {1, 5};
    // string name[2] = {"Muhammad", "Tayyab"};

    // int a = 7;
    // int b = 12;
    // int c = a|b;
    // int c = a&b;
    // int c = a^b;
    // cout<<c;

    // int id[2][2];
    // string name[2][2];

    // for (int row = 0; row < 2; row++){
    //     for (int colums = 0; colums < 2; colums++){
    //         cout<<"Enter your Name: ";
    //         cin>>name[row][colums];
    //         cout<<"Enter your id: ";
    //         cin>>id[row][colums];
    //     }
    // }

    // for (int row = 0; row < 2; row++){
    //     for (int colums = 0; colums < 2; colums++){
    //         cout<<"Name: "<<name[row][colums]<<" id: "<<id[row][colums]<<endl;
    //     }
    // }

    // while (1){
    //     cout<<"Enter your Name: ";
    //     cin>>name[1];
    //     cout<<"Enter your id: ";
    //     cin>>id[1];
        
    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     cout<<"Enter your Name: ";
    //     cin>>name[i];
    //     cout<<"Enter your id: ";
    //     cin>>id[i];
    // }
    // for (int i = 0; i < 2; i++){
    //     cout<<"Name: "<<name[i]<<" id: "<<id[i]<<endl;
    // }
    
    // Info i1, i2;
    // i1.id = 45;
    // i1.name = "Ahssan";
    // cout<<i1.id<<" "<<i1.name<<endl;

    // i2.id = 89;
    // i2.name = "Ali";
    // cout<<i2.id<<" "<<i2.name;

    // int a;
    // int b;
    // cout<<"Enter the value of number ";     cin>>a;
    // cout<<"Enter the value of number ";     cin>>b;

    // // Sum();
    // int d = Sum(a, b);
    // cout<<"Enter the sum of numbers is "<< d<<endl;
    // cout<<"Enter the difference of numbers is "<< a - b<<endl;
    // int a = Sum();
    // cout<<"Enter the sum of numbers is"<< a; 

    // int a = (~45);      // formula -(N + 1)
    // cout<<a;
    return 0;
}