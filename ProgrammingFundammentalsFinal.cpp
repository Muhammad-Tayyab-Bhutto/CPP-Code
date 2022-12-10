#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string id;
    string name;
    int age;
    string gender;
    int marks[6];
};

void SearchByName(Student *s)
{
    string name;
    cout << "Please enter name of searching student ";
    getline(cin, name); cin.ignore();
    for (int i = 0; i < 1; i++)
    {
        if (name == s[i].name)
        {
            cout << "Student Name. " << s[i].name;
            cout << "Student ID. " << s[i].id;
            cout << "Student Age. " << s[i].age;
            cout << "Student Gender. " << s[i].gender;
            for (int j = 0; j < 6; j++)
            {
                cout << "Studen Marks in Subject "<< j+1 << " " << s[i].marks[j];
            }
        }
        else 
        {
            cout << "Record not found.";
        }
    }
}
void SearchById(Student *s)
{
    string id;
    cout << "Please enter id of searching student ";
    cin >> id;
    for (int i = 0; i < 5; i++)
    {
        if (s[i].id == id)
        {
            cout << "Student Name. " << s[i].name;
            cout << "Student ID. " << s[i].id;
            cout << "Student Age. " << s[i].age;
            cout << "Student Gender. " << s[i].gender;
            for (int j = 0; j < 6; j++)
            {
                cout << "Studen Marks in Subject "<< j+1 << " " << s[i].marks[j];
            }
        }
        else 
        {
            cout << "Record not found.";
        }
    }
}
void SearchByAge(Student *s)
{
    int age;
    cout << "Please enter age of searching student ";
    cin >> age;
    for (int i = 0; i < 5; i++)
    {
        if (s[i].age == age)
        {
            cout << "Student Name. " << s[i].name;
            cout << "Student ID. " << s[i].id;
            cout << "Student Age. " << s[i].age;
            cout << "Student Gender. " << s[i].gender;
            for (int j = 0; j < 6; j++)
            {
                cout << "Studen Marks in Subject "<< j+1 << " " << s[i].marks[j];
            }
        }
        else 
        {
            cout << "Record not found.";
        }
    }
}
void SearchByGender(Student *s)
{
    string gender;
    cout << "Please enter gender of searching student ";
    getline(cin, gender);
    for (int i = 0; i < 5; i++)
    {
        if (s[i].gender == gender)
        {
            cout << "Student Name. " << s[i].name;
            cout << "Student ID. " << s[i].id;
            cout << "Student Age. " << s[i].age;
            cout << "Student Gender. " << s[i].gender;
            for (int j = 0; j < 6; j++)
            {
                cout << "Studen Marks in Subject "<< j+1 << " " << s[i].marks[j];
            }
        }
        else 
        {
            cout << "Record not found.";
        }
    }
}

void HigherMarks(Student *s,int highestMarks)
{
    for (int i = 0; i < 5; i++)
    {
        if (s[i].marks[i] == highestMarks)
        {
            cout << "Student Name. " << s[i].name;
            cout << "Student ID. " << s[i].id;
            cout << "Student Age. " << s[i].age;
            cout << "Student Gender. " << s[i].gender;
            for (int j = 0; j < 6; j++)
            {
                cout << "Studen Marks in Subject "<< j+1 << " " << s[i].marks[j];
            }
        }        
    }
    
}

int main()
{
    Student s[1];
    int choice;
    int takenMarks[5] = {0};
    int highestMarks = 0;
    for (int i = 0; i < 1; i++)
    {
        
        cout << "Please Enter Id Of " << i + 1 << " ";
        cin >> s[i].id;
        cin.ignore();
        cout << "Please Enter Name Of " << i + 1 << " ";
        getline(cin, s[i].name);
        cout << "Please Enter Age Of " << i + 1 << " ";
        cin >> s[i].age;
        cout << "Please Enter Gender Of " << i + 1 << " ";
        cin >> s[i].gender;
        cin.ignore();
        for (int j = 0; j < 6; j++)
        {
            cout << "Please Enter Marks Of Subject " << j+1 << " ";
            cin >> s[i].marks[j];
            cin.ignore();
            takenMarks[i] += s[i].marks[j];
        }
    }
    for (int i = 0; i < 5; i++)
    { 
        if (takenMarks[i] < takenMarks[i+1])
        {
            highestMarks = takenMarks[i+1];
        }
    }
    cout << "Please enter 1 to search with name. "<< endl;
        cout << "Please enter 2 to search with Id. "<< endl;
        cout << "Please enter 1 to search with Gender. "<< endl;
        cout << "Please enter 1 to search with Age. "<< endl;
        cout << "Please enter 1 to search with Highest Marks. "<< endl;
        cin >> choice;
    if (choice == 1)
    {
        SearchByName(s);
    }
    else if (choice == 2)
    {
        SearchById(s);
    }
    else if (choice == 3)
    {
        SearchByGender(s);
    }
    else if (choice == 4)
    {
        SearchByAge(s);
    }
    else if (choice == 5)
    {
        HigherMarks(s, highestMarks);
    }
    return 0;
}