#include "iostream"
#include "fstream"
#include"windows.h"
#include"conio.h"
using namespace std;
int main()
{
	ofstream myfile;
    myfile.open("test.txt",ios::app);
	string text;
	getline(cin,text);

myfile<<text<<endl;



return 0;

    
}

