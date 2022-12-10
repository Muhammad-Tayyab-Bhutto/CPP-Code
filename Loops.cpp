/* Two Types of loops 
1. Couter Control loop : Where we know the exact path of ending
2. Sentinal Control loop : Where we don't know the exact path of ending;
*/
#include <iostream>
using namespace std;

int main()
{
    int op =0;
    float mass, acc, vel,cel;

    do{
        cout<<"Press 1 to calculate force : "<<endl;
        cout<<"Press 2 to convert C in K : "<<endl;
        cout<<"Press 3 to calculate K.E :"<<endl;
        cout<<"Press 0 to exit : "<<endl;

        cin>>op;
        if (op == 1)
        {
            cout<<"Please Enter the value of mass : ";
            cin>>mass;
            cout<<"Please Enter the value of acceleration : ";
            cin>>acc;
            cout<<"Foce = "<<mass*acc;
        }
        else if (op == 2)
        {
            cout<<"Please Enter the value of mass : ";
            cin>>mass;
            cout<<"Please Enter the value of Velocity : ";
            cin>>vel;
            cout<<"K.E = "<<cel+32/5/9;
        }
        
        
        else if (op == 3)
        {
            cout<<"Please Enter the value of mass : ";
            cin>>mass;
            cout<<"Please Enter the value of Velocity : ";
            cin>>vel;
            cout<<"K.E = "<<1/2*mass*(vel*vel);
        }
        else if (op == 0)
        {
            exit(0);
        }
    }while(op<=3);

    
    return 0;
}