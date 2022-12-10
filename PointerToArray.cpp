#include <iostream>
using namespace std;

class Shop
{
    int itemId;
    float itemPrice;
    string itemName;
    public:
        // void setdata(int itemId, float itemPrice, string itemName)
        Shop & setdata(int itemId, float itemPrice, string itemName)
        {
            this->itemId = itemId;
            this->itemPrice= itemPrice;
            this->itemName = itemName;
            return *this;   // It will return an object
        }
        void displaydata()
        {
            cout<<"***********************************"<<endl;
            cout<<"Item id: "<<itemId<<endl;
            cout<<"Item Price: "<<itemPrice<<endl;
            cout<<"Item Name: "<<itemName<<endl;
        }


};

int main(){
    int size = 3;
    int itemId;
    float itemPrice;
    string itemName;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Item id: ";
        cin>>itemId;
        cout<<"Enter Item Price: ";
        cin>>itemPrice;
        cout<<"Enter Item Name: ";
        cin>>itemName;
        ptr->setdata(itemId, itemPrice, itemName);
        // (*ptr).setdata(itemId, itemPrice, itemName);
        ptr++;

    }

    for (int i = 0; i < size; i++)
    {
        ptrTemp->displaydata();
        ptrTemp++;
    }



    return 0;
}