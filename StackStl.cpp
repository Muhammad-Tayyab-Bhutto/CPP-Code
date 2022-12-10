// Stack : Last in first out (LIFO) if we place some books then the last book will out first
#include <iostream> 
#include <stack>

using namespace std;

int main(){
    stack<string> s1;

    s1.push("Muhammad");
    s1.push("Tayyab");
    s1.push("Bhutto");
    
    // checking element which is on the top
    cout << "The element on top is " << s1.top();   // This will print bhutto because Bhutto is last in 
    cout << "\nThe size of stack is " << s1.size();   // This will show size which is 3
    cout << "\nCheck array is empty or not. " << s1.empty();   // This will show either array is empty or not

    // removing first element which is last in means bhutto
    s1.pop();
    cout << "/nThe element at first after pop is. " << s1.top();    // This will print Tayyab now last in is Tayyab
    
    return 0;
}