// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () 
{
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Writing this to a file.\n";
  myfile << "Second line Writing this to a file.\n";
  myfile<<" Third line\n";
  myfile.close();
  return 0;
}
