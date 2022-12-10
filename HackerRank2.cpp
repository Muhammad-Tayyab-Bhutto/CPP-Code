#include <iostream>
using namespace std;

void setdata()
{
    int number, rang;
    string numberInEng[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> number;
    cin>>rang;
    for (int i = number; i <= rang; i++)
    {
        if (number < 10)
        {    
            if (i == 1)
            {
                cout << numberInEng[0] << endl;
                // cout<<"one is the English word for the number "<<number;
            }
            else if (i == 2)
            {
                cout << numberInEng[1] << endl;
                // cout<<"two is the English word for the number "<<number;
            }
            else if (i == 3)
            {
                cout << numberInEng[2] << endl;
                // cout<<"three is the English word for the number "<<number;
            }
            else if (i == 4)
            {
                cout << numberInEng[3] << endl;
                // cout<<"four is the English word for the number "<<number;
            }
            else if (i == 5)
            {
                cout << numberInEng[4] << endl;
                // cout<<"five is the English word for the number "<<number;
            }
            else if (i == 6)
            {
                cout << numberInEng[5] << endl;
                // cout<<"six is the English word for the number "<<number;
            }
            else if (i == 7)
            {
                cout << numberInEng[6] << endl;
                // cout<<"seven is the English word for the number "<<number;
            }
            else if (i == 8)
            {
                cout << numberInEng[7] << endl;
                // cout<<"eight is the English word for the number "<<number;
            }
            else if (i == 9)
            {
                cout << numberInEng[8] << endl;
                // cout<<"nine is the English word for the number "<<number;
            }
            if (i > 9)
            {
                if (i % 2 == 0)
                {
                    cout << "even" << endl;
                }
                else
                {
                    cout << "odd"<<endl;
                }
            }
        }
    }
}

int main()
{
    setdata();

    return 0;
}