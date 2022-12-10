/*
Data Structure and Algorithms 

Data Structure----> way of arranging data in main memory (ram) in most efficient way

Algorithms----> sequence of step to solve certain problems

Database---> (reaing, writing and retreiving of data from hard drive)

Datawear House--> (management of huge amount of legecy data)

Big Data---> techniques of managing and using of huge ammount of data

Stack --> Holds the memory occupied by functions. it stores the 
    activation records of the functions used in the program and erases them
    as they get executhed
Heap--> using Pointer allocation of address in most efficient way.  
        OR it contains data which is requested by the program as dynamic memory
        using pointers.

Initalise and Uninitialise of data---> segments holds Initalise and Uninitialise 
                                        global variablesrespectively.

*/
#include <iostream>
#include <vector>
using namespace std; 

// Vectors--> Vectors in C++ are sequence containers 
// representing arrays that can change their size during runtime 


void display(vector <int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v1;
    int size, elements;
    cout << "Please enter the size of vector: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Please enter the values to this vector: ";
        cin>>elements;
        v1.push_back(elements);
    }
    // v1.pop_back();  // This will remove last element from last
    display(v1);
    // using of iterator to add elements at any place 
    vector<int> :: iterator iter = v1.begin();
    // v1.insert(iter, 99);    // This will add element at first place
    v1.insert(iter+2, 99);  // This will add element at third place
    display(v1);


}
