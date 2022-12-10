#include <iostream>
using namespace std;

void setdata()
{
    int number;
    string numberInEng[9] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    cin>>number;
    if (number == 1)
    {
        cout<<numberInEng[0]<<endl;
        // cout<<"one is the English word for the number "<<number;
    }
    else if (number == 2)
    {
        cout<<numberInEng[1]<<endl;
        // cout<<"two is the English word for the number "<<number;
    }
    else if (number == 3)
    {
        cout<<numberInEng[2]<<endl;
        // cout<<"three is the English word for the number "<<number;
    }
    else if (number == 4)
    {
        cout<<numberInEng[3]<<endl;
        // cout<<"four is the English word for the number "<<number;
    }
    else if (number == 5)
    {
        cout<<numberInEng[4]<<endl;
        // cout<<"five is the English word for the number "<<number;
    }
    else if (number == 6)
    {
        cout<<numberInEng[5]<<endl;
        // cout<<"six is the English word for the number "<<number;
    }
    else if (number == 7)
    {
        cout<<numberInEng[6]<<endl;
        // cout<<"seven is the English word for the number "<<number;
    }
    else if (number == 8)
    {
        cout<<numberInEng[7]<<endl;
        // cout<<"eight is the English word for the number "<<number;
    }
    else if (number == 9)
    {
        cout<<numberInEng[8]<<endl;
        // cout<<"nine is the English word for the number "<<number;
    }
    else 
    {
        cout<<"Greater than 9"<<endl;
        // cout<<"n = "<<number<<" is greater than 9, so we print Greater than 9.";
    }

}


int main()
{
    setdata();

    return 0;
}