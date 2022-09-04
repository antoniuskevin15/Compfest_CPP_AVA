#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){
    int K, L, N;
    cin>>N>>K>>L;
    map<string, int> kuat;
    for(int i=0; i<N; i++){
        string S;
        int a;
        cin>>S>>a;
        kuat.insert(pair<string, int>(S,a));
    }

    map<string, int>::iterator itr;
    for(itr = kuat.begin(); itr != kuat.end(); ++itr){
        cout<<itr->first<<"\t"<<itr->second<<endl;
    }
}
