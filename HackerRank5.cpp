#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    int numbers;
    vector <int> v1;
    char leave;

    /*
    the 'peek' function on input streams retrieves the next character from the 
    stream without actually consuming it.
    */
    while(ss){
        if (ss.peek() != ',')
        {
            if (ss >> numbers)
            {
                v1.push_back(numbers);
            }
        }
        else
        {
            ss >> leave;
        }
    }
    return v1;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}