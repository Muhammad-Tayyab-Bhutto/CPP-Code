#include "iostream"
#include "fstream"
#include"windows.h"
#include"conio.h"
using namespace std;
int main()
{
ofstream myfile;
myfile.open("test2.txt",ios::app);
	
ifstream myfile2;
string text;
myfile2.open("test.txt",ios::app);
while(myfile2.good() )// end of file read (if file ends it will return false else it will return true)
{

getline(myfile2,text);
myfile<<text<<endl;
}
myfile.close();
myfile2.close();



return 0;

    
}

