#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int *c = a;
    a = b;
    b = c;
    cout << "The value of a after swapping is. " << *a << endl;
    cout << "The value of a after swapping is. " << *b << endl;
}
int main(){
    int a = 5, b = 10;
    cout << "The value of a before swapping is. " << a << endl;
    cout << "The value of b before swapping is. " << b << endl;
    swap(&a,&b);
    return 0;
}