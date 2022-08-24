#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main(){
    map<string, int> nama;

    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        string s, a;
        cin>>s>>a;
        if(s == "DAFTAR"){
            nama.insert(pair<string, int>(a, 0));
        }else if(s == "TANYA"){
            map<string, int>::iterator itr;
            bool ada = false;
            for (itr = nama.begin(); itr != nama.end(); ++itr) {
                if(itr->first == a){
                    cout<<++itr->second<<"\n";
                    ada = true;
                }
            }
            if(!ada){
                cout<<0<<"\n";
            }
        }
    }
}
