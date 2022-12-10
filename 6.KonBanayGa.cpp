#include"iostream"
#include"fstream"
#include"conio.h"
#include"windows.h"

void myFunc();

using namespace std;

int main()
{

myFunc();

return 0;

	
}


void myFunc()
{
ifstream myfile2;
string text;
string ans;
myfile2.open("QuestionBank.txt",ios::app);
while(myfile2.good() )// end of file read (if file ends it will return false else it will return true)
{
for(int i=0;i<3;i++)
{

getline(myfile2,text);
cout<<text<<endl;
}
cin>>ans;
getline(myfile2,text);
if(ans==text)
{cout<<"\nNice!\n ";
}
else
cout<<"\nPoor\n";
getch();
system("cls");

}

myfile2.close();


}


