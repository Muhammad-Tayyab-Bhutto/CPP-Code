#include <iostream>
using namespace std;


int main()
{
    float bmi, weight, height;
    cout<<"Please enter your weight: ";
    cin>>weight;
    cout<<"Please enter your height: ";
    cin>>height;
    bmi = weight/ (height * height);
    if (weight > 0 && height > 0)
    {
        cout<<"BMI = "<<bmi
        <<endl;
    }
    else if (weight < 0 )
    {
        cout<<"Weight can not less then Zero "<<endl;
    }
    else if (weight == 0 )
    {
        cout<<"Weight can not equal to Zero "<<endl;
    }
    else if (height < 0 )
    {
        cout<<"Height can not less then Zero "<<endl;
    }
    else if (height == 0 )
    {
        cout<<"Height can not equal to Zero "<<endl;
    }
    return 0;
}
