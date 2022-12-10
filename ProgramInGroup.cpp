#include <iostream>
using namespace std;

int main()
{
    char character;
    cout<<"You can enter any character to check it: ";
    cin>>character;
 
    if(character >= 65 && character <= 90)
    cout<<endl<<"Your entered character is an uppercase character";
    else if(character >= 48 && character <= 57)
    {
        cout<<endl<<"Your entered character is a digit";
    }  
    else if(character >= 97 && character <= 122)
    {
        cout<<endl<<"Your entered character is a lowercase character";
    }  
    else
    {
        cout<<endl<<"You entered a special character"; 
    } 

  
    
    return 0;
}