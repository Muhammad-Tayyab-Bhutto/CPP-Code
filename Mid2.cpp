#include <iostream>
using namespace std;

int main(){
    char choice[10];
    int rdays = 0;
    int sdays = 0;
    int cdays = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a character to check whether day is either Rainy, Cloudy or Sunny.. ";
        cin>>choice[i];
        if (choice[i] == 'R')
        {
            cout << "The Day is Rainy. "<<endl;
            rdays++;
        }
        else if (choice[i] == 'S')
        {
            cout << "The Day is Sunny. "<<endl;
            sdays++;
        }
        else if (choice[i] == 'C')
        {
            cout << "The Day is Cloudy. "<<endl;
            cdays++;
        }

    }
    cout << "The days were Rainy.. " <<rdays <<endl;
    cout << "The days were Cloudy.. "<<cdays <<endl;
    cout << "The days were Sunny.. " <<sdays <<endl;
    if (rdays > sdays && rdays > cdays)
    {
        cout << "Maximum number of days Rainy"; 
    }
    else if (sdays > cdays && sdays > rdays)
    {
        cout << "Maximum number of days Sunny"; 
    }
    else if (cdays > sdays && cdays > rdays)
    {
        cout << "Maximum number of days Cloudy"; 
    }
        
    return 0;
}