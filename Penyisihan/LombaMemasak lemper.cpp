#include <iostream>

using namespace std;

int main(){
    long long N, total = 0;
    cin>>N;
    long long A[N];
    for(int i=0; i<N; i++){
        cin>>A[i];
    }
    while(true){
        bool neg = true;
        for(int i=0; i<N; i++){
            if((A[0]<0) || (A[N-1]<0)){
                cout<<-1;
                return 0;
            }
            if(A[i]<0){
                neg = false;
                A[i-1] += A[i];
                A[i+1] += A[i];
                A[i] = -A[i];
                total++;
            }
        }
        if(neg){
            cout<<total<<endl;
            return 0;
        }
    }
}
