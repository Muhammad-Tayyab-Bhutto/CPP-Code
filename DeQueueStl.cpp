// Deletion(from font or back) and addition(from font or back) at same time 

#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(2);
    d.push_front(1);
    d.push_front(3);
    d.push_front(5);
    cout<<"The elements in array d are. ";
    for (int i : d){
        cout<<i<<" ";
    }

    d.pop_back();
    cout<<"\nThe elements in array d are after pop_back are. ";
    for (int i : d){
        cout<<i<<" ";
    }

    d.pop_front();
    cout<<"\nThe elements in array d are after pop_front are. ";
    for (int i : d){
        cout<<i<<" ";
    }

    cout<<"\nThe element at second index in array d is. "<<d.at(1);

    // checking array is empty or not
    cout<<"\nThe array is empty or not. "<<d.empty();

    // Deleting elements from array
    d.erase(d.begin(), d.begin()+1);
    cout<<"\nThe Size array after Deleting first element is. "<<d.size();

    cout<<"\nThe array after Deleting first element is. ";
    for (int i:d){
        cout<<i<<" ";
    }
    
    return 0;
}   