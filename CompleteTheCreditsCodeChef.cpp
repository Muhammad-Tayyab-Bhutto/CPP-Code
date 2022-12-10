#include <iostream>
#include <vector>
using namespace std;

int main(){
    int query, num;
    vector<int> vec;
    cin >> query;
    while (query--){
        cin >> num;
        vec.push_back(num);
    }
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 65)
        {
            cout << "Normal" << endl;
        }
        else if (vec[i] == 58)
        {
            cout << "Normal" << endl;
        }
        else if (vec[i] > 65 || vec[i] > 80)
        {
            cout << "Overload" << endl;
        }
        else if (vec[i] > 23 || vec[i] < 35)
        {
            cout << "Underload" << endl;
        }
    
    }

    return 0;
}