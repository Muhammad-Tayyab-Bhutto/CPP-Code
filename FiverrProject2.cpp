#include <iostream>
using namespace std;

typedef int *Ptr;

void DiceRolling()
{
  int size;
  cin >> size;
  int dice[1][8];
  int dieA[4] = {4, 5, 6, 7};
  int dieB[4] = {2, 4, 5, 10};
  int dieC[4] = {1, 4, 8, 9};
  int diceChoice[3][8] = {{4, 5, 6, 7, 2, 4, 5, 10}, {2, 4, 5, 10, 1, 4, 8, 9}, {1, 4, 8, 9, 4, 5, 6, 7}};
  int i = 0, j = 0;
  Ptr *dices = new Ptr[size];
  while (i < size && j < 8)
  {
    dices[i++] = new int[j++];
  }
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < 8; j++)
    {
      cin >> dices[i][j];
    }
  }
  
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < 8; j++)
    {
      int k = 0;
      int l = 0;
      if (i < 3 && j < 8)
      {
        k++;
        l++;
      }
      if (dices[i][j] == diceChoice[k][l])
      {
        cout << "yes" << endl;
        if (j < i)
        {
          break;
        }
      }
      else
      {
        cout << "no" << endl;
        if (j < i)
        {
          break;
        }
        
      }

    }
  }
}
int main()
{
  DiceRolling();

  return 0;
}
