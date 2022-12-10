#include <iostream>
using namespace std;

int main()
{
    char alphabet;
    cout << "Please enter a character : ";
    cin >> alphabet;
    // if (alphabet != 'a' && alphabet != 'A' && alphabet != 'e' && alphabet != 'E' && alphabet != 'i' 
    // && alphabet != 'I' && alphabet != 'o' && alphabet != 'O' && alphabet != 'u' && alphabet != 'U')
    // {
    //     cout << "You have entered a consonant character";
    // }
    // else
    // {
    //     cout << "You have entered a vowel character";
    // }
    switch (alphabet)
    {
        case 'a':
            cout<<"Vowel";
            break;
        case 'e':
            cout<<"Vowel";
            break;
        case 'i':
            cout<<"Vowel";
            break;
        case 'o':
            cout<<"Vowel";
            break;
        case 'u':
            cout<<"Vowel";
            break;
        case 'A':
            cout<<"Vowel";
            break;
        case 'E':
            cout<<"Vowel";
            break;
        case 'I':
            cout<<"Vowel";
            break;
        case 'O':
            cout<<"Vowel";
            break;
        case 'U':
            cout<<"Vowel";
            break;
        default:
            cout<<"Consonant";    
    }
    return 0;
}