#include <iostream>     // Preprogressive Directive
#include <string>       // Library For String Function
using namespace std;

// Creating class 
class Library
{
    public:
        string book_name;
        char *book_availble[4] = {"PS", "Islamiat", "Physics", "Chemistry"};
        int days;
        Library(string book_name, int days )
        {
            this-> book_name = book_name;
            // this-> book_availble[4] = book_availble[4];
            for (int i =0; i<4; i++)
            {
                if (book_name == this->book_availble[i])
                {
                    cout<<"This Book Is Availble";
                    break;
                }
                else
                {
                    cout<<"This Book Is not Availble";
                }
            }
        }

};

int main()
{
    Library lib("PS", 15); 
    string name;
    getline(cin, name);
    cout<<name;
    return 0;
}
