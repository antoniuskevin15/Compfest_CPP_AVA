#include <iostream>

using namespace std;

int main(){
    int K;
    cin>>K;
    for(int i=0; i<K; i++){
        string S;
        int Q;
        cin>>S;
        cin>>Q;
        for(int j=0; j<Q; j++){
            string temp;
            cin>>temp;
            if(S.find(temp) != string::npos){
                cout<<"ADA"<<endl;
            }else{
                cout<<"TIDAK"<<endl;
            }
        }
    }
}
