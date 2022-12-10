#include <iostream>
using namespace std;

void Bio(int id, string name){
    int race;
    cout<<"Enter the race int mm 400 or 200";
    cin>>race;
    if (race == 400)
    {
        cout<<"Hello Your record has been saved with name"<<name<<" id "<<id<<" race "<<race
        <<"race wil be on monday";
    }
    else if (race == 200)
    {
        cout<<"Hello Your record has been saved with name"<<name<<" id "<<id<<" race "<<race
        <<"race wil be on monday";
    }
    else {
        cout<<"Invalid Choice";
    }
}

int main()
{
    int id;
    string name;
    Bio(id, name);
    return 0;
}