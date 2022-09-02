#include <iostream>

using namespace std;

int main(){
    int N, total=0;
    cin>>N;
    for(int i=0; i<=N; i++){
        for(int j=0; j<=N; j++){
            for(int k=0; k<=N; k++){
                if((i+j+k) == N){
                    total++;
                }
            }
        }
    }
    cout<<total;
}
