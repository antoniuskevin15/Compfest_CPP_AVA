#include <iostream>

using namespace std;

int main(){
    int N, hasil = 0, val=1;
    cin>>N;
    N++;
    for(int r = 1; r <= N; r++){
        val = val * (N - r)/r;
        hasil+=val;
    }
    cout<<hasil<<endl;
}
