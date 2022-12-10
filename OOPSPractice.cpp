#include <iostream>
using namespace std;
// Class Of Binary
class Binary
{
    // Note Every Default Veriable in class is private
    string numbers;

    public:
        // Declaring Functions 
        void read(void);
        void chk_bin(void);
        void ones_compliment(void);
        void display(void);
}binary;    // Creating Object (binary is object)

// Function Defination For Taking Input From User and Save it into File Name Binary.txt
void Binary::read()
{
    cout<<"Enter Numbers To Check Where It's Binary or Not ";
    cin>>numbers;
}

// Function Defination For Checking Whether Input is Binary or not
void Binary::chk_bin()
{
    // Using Loop Because It will check The Number From index 0 to length of string 
    for (int i = 0; i < numbers.length(); i++)
    {
        if (numbers.at(i) != '0' && numbers.at(i) != '1')
        {
            cout<<"Sorry Your Enterd Number Is Not Binary\n";
            break;
        }
        else 
        {
            cout<<"Your Enterd Number Is Binary\n";
            break;
        }
    }
}

// Function Defination For Convert One Into Zero And Zero Into One 
void Binary::ones_compliment()
{
    // Using Loop To Check One By One Either One is in string so it will convert it into Zero and zero into one
    for (int i = 0; i < numbers.length(); i++)
    {
        if (numbers.at(i) == '0')
        {
            numbers.at(i) = '1';
        }
        else
        {
            numbers.at(i) = '0';
        }
    }
}

// Function Defination For displaying output 
void Binary::display()
{
    // Displaying output using loop 
    for (int i = 0; i < numbers.length(); i++)
    {
        cout<<numbers.at(i);
    }
}

int main ()
{
    // I have Created binary object in the end of Class
    binary.read();
    binary.chk_bin();
    binary.ones_compliment();
    binary.display();

    return 0;
}