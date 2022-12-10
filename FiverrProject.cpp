#include <iostream>
using namespace std;

typedef int *Ptr;

bool checkC(Ptr A, Ptr B)
{
  Ptr *C = new Ptr[4];
  bool flage = false;
  for (int i = 0; i < 4; i++)
  {
    *C[i] = rand() % 10 + 1;
  }
  for (int i = 0; i < 4; i++)
  {
    if (A[i] < *C[i])
    {
      return true;
    }
    if (B[i] > *C[i])
    {
      return true;
    }
  }
  return flage;
}

void DiceRolling()
{
  int size;
  cin >> size;
  int i = 0;
  Ptr *dices = new Ptr[size];
  Ptr *A = new Ptr[4];
  int a = 0, b = 0;
  Ptr *B = new Ptr[4];
  int winA = 0, winB = 0;
  
  while (i < size)
  {
    dices[i++] = new int[8];
  }

  for (i = 0; i < size; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      cin >> dices[i][j];   cin.ignore();
    }
  }

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      if (j < 4)
      {
        A[i] = &dices[i][j];
      }
      else 
      {
        B[i] = &dices[i][j];
      }
    }
  }
    for (int i = 0; i < 4; i++)
    {
        cout << *A[i];
    }
    
    // for (int i = 0; i < 4; i++)
    // {
    //   if (A[i] > B[i])
    //   {
    //     winA++;
    //   }
    //   else if (B[i] > A[i])
    //   {
    //     winB++;
    //   }
    // }
    // cout << winA << winB;
    // if (winA > winB)
    // {
    //   if (checkC(*A, *B))
    //   {
    //     cout << "yes";
    //   }
    //   else
    //   {
    //     cout << "no";
    //   }
    // }
    // else
    // {
    //   cout << "no";
    // }
}

int main()
{
  DiceRolling();

  return 0;
}
