#include <iostream>
using namespace std;

void update(int &a, int &b)
{
    cout<<a+b<<endl;
    int c = a-b;
    if (c < 0)
    {
        cout<<-(a - b);
    }
    else{
        cout<<(a - b);
    }

}
int main(){
    int a, b;
    cin>>a;
    cin>>b;
    int *ptr_a = &a;
    int *ptr_b = &b;
    update(*ptr_a, *ptr_b);

}