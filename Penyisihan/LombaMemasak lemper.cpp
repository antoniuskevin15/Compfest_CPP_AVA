#include <iostream>

using namespace std;

int main(){
    long long N, total = 0;
    cin>>N;
    long long A[N];
    for(int i=0; i<N; i++){
        cin>>A[i];
    }
    bool neg = true;
    while(neg){
        bool neg2 = true;
        for(int i=0; i<N; i++){
            if((A[0]<0) || (A[N-1]<0)){
                neg2 = false;
                cout<<-1;
                return 0;
            }
            if(i > 0 && A[i]<0 && i <N){
                neg2 = false;
                A[i-1] += A[i];
                A[i+1] += A[i];
                A[i] = -A[i];
                total++;
            }
        }
        if(neg2){
            neg = false;
            cout<<total<<endl;
            return 0;
        }
    }
}
