#include <iostream>
#include <vector>

using namespace std;

void display(vector <int> &v){
    for (int i = 0; i  < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}

int main()
{
    vector<int> vect1;
    int size, elements;
    cout<<"Please enter the size of array. ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>elements;
        vect1.push_back(elements);
    }
    vector<int>:: iterator iter = vect1.begin();
    vect1.insert(iter, 9);
    vect1.insert(iter, 3, 789); // this wil add three more elements at begining
    display(vect1);

}