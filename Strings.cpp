#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Length Function and getline(to get input)
    string name;
    string user_name;
    // string gmail = "@gmail.com";
    string gmail;
    char choice;
    char initial_characters;
    string search_index;
    cout<<"Please enter your name: ";
    getline(cin, name);
    // int len = name.length();
    // if (len >= 13 && len < 1)
    // {
    //     cout<<"\nyour name can not be 12 characters long";
    // }
    // else
    // {
    //     cout<<"\nHello! Sir "<<name<<" Good Morning";
    // }

    // // string.empty() return true if function is empty
    // if (name.empty())
    // {
    //     cout<<"\nPlease enter your name >:)";
    // }
    // else
    // {
    //     cout<<"\nHave a Good Day Sir";
    // }
    // // stringName.claer() (clear everything from input)
    // cout<<"\nDo you want clean your Data (y/n): ";
    // cin>>choice;
    // if (choice == 'y' || choice == 'Y')
    // {
    //     name.clear();
    //     cout<<"\nVerifying...........Data Has Been Cleaned"<<name;

    // }
    // else
    // {
    //     cout<<"\nYour Data is Saved\n";
    // }

    
    // cout<<"\nPlease enter your user_name: ";
    // cin>>user_name;

    // // user_name.appand(gmail) it will add gmail in user name
    // // user_name.append(gmail);
    // user_name.append("@code-smashers.com");
    // cout<<user_name;

    // stringName.at(0) returns value at index
    for (int i = 0; i < name.length(); i++)
    {
        initial_characters = name.at(i);
        if (initial_characters == ' ')
        {
            cout<<name.at(i+1);

        }
    }

    // stringName.substr(0,9) zreturn a portion of program 
    
    cout<<endl<<name.substr(0, 8);

    // stringName.insert(int x(place where we want to insert), stringName2)
    // It inserts a new character before the character indicated by the position pos.
    name.insert(0, "@");
    cout<<endl<<"Reply : "<<name;

    // stringName.find(stringName2); return indexof stringName2
    cout<<endl<<"Please enter a character you want to find its index: ";
    getline(cin,search_index);

    cout<<endl<<"Character Found at the index: "<<name.find(search_index);


    // stringName.erase() we can erase a portion of the string
    name.erase(9, 15);
    cout<<endl<<"After Erasing: "<<name;

    return 0;
}