#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void printList(list<int> sequence)
// {
//   list<int>::iterator it;
//   for (it = sequence.begin(); it != sequence.end(); it++)
//   {
//     cout << *it << " ";
//   }
// }

// int main()
// {
//   int aMultiplier = 1;
//   int bMultiplier = 1;
//   int n, a, b;

//   list<int> sequence;

//   cin >> n >> a >> b;

//   for (int i = 0; i < n; i++)
//   {
//     if (find(sequence.begin(), sequence.end(), a * aMultiplier) == sequence.end())
//     { // not found
//       sequence.push_back(a * aMultiplier);
//       if(sequence.size() == n) {
//         break;
//       }
//     }

//     if (find(sequence.begin(), sequence.end(), b * bMultiplier) == sequence.end())
//     { // not found
//       sequence.push_back(b * bMultiplier);
//       if(sequence.size() == n) {
//         break;
//       }
//     }

//     aMultiplier++;
//     bMultiplier++;
//   }

//   sequence.sort();
//   // printList(sequence);

//   cout << sequence.back();

//   return 0;
// }

int main()
{
  map<int, int> sequence;
  int aMul = 1;
  int bMul = 1;

  int n, a, b;
  cin >> n >> a >> b;
  int counter = 0;

  for (int i = 0; i < n; i++)
  {
    if (!sequence.count(a * aMul))
    {
      // cout << a*aMul << " ";
      sequence.insert(pair<int, int>(a * aMul, 1));
      counter++;
      if (counter == n)
      {
        cout << a * aMul;
        break;
      }
    }

    if (!sequence.count(b * bMul))
    {
      sequence.insert(pair<int, int>(b * bMul, 1));
      // cout << b*bMul << " ";
      counter++;
      if (counter == n)
      {
        cout << b * bMul;
        break;
      }
    }

    aMul++;
    bMul++;
  }

  return 0;
}