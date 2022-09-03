#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, b;

  cin >> n >> a >> b;

  list<int> sequenceA;

  sequenceA.push_back(1);
  sequenceA.push_back(2);
  sequenceA.push_back(3);
  sequenceA.push_back(4);

  list<int>::iterator it;
  for(it = sequenceA.begin(); it != sequenceA.end(); it++) {
    cout << *it;
  }

  // int counter = 0;
  // for(int i = a; 1; i++) {
  //   if(i%a == 0 || i%b == 0) {
  //     counter++;
  //     if(counter == n) {
  //       cout << i;
  //       return 0;
  //     }
  //   }
  // }


  
  return 0;
}