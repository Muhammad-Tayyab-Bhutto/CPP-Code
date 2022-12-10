#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct Data
{
    string items[8] = {"Omelet", "French Omelet", "Muffin", "French Toast", "Fruit Basket", "Cereal", "Coffee", "Tea"};
    float price[8] = {1.45, 2.45,0.99,1.99,2.49,0.69,0.75,0.55};
};
int main()
{
    int size = 1;
    char choice;
    int option;
    int i = 0;
    float total = 0;
    string content;
    ofstream hout("bills.txt");
    Data d;
    do
    {
        for (int j = 0; j < 8; j++)
        {
            cout << j+1 << "   " << d.items[j] << "\t" << d.price[j] << endl;
            if (j == 7)
            {
                cout << "Do you want to buy (y/n) ";
                cin >> choice;
            }
        }
        if ( choice != 'n')
        {
            cout << "Please Select What you want to buy. (1,2..) ";
            cin >> option;
            if (option == 1)
            {
                hout << d.items[i] <<"\t" <<d.price[i] << endl;
                total += d.price[0];
            }
            else if (option == 2)
            {
                hout << d.items[i] <<"\t" <<d.price[i] << endl;
                total += d.price[1];
            }
            else if (option == 3)
            {
                hout << d.items[i] <<"\t" <<d.price[i] << endl;
                total += d.price[2];
            }
            else if (option == 4)
            {
                hout << d.items[i] <<"\t" <<d.price[i] << endl;
                total += d.price[3];
            }
            else if (option == 5)
            {
                hout << d.items[i] <<"\t" <<d.price[i] << endl;
                total += d.price[4];
            }
            else if (option == 6)
            {
                hout << d.items[i] <<"\t" <<d.price[i] << endl;
                total += d.price[5];
            }
            else if (option == 7)
            {
                hout << d.items[i] <<"\t" <<d.price[i] << endl;
                total += d.price[6];
            }
            else if (option == 8)
            {
                hout << d.items[i] <<"\t" <<d.price[i] << endl;
                total += d.price[7];
            }
        }

        i++;
    } while (choice != 'n');
    hout<< "Total " <<total;
    hout.close();
    ifstream hin("bills.txt");
    while (getline(hin, content)){
        cout << content << endl;
    }
    
}
