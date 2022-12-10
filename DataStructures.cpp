#include <iostream>
using namespace std;

// Initialization Class 
class StringData
{
    string usr_input;
    char special_char[100] = {'!','@','#','$','%','^','&','*','(',')','}','{', '[', ']', '+', '-', '?', '=', '_' };
    
    public:
        // Using friend Function to give permission That it can access its modifiers
        friend StringData displayData(StringData s1);
        void setData()
        {
            cout<<"Please type your input : ";
            cin>>usr_input;
        }
        void storeData()
        {
            for (int i = i; i<=100; i++)
            {
                if (usr_input.at(i) == special_char[i])
                {
                    cout<<usr_input;
                }
            }
        }

};

// StringData displayData(StringData s1){
//     s1.storeData(s1.usr_input);
// }
int main()
{
    StringData stringData;
    stringData.setData();
    stringData.storeData();
   
    return 0;
}