#include <iostream>
#include <cstring>
#include <fstream> // for using both ifstream and ofstream
using namespace std;

// Class For ATM
class ATM
{
    long int sixteenDigitCode;
    long int count = 1;
    string sixteenDigitCodeStr =to_string(sixteenDigitCode);

public:
    void setSixteenDigitCode()
    {
        for (int i = 0; i < 1; i++)
        {
            cin >> sixteenDigitCode;
        }

        sixteenDigitCodeStr = to_string(sixteenDigitCode);

        for (int i = 1; i < sixteenDigitCodeStr.length(); i++)
        {
            count++;
        }

        if (count > 16 || count < 16)
        {
            cout<<"Please enter a valid input ";
        }
        else
        {
            cout<<"Please Enter Your Digit Pin";
        }

        for (int i = 0; i < 4; i++)
        {
            if (i%4 == 0)
            {
                sixteenDigitCodeStr.at(4) = '-';
            }
            
        }
    }
    

};
int main()
{
    ofstream hout("atmInfo.txt");
    ifstream hin("atmInfo.txt");
    ATM SDC;
    SDC.setSixteenDigitCode();
    // SDC.displaySixteenDigitCode();
    return 0;
}