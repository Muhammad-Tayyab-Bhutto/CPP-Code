// Queue: First in first out (first come first free)

#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<string> q1;

    q1.push("Muhammad");
    q1.push("Tayyab");
    q1.push("Bhutto");

    // checking size before pop
    cout << "The size of array before pop is " << q1.size() << endl;
    // checking front element 
    cout << "The front element in array is " << q1.front() << endl;
    // Now removing front element
    q1.pop();
    cout<< "The front element in array after pop is " << q1.front() << endl;
    // checking size after pop
    cout << "The size of array after pop is " << q1.size() << endl;

    return 0;
}