#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  long double n, b = 2, counter = 0;
  vector<double> v;

  cin >> n;

  // long double result;
  // for (b = 2; b < n; b++)
  // {
  //   cout << b << " " << b - 1 << " : " << pow(b, 2) - pow(b - 1, 2) << endl;
  //   if (b == n) result = pow(b, 2) - pow(b - 1, 2);
  // }

  for(int b = 2; b <= n; b++) {
    for(int a = b-1; a > 0; a--) {
        v.push_back(pow(b, 2) - pow(a, 2));
        if(v.size() != ) {

        }
        // cout << a << " " << b << " : " << pow(b, 2) - pow(a, 2) << endl;
    }
  }

  sort(v.begin(), v.end());
  for(int i = 0; i < v.size(); i++) {
    cout << v.at(i)<< endl;
  }

  return 0;
}