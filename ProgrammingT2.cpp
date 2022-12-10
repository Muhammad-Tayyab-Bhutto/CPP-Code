#include <iostream>
// #include <cstring>
using namespace std;
void setdata()
{
    int studentsId[10] = {1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010};
    string studentsNames[10] = {"MuhammadTayyab", "AliRaza", "RajaKumar",
    "AliHussain", "Shahzaman", "Khalil", "Tanveer", "M.Muzammil",
    "Faizan", "WasiurRehman"};

    int searchById, choice;
    string searchByName;
    cout << "Press 1 for search by id."<<endl;
    cout << "Press 2 for search by name."<<endl;
    cout << "Enter your choice. ";
    cin>>choice;

    bool isPresent = false;
    if (choice == 1)
    {
        cout<<"Enter your id to search. ";
        cin>>searchById;
        for (int i = 0; i < 10; i++)
        {
            if (studentsId[i] == searchById)
            {

                cout<<"You are in our record with the name "<<studentsNames[i]<<" id :"<<studentsId[i] ;
                isPresent = true;
            }
        }

        if(!isPresent) cout<<"loading.......Record not found :<(";
    }

    else if (choice == 2)
    {
        cout<<"Enter your name to search. ";
        cin>>searchByName;
        // getline(cin, searchByName);
        for (int i = 0; i < 10; i++)
        {
            if (studentsNames[i] == searchByName)
            {
                cout<<"You are enrolled  "<<studentsNames[i]<<" id :"<<studentsId[i] ;
                isPresent = true;
            }
        }

        if(!isPresent) cout <<"loading.......Record not found :<(";
    }
    
    else
    {
        cout << ":<( Invalid";
    }
}

int main()
{
    setdata();

    return 0;
}
