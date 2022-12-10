#include <iostream>
using namespace std;

void CheckNumbers(float obtainedMarks, float totalMarks)
{
    cout<<"Your Percentage is: "<<obtainedMarks*100/totalMarks<<"%";
    
}

int main()
{
    float obtainedMarks, totalMarks;
    cout<<"Please enter obtainedMarks: ";
    cin>>obtainedMarks;
    cout<<"Please enter totalMarks: ";
    cin>>totalMarks;
    CheckNumbers(obtainedMarks, totalMarks);
    return 0;
}
