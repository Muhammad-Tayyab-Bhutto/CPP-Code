#include <iostream>
using namespace std;

class Employee
{
    string id;
    int salary_per_hour = 5;
    int hours;

    public:
        void setData(void);
        void getData(void);
        void setError(void);
};

void Employee::setData()
{
    cout<<"Please enter your id : \n";
    cin>>id;
    cout<<"Please enter your working hours : \n";
    cin>>hours;
}

void Employee::setError()
{
    if (id == id)
    {
        cout<<"Please enter a valid input id can not be same ";
        exit(0);
    }
}
void Employee::getData()
{
    cout<<"Hello MR. id "<<id<<" your salary is "<<hours*salary_per_hour<<endl;
}
int main()
{
    Employee codesmashrs[10];
    for (int i = 0; i < 10; i++)
    {
        codesmashrs[i].setData();
        codesmashrs[i].getData();
    }
    
    for (int i = 0; i < 10; i++)
    {
        /* code */
        codesmashrs[i].setError();
    }
    

    return 0;
}