#include <bits/stdc++.h>

using namespace std;

void tokenize(string s, string del = " ")
{
	int start = 0;
	int end = s.find(del);
    // importing file 
    ofstream hout("fileForFiling.txt");
	while (end != -1) {
		cout << s.substr(start, end - start) << endl;
        hout << s.substr(start, end - start) << endl;
		start = end + del.size();
		end = s.find(del, start);
	}
    cout<< s.substr(start, end - start);

}
int main(int argc, char const* argv[])
{
    // importing file for reading 
    ifstream hin("fileForFiling.txt");
	// Takes C++ string with any separator
	string a = "Hi$%!do$%!you$%!do$%!";
	tokenize(a, "$%!");
	cout << endl;


	return 0;
}
