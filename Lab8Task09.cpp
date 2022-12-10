#include <string>
#include <iostream>
using namespace std;
struct Student {
    string name;
    int id;
    int size;
    int* mark = new int[size];
};
void inputStudent(Student* ptr); //function prototype for getting input
// some other function for printing the details
//*********************** Main Function ************************//
int main () {
    Student stu; // declaring an Student object
    Student* stuPtr = &stu; // defining a pointer for the object
    inputStudent(&stu); // calling function to get input into the object
    // calling the other function to print the details of the object

    return 0;
} // end main

void inputStudent(Student* ptr)
{
    cout << "Enter your name ";
    getline(cin,ptr->name);
    cout << "Enter your id ";
    cin>>ptr->id;
    cout << "How many marks of subjects you have? ";
    cin>>ptr->size;
    for (int i = 0; i < ptr->size; i++)
    {   
        cout << "Enter your Subject " << i+1 << "  ";
        cin>>ptr->mark[i];
    }

    cout << "Name " << ptr->name << endl;
    cout << "id " << ptr->id << endl;
    for (int i = 0; i < ptr->size; i++)
    {
        cout << "Marks in Sunbject " << i+1 << " are "<< ptr->mark[i] << endl;
    }
}