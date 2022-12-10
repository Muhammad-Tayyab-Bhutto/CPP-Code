#include <iostream>
using namespace std;

class BankDeposit
{
    int principle;
    int years;
    float interest;
    float returnValue;

public:
    BankDeposit() {}
    // Declaring Constructors
    BankDeposit(int p, int y, int r);
    BankDeposit(int p, int y, float r);

    // Declaring Function(Method)
    void display();
};

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principle = p;
    years = y;
    interest = float(r) / 100;
    returnValue = principle;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interest);
    }
}

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    interest = r;
    returnValue = principle;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interest);
    }
}

// Function Initialization
void BankDeposit::display()
{
    cout << endl
         << "Hello! Sir Your Principle amount was : " << principle
         << "\nReturn Value after " << years
         << " years is " << returnValue;
}

int main()
{
    // Objects
    BankDeposit o1, o2, o3;
    int p, y, R;
    float r;
    int choice;
    cout << "Press 1 for Return Value in Float 2 in integer : ";
    cin >> choice;
    if (choice == 1)
    {
        cout << "\nPlease enter the principle value : ";
        cin >> p;
        cout << "\nPlease enter the years : ";
        cin >> y;
        cout << "\nPlease enter the Reurn value : ";
        cin >> r;
        o1 = BankDeposit(p, y, r);
        o1.display();
    }
    else if (choice == 2)
    {
        cout << "\nPlease enter the principle value : ";
        cin >> p;
        cout << "\nPlease enter the years : ";
        cin >> y;
        cout << "\nPlease enter the Reurn value : ";
        cin >> R;
        o1 = BankDeposit(p, y, R);
        o1.display();
    }

    else
    {
        cout << "Sorry Invalid Input";
    }
    // Passing arguments into the objects

    

    return 0;
}