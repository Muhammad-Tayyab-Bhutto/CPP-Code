#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    string content;
    int linesCount = 0;
    int words = 0;
    int letters = 0;
    int sentences = 0;
    int i = 0;
    ifstream hin("dummy.txt");
    while (getline(hin, content))
    {
        cout << content ;
        for (int i = 0; i < content.length(); i++)
    {
        if (content.at(i) == ' ')
        {
            words++;
        }
        if (content.at(i) == '.')
        {
            sentences++;
        }
        letters++;
    }
        linesCount++;
    }
    
    cout << endl << "Total Words " << words << endl;
    cout << "Total letters " << letters << endl;
    cout << "Total sentences " << sentences << endl;
    cout << "Total Lines  " << linesCount << endl;

    return 0;
} 

