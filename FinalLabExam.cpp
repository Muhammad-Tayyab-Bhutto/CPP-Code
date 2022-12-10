#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Data
{
    string drinkName[5] = {"Coca Cola", "Pepsi Cola", "Lemon Lime", "Grape Soda", "Cream Soda"};
    int drinkCost[5] = {130, 130, 130, 140, 140};
    int quantity[5] = {20, 20, 20, 20, 20};
}d;
int main()
{
    int search;
    int cost;
    int quantitycocacola = 0;
    int quantitypepsi = 0;
    int quantitylemon = 0;
    int quantitygrape = 0;
    int quantitycream = 0;
    int total = 0;
    int sum = 0;
    char choice;
    
    do
    {
        for (int i = 0; i < 5; i++)
        {
            cout << i+1 << "  Drinks Available " << d.drinkName[i] << endl;
            cout << i+1 << "  Drinks Cost " << d.drinkCost[i] << endl;
            cout << i+1 << "  Drinks Quantity " << d.quantity[i] << endl;
        }
        cout << "Do You Want To Buy? ";
        cin >> choice;
        if (choice == 'y')
        {
            cout << "Please select a drink you want to buy. ";
            cin >> search;
            if (search == 1)
            {
                cout << "Please pay money ";
                cin >> cost;
                if (cost > d.drinkCost[0])
                {
                    cout << "Your Remaining Cost is. " << cost-d.drinkCost[0] <<endl;
                    total += d.drinkCost[0];
                }
                quantitycocacola++;
                if (quantitycocacola > 1)
                {
                    cout << "Sory Not Available " << endl;
                }
            }

            else if (search > 2)
            {
                cout << "Please pay money ";
                cin >> cost;
                if (cost > d.drinkCost[1])
                {
                    cout << "Your Remaining Cost is. " << cost-d.drinkCost[1] <<endl;
                    total += d.drinkCost[1];
                }
                quantitypepsi++;
                if (quantitypepsi > 20)
                {
                    cout << "Sory Not Available " << endl;
                }
            }
            else if (search == 3)
            {
                cout << "Please pay money ";
                cin >> cost;
                if (cost > d.drinkCost[2])
                {
                    cout << "Your Remaining Cost is. " << cost-d.drinkCost[2] <<endl;
                    total += d.drinkCost[2];
                }
                quantitylemon++;
                if (quantitylemon > 20)
                {
                    cout << "Sory Not Available " << endl;
                }
            }
            else if (search == 4)
            {
                cout << "Please pay money ";
                cin >> cost;
                if (cost > d.drinkCost[3])
                {
                    cout << "Your Remaining Cost is. " << cost-d.drinkCost[3] <<endl;
                    total += d.drinkCost[3];
                }
                quantitygrape++;
                if (quantitygrape > 20)
                {
                    cout << "Sory Not Available " << endl;
                }
            }
            else if (search == 5)
            {
                cout << "Please pay money ";
                cin >> cost;
                if (cost > d.drinkCost[4])
                {
                    cout << "Your Remaining Cost is. " << cost-d.drinkCost[4] <<endl;
                    total += d.drinkCost[4];
                }
                quantitycream++;
                if (quantitycream == 20)
                {
                    cout << "Sory Not Available " << endl;
                }
            }
            
        }
        sum += total;
    }while (choice != 'n');
    cout << "Total Earning = " << sum;
    return 0;
}