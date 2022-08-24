#include <iostream>

using namespace std;

int main(){
    int N;
    cin>>N;
    int num[5];
    for(int i=0; i<N; i++){
        cin>>num[i];
        cout<<((i+1)/2)+1<<endl;
        if((i+1)%2==0){
            cout<<(num[((i+1)/2)]+num[((i+1)/2)+1])/2<<endl;
        }else{
            cout<<num[((i+1)/2)]<<endl;
        }
    }
}
