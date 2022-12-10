#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v1;

    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(8);
    v1.push_back(16);
    v1.push_back(32);

    // Finding element either it is present in array or not using binary_search

    cout << "Find 8 in array: " << binary_search(v1.begin(), v1.end(), 8) << endl;

    // Finding upper_bound in array (means how many maximum number present in array)
    cout << "\nUpper Bound is: " << upper_bound(v1.begin(), v1.end(), 16)-v1.begin() << endl;

    // Finding lower_bound in array (means how many manimum number present in array)
    cout << "\nLower Bound is: " << lower_bound(v1.begin(), v1.end(), 16)-v1.begin() << endl;

    int a = 5;
    int b = 10;
    cout << "\nmax of a and b is: "<< max(a, b) << endl;

    cout << "\nmin of a and b is: "<< min(a, b) << endl;
    swap(a, b);
    cout << "\nThe value of a aftter swap is " << a <<" value of b is "<< b;

    // using reverse fuction for reverse the elements 
    // reverse(variableName.begin(), variableName.end());
    string str = "\nWellCome!\n";
    reverse(str.begin(), str.end());
    cout << "\nThe reversed string is: "<< str;
    // using rotate function for rotate the elements
    rotate(v1.begin(), v1.begin()+1, v1.end());
    cout << "\nElenments after rotating: ";
    for (int i:v1){
        cout<< i << " ";
    }
    // sorting elements using sort funtion (it is combination of heap sort,
    // quick sort and iteration sort algorithms which is called intro sort.)
    sort(v1.begin(), v1.end());
    cout << "\nElenments after sorting are. ";
    for (int i:v1){
        cout << i << " ";
    }
    return 0;
}