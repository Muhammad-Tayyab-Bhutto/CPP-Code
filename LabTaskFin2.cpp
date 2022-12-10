#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Data
{
    string name[5]; 
    int number[5];
    int score[5];  
}d;

int main()
{
    int tpoints = 0;
    int mostPoints = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Please enter your name. ";
        getline(cin, d.name[i]); 
        cout << "Please enter your number. ";
        cin >> d.number[i];
        cout << "Please enter your score. ";
        cin >> d.score[i];
        cin.ignore();
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Name of " << i+1 <<" player is. "<<d.name[i] << endl;
        cout << "Number of " << i+1 <<" player is. "<<d.number[i] << endl;
        cout << "Points of " << i+1 <<" player is. "<<d.score[i] << endl;
        tpoints += d.score[i]; 
        if (d.score[i] < d.score[i+1])
        {
            mostPoints = d.score[i+1];
        }
    }
    cout << "The total Points " << tpoints << endl;
    cout << "Most Score of player is. " <<  mostPoints;
    return 0;
}