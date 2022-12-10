// Filing I/o to a file
// fstrean  // (we use it for reading and writing)
// ifstream // Derived from fstream (we will use it for reading from file)
// ofstream // Derived from fstream (We will use it for write in file)
// hout (it is used  for write something in file)
// hin (this is used for input taking in file)
#include <iostream>
#include <fstream>      // we will use both ifstream and ofstream
#include <cstring>

using namespace std;

int main()
{
    // importing file by using hout 
    ofstream hout ("fileForFiling.txt");

    // Declaring Variable
    string name;
    cout<<"Please Enter your name : ";
    getline(cin, name);

    //storing output in the file
    hout<<"My name is : "<<name;

    // Closing the file hout.close (it tells that I am not working with file)
    hout.close();

    // importing file to see out what is in it (reading from file)
    ifstream hin("fileForFiling.txt");

    // Declaring Variable to store the out of file in it
    string content;

    hin>>content;   // it means store everything of file in this veriable 

    // cout<<"This will print just one word of file : "<<content<<endl;

    // using of getline as an output (to see all output)
    getline(hin, content);

    cout<<"This will print all of file : "<<content;
    

    // Closing the file
    hin.close();

    return 0;
}