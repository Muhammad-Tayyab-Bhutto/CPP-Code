// #include <iostream>
// using namespace std;

// int main()
// {
//     int guess_number;
//     int number = 67;
//     int chance = 1;
//     do
//     {
//         cout<<"\nGuess the number. 1-100 enter guess number ";
//         cin>>guess_number;
//         if (guess_number >= 1 && guess_number <= 100)
//         {
//             if (guess_number < number)
//             {
//                 cout<<"\nYour guess number is smaller than actual number";
//             }
//             else if (guess_number > number)
//             {
//                 cout<<"\nYour guess number is greater than actual number";
//             }
//             else
//             {
//                 cout<<"\nCongratulation You Guessed it!";
//             }
//         }
//         else
//         {
//             cout<<"Invalid choice! :(";
//         }
//         if (chance > 4)
//         {
//                 cout<<"\nSorry You Lost The Game :(";
//         }
//         chance++;

//     } while ((chance<6) && (guess_number != number));
    
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int guess_number;
    int number = 67;
    bool flage = true;
    int count = 1;
    
    do
    {
        cout<<"\nGuess the number. enter guess number ";
        cin>>guess_number;
        if (guess_number < number)
        {
            cout<<"\nYour guess number is smaller than actual number";
        }
        else if (guess_number > number)
        {
            cout<<"\nYour guess number is greater than actual number";
        }
        else
        {
            cout<<"\nCongratulation You Guessed it!";
            flage = false;
        }
        count++;

    } while (flage && count < 6);
    
    return 0;
}