// list: It is doubly linked list: It has two point one at begining second at the end 

#include <iostream> 
#include <list>
using namespace std;

int main(){
    list<int> l1;
    list<int> l3(5, 21);    // this will print five times 21

    l1.push_back(20);
    l1.push_front(21);

    list <int> l2(l1);

    // Swapping l1 into l2
    cout << "The elements in array l3 are: ";
    for (int i:l3)
    {
        cout<<i<<"  ";
    }

    cout << "\nThe elements in array l3 are: ";
    for (int i:l2)
    {
        cout<<i<<"  ";
    }

    cout << "\nThe elements in l1 array are: ";
    for (int i:l1)
    {
        cout<<i<<"  ";
    }

    l1.erase(l1.begin());
    cout<<"\nThe elements in array after erasing are: ";
    for(int i:l1){
        cout<<i<<" ";
    }
    return 0;
}