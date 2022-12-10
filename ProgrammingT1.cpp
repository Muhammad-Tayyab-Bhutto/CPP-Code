#include <iostream>
using namespace std;

int main()
{
    string shopsNames[3] = {"Amazon", "Daraz", "Ali Express"};
    string products[3][10] = {{"Men Shoes", "Women Shoes", "Men Watches",
    "Women Watches", "Alexa", "Head Phones","Cameras", "Men's T-Shirts",
    "Women Clothes", "Mens Clothes"},
    {"Men Shoes", "Women Shoes", "Men Watches",
    "Women Watches", "Alexa", "Head Phones","Cameras", "Men's T-Shirts",
    "Women Clothes", "Mens Clothes"},
    {"Men Shoes", "Women Shoes", "Men Watches",
    "Women Watches", "Alexa", "Head Phones","Cameras", "Men's T-Shirts",
    "Women Clothes", "Mens Clothes"}};

    float prices[3][10] = {{55.8, 86.8, 15.5, 75.0, 45.8,
    25.8,115.48,30.8,156.8,205.8},
    {55.8, 86.8, 15.5, 75.0, 45.8,
    25.8,115.48,30.8,156.8,205.8},
    {55.8, 86.8, 15.5, 75.0, 45.8,
    25.8,115.48,30.8,156.8,205.8}};

    float totalBudget = 0;

    for (int i = 0; i < 10; i++)
    {
        cout<<"======================================================\n";
        for (int j = 0; j < 10; j++)
        {
            
            if (j == 0)
            {
                cout<<"Shop: "<<shopsNames[i];
                cout<<"     Products available   price\n";
            }
            cout<<"\t\t\t"<<products[i][j]<<"\t\t"<<prices[i][j]<<"$"<<endl;
            cout<<"--------------------------------------------------------\n";
            totalBudget += prices[i][j];
        }
        cout <<"Total amount products: "<<totalBudget<<"$"<<endl;
    }

    return 0;
}

