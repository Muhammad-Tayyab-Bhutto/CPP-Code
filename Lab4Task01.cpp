#include <iostream>
using namespace std;

int main()
{
    char usr_input;
    string departement;
    cin>>usr_input;
    if (usr_input == 'y' || usr_input == 'Y')
    {
        cout<<"What is your Departement\n";
        cout<<"CS\n";
        cout<<"EE\n";
        cout<<"BBA\n";
        cout<<"EDU\n";
        cin>>departement;
        if (departement == "CS" || departement == "cs")
        {
            cout<<"Go to block 01";
        }
        else if (departement == "EE" || departement == "ee")
        {
            cout<<"Go to block 02";
        }
        else if (departement == "BBA" || departement == "bba")
        {
            cout<<"Go to block 03";
        }
        else if (departement == "EDU" || departement == "edu")
        {
            cout<<"Go to knowledge center";
        }
    }
    else if (usr_input == 'n' || usr_input == 'N')
    {
        cout<<"Sorry You are not allowed to enter";
    }
    else
    {
        cout<<"Please Enter a valid input";
    }


    return 0;
}