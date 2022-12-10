#include <iostream>

using namespace std;

template <class T1>
class Youtube
{
    int views;

    public:
        // Declaring friend function
        friend void setdata(); 
        friend void displaydata();
};

friend Youtube:: setdata()
{
    
}
int main()
{
    
    return 0;
}