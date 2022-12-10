#include <iostream>
#include <string>
using namespace std;

class Store
{
    public:
        string s;
        /*
        int books_price;
        int pen_price;
        int cover_price;
        int sheet_price;


        int Price(int books_price, int pen_price, int cover_price, int sheet_price)
        {
            int total;
            this-> books_price = books_price;
            this-> pen_price = pen_price;
            this-> cover_price = cover_price;
            this-> sheet_price = sheet_price;
            total = books_price+pen_price+cover_price+sheet_price;
            cout<<total;
            return total;
        }
        */

        
}cafeteria, mall;  // We can create objects like this so we donot need to create these in main

class Binary
{
    string s;       // By Default Veriable of class is private or we can make it private

    // private:
    // string s;
    public:

        // Function Declaration
        void read(void);    // It will take input from user 
        void chk_bin(void); // It will chect the number either it is binary or not 
        void ones_comp(void);   // It will replace the numbers one into zero and zero into one 
        void display(void);     // It will Display the output 
};

// Function Defination
void Binary :: read(void)
{
    cout<<"Enter A Binary Number : ";
    cin>>s;
    
}

// Function Defination
void Binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"This is not a Binary number \n";
            exit(0);
        }
    }    
}

// Function Defination
void Binary :: ones_comp(void)
{
    // Nesting Of Member Function
    chk_bin();
    for (int i = 0; i < s.length(); i ++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

// Function Defination
void Binary :: display(void)
{
    cout<<"Displaying Binary Number : ";
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        cout<<s.at(i);
    }
    
}

// Main Function0
int main()
{
    Binary binary;      // Object of the class  
    /*
    Store store;
    int books_price;
    int pen_price;
    int cover_price;
    int sheet_price;
    cout<<"Enter The Books Price : ";
    cin>>store.books_price;
    cout<<"Enter The Pen Price : ";
    cin>>store.pen_price;
    cout<<"Enter The Cover Price : ";
    cin>>store.cover_price;
    cout<<"Enter The Sheet Price : ";
    cin>>store.sheet_price;
    store.Price(books_price, pen_price, cover_price, sheet_price);
    */

   binary.read();
//    binary.chk_bin();     // Accessing it using nesting of member Function
   binary.ones_comp();
   binary.display();

    

    return 0;

}