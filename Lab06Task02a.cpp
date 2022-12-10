#include <iostream>
using namespace std;

void AverageOfStudents()
{
    int numberOfStudents;
    int numOfTestScores;
    float testScore;
    float average = 0.0;
    cout<<"This program will averages score.\n";
    cout<<"For how many students do you have scores? ";
    cin>>numberOfStudents;
    cout<<"For how many test scores does each student have? ";
    cin>>numOfTestScores;
    for (int i = 1; i<= numberOfStudents; i++)
    {
        for (int j = 1; j <= numOfTestScores; j++)
        {
            cout<<"Enter score "<<j<<" for student. "<<i<<" ";
            cin>>testScore;
            average += testScore;
        }
        cout<<"The average score the for student "<<i<<" is "<<average/numOfTestScores<<endl;
        average = 0;
    }
}
int main()
{
    AverageOfStudents();

    return 0;
}