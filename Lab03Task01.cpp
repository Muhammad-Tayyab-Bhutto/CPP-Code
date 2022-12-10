#include <iostream>     // preprogressive Directive 
using namespace std;    // Global Identifier

int main()              // Main Function
{                       // Entry Point

    //Declaring Varibles
    int clothes, shoes, books, total_price;;
 
    // Initializing Varibles
    int clothes_price = 5000;
    int shoes_price = 3000;
    int books_price = 2500;
    

    cout<<"Availble Products and their prices"<<endl;
    cout<<"==================================="<<endl;
    cout<<"1. Clothes   (5000 Rs)"<<endl;
    cout<<"2. Shoes     (3000 Rs)"<<endl;
    cout<<"3. Books     (2500 Rs)"<<endl;    
    cout<<"Enter Quantity Of Clothes You Want : ";
    cin>>clothes;
    cout<<"Enter Quantity Of Shoes You Want : ";
    cin>>shoes;
    cout<<"Enter Quantity Of Books You Want : ";
    cin>>books;             

    total_price = (clothes_price * clothes) + (books_price * books) + (shoes_price * shoes);
    cout<<"Your Total Price Is Rs "<<total_price; 
    return 0;
}
