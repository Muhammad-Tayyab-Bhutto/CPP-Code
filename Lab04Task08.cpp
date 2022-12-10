#include <iostream>
using namespace std;

int main()
{
    int choice;
    int quantity;
    int purchase_products;
    int books_purchased = 0;
    int t_shirts_purchased = 0;
    int shoes_purchased = 0;
    int books_price = 500;
    int t_shirts_price = 700;
    int shoes_price = 1000;
    int total_cost;
    do
    {
        cout<<"Press 1. Books (Per item price is 500)\n";
        cout<<"Press 2. T-Shirts (Per item price is 700)\n";
        cout<<"Press 3. Shoes (Per item price is 1000)\n";
        cout<<"Press 0. Exit\n";
        cout<<"Press any number to buy any product or press 0 to exit: ";
        cin>>choice;
        if (choice > 0 && choice < 4)
        {
            if (choice == 1)
            {
                cout<<"You have selected Books\n";
                cout<<"Please enter quantity: ";
                cin>>quantity;
                purchase_products += quantity;
                books_purchased += quantity;
            }
            if (choice == 2)
            {
                cout<<"You have selected T-Shirts\n";
                cout<<"Please enter quantity: ";
                cin>>quantity;
                purchase_products += quantity;
                t_shirts_purchased += quantity;
            }
            if (choice == 3)
            {
                cout<<"You have selected Shoes\n";
                cout<<"Please enter quantity: ";
                cin>>quantity;
                purchase_products +=quantity;
                shoes_purchased += quantity;
            }
            
            choice++;
        }
        else if (choice < 0 || choice > 3)
        {
            cout<<"Please press a valid button\n";
        }
    } while (choice > 0);
    cout<<"All products purchased: "<<purchase_products<<endl;
    cout<<"Books Purchased: "<<books_purchased<<endl;
    cout<<"T-Shirts Purchased: "<<t_shirts_purchased<<endl;
    cout<<"Shoes Purchased: "<<shoes_purchased<<endl;
    cout<<"Cost of Books purchased: "<<500*books_purchased<<endl;
    cout<<"Cost of T-Shirts purchased: "<<700*t_shirts_purchased<<endl;
    cout<<"Cost of Shoes purchased: "<<1000*shoes_purchased<<endl;
    total_cost = (500*books_purchased)+(700*t_shirts_purchased)+(1000*shoes_purchased);
    cout<<"Total Cost: "<<total_cost;
    return 0;
}