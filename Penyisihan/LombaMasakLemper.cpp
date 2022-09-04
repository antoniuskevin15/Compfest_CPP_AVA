#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int totalStep = 0;
  while(1) {
    int negativeExists = false;
    for(int i = 0; i < n; i++) {
      if(i == 0 && a[i] < 0 || i == n-1 && a[i] < 0) {
        cout << -1 << endl;
        return 0;
      }
      
      if(a[i] < 0) {
        a[i-1] = a[i-1] + a[i];
        a[i+1] = a[i+1] + a[i];
        a[i] = -a[i];
        totalStep++;
        negativeExists = true;
      }
    }

    if(!negativeExists) break;
  }

  cout << totalStep;


  return 0;
}