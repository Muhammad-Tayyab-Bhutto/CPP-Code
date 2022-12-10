// StringStream is used to type cast string into number or number into string
// << (used for storing variable into it)
// >> (used for conversion (type Casting))
#include <iostream>
#include <sstream>

using namespace std;

int main(){

    // Type casting integer into string
    int number;
    stringstream s1;
    string typeCastString;
    cout<< "Please enter a number.. ";
    cin >> number;
    cin.ignore();
    s1 << number;
    s1 >> typeCastString;
    cout << "The value of typeCastNumber is " << typeCastString <<endl;

    // Type casting string into integer
    s1 << typeCastString;
    s1 >> number;
    cout << "The value of typeCastString is " << number <<endl;

}