#include <iostream>
using namespace std;

int main() {
  int n, a, b;

  cin >> n >> a >> b;

  int counter = 0;
  for(int i = a; 1; i++) {
    if(i%a == 0 || i%b == 0) {
      counter++;
      if(counter == n) {
        cout << i;
        return 0;
      }
    }
  }


  
  return 0;
}