#include <iostream>
using namespace std;

void square(int number)
{
    cout<<"The square of entered number is: "<<number*number;
}
int main(){
    int number;
    cout<<"Please enter a number: ";
    cin>>number;
    square(number);
    return 0;
}