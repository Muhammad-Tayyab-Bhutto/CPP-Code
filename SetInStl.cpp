// Set: all elements will be unique in set and will be sorted 
// we can insert elements using insert();
#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s1;

    // Inserting elements using insert 
    s1.insert(5);
    s1.insert(5);
    s1.insert(3);
    s1.insert(1);
    s1.insert(10);
    s1.insert(5);
    s1.insert(31);
    s1.insert(15);
    s1.insert(11);
    cout<<"The elements in array before erase are: ";
    for (int i:s1){
        cout<<i << " ";
    }


    s1.erase(s1.begin());
    cout<<"\nThe elements in array after erase are: ";
    for (int i:s1){
        cout<<i << " ";
    }

    set<int>:: iterator it = s1.begin();
    it++;
    s1.erase(it);
    cout<<"\nThe elements in array after erase 2nd element are: ";
    for (int i:s1){
        cout<<i << " ";
    }

    // checking elements either either it is present in arrray or not
    cout << "\n 5 is present in array or not: " << s1.count(5);

    // using find which will shows the index of element if present by using iterator
    set<int>:: iterator iter = s1.find(11);
    cout << "\n5 is present in array on index: ";
    for (auto it = iter; iter != s1.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}