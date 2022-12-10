#include <iostream>
#include <cmath>
using namespace std;

class Interest{
    float r_annualRate;
    float a_balanceInAccount;       // future value of amount 
    float p_principle;      
    int n_compoundInterst;
    int time;
    float balance;
    int a;
    float b;
    float e_eularConstant = 2.7;
    public:
        void setdata(int annualRate, float principle)
        {
            r_annualRate = annualRate;
            p_principle = principle;
        }
        void QuaterlyCompound(int time)
        {
            n_compoundInterst = 4;
            b = pow((1 + r_annualRate / n_compoundInterst), (n_compoundInterst*time));
            int c = pow(5,3);
            cout << b << " " <<c << endl;
            balance = pow(b, a);
            cout << "Your current balance is. " << p_principle * balance << endl;
        }
        void MonthlyCompound()
        {
            n_compoundInterst = 12;
            balance = p_principle * (1+r_annualRate/n_compoundInterst)*(n_compoundInterst*(time));
            cout << "Your current balance is. " << balance << endl;
        }
        // void ContinuousCompound(int n_compoundInterst)
        // {
        //     this->n_compoundInterst = n_compoundInterst = ;
        //     balance = p_principle * (e_eularConstant)*(r_annualRate*(time));
        //     cout << "Your current balance is. " << balance << endl;
        // }

};


int main(){
    Interest i1;
    float r_annualRate;
    // float a_balanceInAccount;       // future value of amount 
    float p_principle;      
    int time;

    cout << "Enter the Annual Rate. ";
    cin >> r_annualRate;
    // cout << "Enter the Balance In Account. ";
    // cin >> a_balanceInAccount;
    cout << "Enter the Principle. ";
    cin >> p_principle;
    cout << "Enter the time. ";
    cin >> time;
    
    i1.setdata(r_annualRate, p_principle);
    i1.QuaterlyCompound(time);

    return 0;
}