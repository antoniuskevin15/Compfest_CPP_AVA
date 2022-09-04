#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main()
{
  long long n;

  cin >> n;

  // long double result;
  // for (int i = 0; i < n; i++)
  // {
  //   // cout << b << " " << b - 1 << " : " << pow(b, 2) - pow(b - 1, 2) << endl;
  //   result = pow(b, 2) - pow(b - 1, 2);
  //   b++;
  // }

  if (n == 0)
  {
    cout << 0;
  }
  else if(n > 0)
  {
    // cout << (int64_t)(pow(5,2) - pow(n, 2)) << endl;
    // cout << pow((n + 1), 2) << endl;
    // cout << pow(n, 2) << endl;

    cout << 3 + (n-1) * 2;
  }

  return 0;
}