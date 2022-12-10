#include <iostream>
#include <string>
using namespace std;

struct Store{
    string productName;
    string storeName[10];
    int productModel[10];
    float productPrice[10];

    void setdata(){
        for (int i = 0; i < 10; i++)
        {
            cout << "Enter the name of Product "<< i+1 << " ";
            cin>> productName; 
            cout << "Enter the Model of Product "<< i+1 << " ";
            cin >> productModel[i]; 
            cout << "Enter the Price of Product "<< i+1 << " ";
            cin >> productPrice[i];
            storeName[i] = productName;

        }
    }
    void getdata(){
        cout << "=================================================================\n";
        cout << "Product Name       "<<"Product Model         "<< "Product Price\n";
        cout << "=================================================================\n";
        for (int i = 0; i < 10; i++)
        {
            cout << storeName[i]<<"      "<<productModel[i]<<"      "<<productPrice[i] <<endl;
        }
    }
};
int main(){
    Store s1;
    s1.setdata();
    s1.getdata();
    
    return 0;
}