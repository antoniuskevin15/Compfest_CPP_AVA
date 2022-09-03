#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<int, int> book;
  list<string> answers;
  int n, q;
  int inputUser;

  cin >> n >> q;

  for (int i = 0; i < n; i++)
  {
    cin >> inputUser;
    book.insert(pair<int, int>(inputUser, 1));
  }

  for (int i = 0; i < q; i++)
  {
    cin >> inputUser;
    if (book.count(inputUser))
    {
      answers.push_back("ada");
    }
    else
    {
      answers.push_back("tidak ada");
    }
  }

  for (auto const &i : answers)
  {
    std::cout << i << std::endl;
  }

  return 0;
}