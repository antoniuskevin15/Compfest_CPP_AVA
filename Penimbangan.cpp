#include<iostream>
#include <iomanip>

using namespace std;

int main(){
    long double a = 0, sum = 0;
    for(int i = 0; i<6; i++){
        cin >> a;
        sum+=a;
    }
    long double avg = sum/6;
    cout << setprecision(13) << avg;
    return 0;
}