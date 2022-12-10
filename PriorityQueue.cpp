// Priority Queue: A queue whose queue is whose first element remain always greatest or lowest(max heap) (min heap)
// Max Heap: when we pop element it will always pop greatest element 
// Min Heap: when we pop element it will always pop lowest element

#include <iostream>
#include <queue>

using namespace std;

int main(){
    // Max Heap
    priority_queue<int> maxim;      // when we create like this it means it is max heap
    
    // Min Heap
    priority_queue<int, vector<int>, greater<int> > minim;

    // Adding elements into maxi 
    maxim.push(8);
    maxim.push(0);
    maxim.push(1);
    maxim.push(2);

    int n = maxim.size();
    cout << "\nThe elements in accending order are: ";
    for (int i = 0; i < n; i++)
    {
        cout << maxim.top() << "  ";    // This will print first lowest element
        maxim.pop();
    }

    // Adding elements into minim
    minim.push(8);
    minim.push(0);
    minim.push(1);
    minim.push(2);

    cout << "\nThe elements in decending order are: ";      
    for (int i = 0; i < n; i++)
    {
        cout << minim.top() << "  ";    // This will print first lowest element 
        minim.pop();
    }

    // Checking is minim is empty
    cout << "\nIs empty are not " << minim.empty();
    return 0;
}
