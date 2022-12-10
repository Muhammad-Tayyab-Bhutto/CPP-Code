#include <iostream>

using namespace std;

// Declaring Class for shop

class Shop
{
    // Note By Dafault every variable in class is private until we make it Public
    int itemPrice[100];
    int itemID[100];
    int counter;

    public:
        // Declaring Methods for reading (Input) counting and displaying
        void read(void);
        void initCounter(void);
        void display(void);

};

// Methods Defination
void Shop:: read()
{
    cout<<"Please Enter The Item Price : ";
    cin>>itemPrice[counter];
    cout<<"Please Enter The Item Price : ";
    cin>>itemID[counter];
    counter++;
}

void Shop::initCounter()
{
    counter++;
}

void Shop:: display()
{
    cout<<"Item Price Is : "<<itemPrice[counter+1]<<endl;;
    cout<<"Item Price Is : "<<itemID[counter+1]<<endl;;
}

int main()
{
    // Creating Object To Access Methods Of Class
    Shop shop;
    shop.read();
    shop.read();
    shop.read();
    shop.display();
    return 0;
}