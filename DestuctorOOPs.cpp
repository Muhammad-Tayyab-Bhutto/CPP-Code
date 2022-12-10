// Destructor never take arguments and never returns any value it is used to cleanup storage
#include <iostream>
using namespace std; 

// Inializing a global variable
int count = 0;
class num
{
    public:
    ~num()
    {
        count++;
        cout<<"This is time when construcor is called for object number "<<count<<endl;
    }
    // Inializing a Destructor (tilda is must before using destrucor)
    ~num()
    {
        cout<<"This is time when destrucor is called for object number "<<count<<endl;
        count--;
    }
};

int main()
{
    cout<<"We are in main Fuction\n";
    cout<<"Creating first object n1\n";

    num n1();
    {
        // This is block for n1
        cout<<"Creating two more objects\n ";
        num n2, n3;
        cout<<"Exiting from this blog\n";
    }
    cout<<"Back to main\n";


    return 0;
}