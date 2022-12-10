// Map: fata will store in key and its value in ordered form
//  -> One key will point only one value 
//  -> Two differnt keys can point one value


#include <iostream>
#include <map>

using namespace std;

int main(){
    // map<keydatatype, valuedatatype> name;
    map<int, string> m1;
    m1[1] = "Muhammad";
    m1[2] = "Tayyab";
    m1[3] = "Bhutto";
    m1[5] = "Bhutto";
    m1[4] = "Tanveer";
    // Second Method to insert elements in map using insert
    m1.insert({7, "Muzammil"});
    for(auto i:m1){
        cout<<i.first<<" "<<i.second<<endl;
    }

    // finding elements if present or not
    cout << "\nChecking 3 in array is present or not: " << m1.count(3) << endl;

    // erasing 7 from array using erase
    m1.erase(7);
    cout << "\nElements after erasing 7: "<<endl;
    for(auto i:m1){
        cout<<i.first<<" "<<i.second<<endl;
    }

    // find the index or iterator of elements using find
    map<int, string> :: iterator it = m1.find(3);
    cout << "\nIterator of 3 is: \n";
    for (auto i=it; i!=m1.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }


    return 0;
}