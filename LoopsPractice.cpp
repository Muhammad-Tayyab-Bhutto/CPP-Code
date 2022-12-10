#include <iostream>
using namespace std;

int main()
{
    // for (int i = 4; i >= 1; i--)
    // {
 
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }
    // for (int i = 4; i >=1; i--)
    // {
    //     for (int j =1; j <= i; j++)
    //     {
    //             for (int l = 1; l <= j; l++)
    //             {
    //                 cout<<" * ";
    //             }
    //         // cout<<"  ";
    //     }
    //     cout<<endl;
    // }
    // int num = 5;
    // num += 5;
    // num -= 2;
    // num *= 3;
    // cout<<num;
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
    // Q1:
    // for (int i = 4; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<" * ";
    //     }
    //     cout<<endl;
    // }
    // Q2:
    // for (int i = 4; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<" * ";
    //         if (j > i)
    //         {
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // Q3:
    // for(int i=4; i>0; i--)
    // {
    //   for(int j=0; j<=4; j++) //looping columns
    //   {
    //     if (j>=i)
    //     {
    //       cout<<"*";
    //     }
    //     else 
    //     {
    //       cout<<" ";
    //     }
    //   }
    //   cout<<endl;
    // }

    //Q4:
    for(int i=4; i>0; i--)
    {
      for(int j=0; j<=4; j++) //looping columns
      {
        if (j<i)
        {
          cout<<"*";
        }
        else 
        {
          cout<<" ";
        }
      }
      cout<<endl;
    }

    // for (int i = 4; i >= 1; i--)
    // {
    //     for (int j = 1; j <= 4; j++)
    //     {
    //         if (j >= i)
    //         {
    //             cout<<" * ";
    //         }
    //         else
    //         {
    //             cout<<" ";
    //         }

    //     }
    //     cout<<endl;
    // }


    return 0;
}
// ****
 