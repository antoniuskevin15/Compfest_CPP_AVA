// scpc_2_ava
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <string>
#include <math.h>
#include <iterator>

#define ll long long
#define ld long double
#define lld long long double

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    ll l,r;
    int k,w;
    vector<ll>v;
    cin>>n;
    ll a[n];
    for(ll j = 0; j<n; j++){
        cin>>a[j];
    }
    int q;
    int qr;
    cin>>q;
    for(ll i = 0; i<q; i++){
        cin>>qr;
        if(qr==1){
            cin>>k>>w;
            a[k-1] = w;
        }else if(qr==2){
            cin>>k;
            v.push_back(a[k-1]);
        }else if(qr==3){
            cin>>l>>r;
            for(ll j = 0; j<n; j++){
                if(a[j]>=l && a[j]<=r){
                    if((a[j] - l)<(r - a[j])){
                        a[j] = a[j] - (a[j] - l +1);
                    }else if((r - a[j])<(a[j] - l)){
                        a[j] = a[j] + (r - a[j] +1);
                    }
                }
            }
        }
    }
    for(ll i = 0; i<v.size(); i++){
        cout<<v.at(i)<<endl;
    }
    return 0;
}