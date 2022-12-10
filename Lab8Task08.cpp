#include <string>
#include <iostream>
using namespace std;
struct Student {
    string name;
    int id;
    int mark[3];
};
void inputStudent(Student* ptr); //function prototype for getting input
// some other function for printing the details
//*********************** Main Function ************************//
void displayStudent(Student* ptr);

int main () {
    Student stu; // declaring an Student object
    Student* stuPtr = &stu; // defining a pointer for the object
    inputStudent(&stu); // calling function to get input into the object
    // calling the other function to print the details of the object
    displayStudent(&stu);
    return 0;
} // end main

void inputStudent(Student* ptr)
{
    cout << "Enter your name ";
    getline(cin,ptr->name);
    cout << "Enter your id ";
    cin>>ptr->id;
    cout << "Enter your Subject 1 ";
    cin>>ptr->mark[0];
    cout << "Enter your Subject 2 ";
    cin>>ptr->mark[1];
    cout << "Enter your Subject 3 ";
    cin>>ptr->mark[2];

}
void displayStudent(Student* display)
{
    cout << "Name " << display->name << endl;
    cout << "id " << display->id << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Marks in Sunbject " << i+1 << " are "<< display->mark[i] << endl;
    }
}