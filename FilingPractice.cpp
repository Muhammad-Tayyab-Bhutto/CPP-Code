#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream hout ("FillingPractice.txt");
    string name = "Name Muhammad Tayyab ";
    getline(cin, name);
    hout << name;

    hout.close();
    ifstream hin("FillingPractice.txt");
    getline(hin, name);
    hin.close();

    return 0;
}