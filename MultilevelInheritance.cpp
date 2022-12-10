// Multilevel Inheritace // More than two or two Derived Classes with one base class
#include <iostream>
#include <cstring>
using namespace std;

class Student
{
protected:
    string id;
    string studentName;

public:
    void setdata(string, string);
};

// funtion Defination
void Student::setdata(string inputId, string studentName)
{
    id = inputId;
    studentName = studentName;
}

class Exam : public Student
{
protected:
    float english, pre_calculus, pak_study, islamiat, ict;

public:
    void setdata(float, float, float, float, float, float);
};

void Exam::setdata(float english, float pre_calculus, float pak_study,
                   float islamiat, float ict, float programming)
{
    english = english;
    pre_calculus = pre_calculus;
    pak_study = pak_study;
    islamiat = islamiat;
    ict = ict;
    programming = programming;
}

class Marks : public Exam
{
protected:
    float obt_Marks, percentage;

public:
    void setdata(float, float);
    void displaydata();
};

void Marks::setdata(float obt_Marks, float percentage)
{
    obt_Marks = obt_Marks;
    percentage = percentage;
}
void Marks::displaydata()
{
    cout << "Hello Mr: " << studentName << endl;
    cout << "Id: " << endl;
    cout << "Your Total Marks: " << obt_Marks << endl;
    cout << "Your Percentage: " << percentage << endl;
}
int main()
{
    string id;
    string studentName;
    float english, pre_calculus, pak_study, islamiat, ict, programming;
    int obt_Marks;
    float percentage;
    int totalMarks = 500;
    Student s1;
    Exam e1;
    Marks m1;
    
    cout<<"Please Enter your Name: ";
    getline(cin,studentName);
    cout<<"Please Enter your ID: ";
    cin>>id;
    s1.setdata(id, studentName);

    cout << "Please Enter your ICT Marks: ";
    cin>>ict;
    cout << "Please Enter your Pak-Study Marks: ";
    cin>>pak_study;
    cout << "Please Enter your English Marks: ";
    cin>>english;
    cout << "Please Enter your islamiat Marks: ";
    cin>>islamiat;
    cout << "Please Enter your Pre-Calculus Marks: ";
    cin>>pre_calculus;
    cout << "Please Enter your Programming Marks: ";
    cin>>programming;
    
    e1.setdata(english, pre_calculus, pak_study, islamiat, ict, programming);

    obt_Marks = english+ pre_calculus+ pak_study+ islamiat+ ict+ programming;
    percentage = obt_Marks*100/totalMarks;
    m1.setdata(totalMarks, percentage);
    m1.displaydata();


    return 0;
}
