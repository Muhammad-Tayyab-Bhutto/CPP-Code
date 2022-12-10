#include <iostream>
using namespace std;

// class for array
class Shop
{
    int itemPrice[100];
    int itemID[100];
    int count;

    public:
        // Method Declaration
        void read(void);
        void counter(void);
        void display(void);
};

// Function Defination
void Shop::read(void)
{
    cout<<"Please enter price of itemPrice : "<<count+1<<endl;
    cin>>itemPrice[count];
    cout<<"Please enter price of itemID : "<<endl;
    cin>>itemID[count];
    count++;
}

void Shop::counter(void)
{
    count = 0;
}

void Shop::display(void)
{
    for (int i = 0; i < count; i++)
    {
        cout<<"The price of item with id : "<<itemID[i]<<" is : "<<itemPrice[i]<<endl;
    }
    
}
int main()
{
    Shop shop;
    shop.counter();
    shop.read();
    shop.read();
    shop.read();
    shop.display();
    return 0;
}