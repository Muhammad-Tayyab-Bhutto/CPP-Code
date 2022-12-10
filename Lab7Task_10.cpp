#include <iostream>
using namespace std;


void StudentsRecord()
{
    int numberOfStudents;
    cout<<"Enter the number of students: ";
    cin>>numberOfStudents;
    string *nameOfStudents = new string[numberOfStudents];
    // string nameOfSubjects[4] = {"Programming", "Math", "English", "P.S"};
    int *marksOfSubject1 = new int[numberOfStudents];
    int *marksOfSubject2 = new int[numberOfStudents];
    int *marksOfSubject3 = new int[numberOfStudents]; 
    int *marksOfSubject4 = new int[numberOfStudents];
    int *obtainedMarks = new int[numberOfStudents];
    float *percentage = new float[numberOfStudents];
    char grade;
    int totalMarks = 400;
    
    for (int i = 0; i < numberOfStudents; i++)
    {
        cout<<"Plaese enter the name of student "<<i+1<<": ";
        cin>>nameOfStudents[i];
        cout<<"Plaese enter the marks of programming "<<i+1<<": ";
        cin>>marksOfSubject1[i];
        cout<<"Plaese enter the marks of Math "<<i+1<<": ";
        cin>>marksOfSubject2[i];
        cout<<"Plaese enter the marks of english "<<i+1<<": ";
        cin>>marksOfSubject3[i];
        cout<<"Plaese enter the marks of ps "<<i+1<<": ";
        cin>>marksOfSubject4[i];
        obtainedMarks[i] = marksOfSubject1[i]+marksOfSubject2[i]+marksOfSubject3[i]+marksOfSubject4[i];
        percentage[i] = (obtainedMarks[i]*100)/totalMarks;
        if (percentage[i] <= 100 && percentage[i] >= 80)
        {
            grade = 'A';
        }
        else if (percentage[i] < 80 && percentage[i] >= 70)
        {
            grade = 'B';
        }
        else if (percentage[i] < 70 && percentage[i] >= 60)
        {
            grade = 'C';
        }
        else if (percentage[i] < 60)
        {
            grade = 'F';
        }
    }

    cout<<"============================================================================================="
    <<"=========================\n";    
    cout<<"Name         Programming       Math        English           P.S        Obtained Marks"
            <<"         "<<"Percentage       Grade"<<endl;
    cout<<"============================================================================================="
    "=========================\n";
    for (int i = 0; i < numberOfStudents; i++)
    {
        cout<<nameOfStudents[i]<<"         "<<marksOfSubject1[i]<<"              "<<marksOfSubject2[i]<<"             "
        <<marksOfSubject3[i]<<"                 "<<marksOfSubject4[i]<<"               "<<obtainedMarks[i]<<"             "
        <<totalMarks<<"           "<<percentage[i]<<"             "<<grade<<endl;
    }
}
int main()
{
    StudentsRecord();
    return 0;
}