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

#define l long
#define ll long long
#define ld long double
#define lld long long double

using namespace std;

int main(int argc, char const *argv[])
{
    ll n;
    ll res = 0;
    cin>>n;
    vector<ll> v;
    for(ll b = 2; b<=n+1; b++){
        for(ll a = b-1; a>0; a--){
            if(v.size()<=(n+1)){
                res = pow(b,2) - pow(a,2);
                v.push_back(res);
                cout << a << " " << b << " : " << pow(b, 2) - pow(a, 2) << endl;
            }
        }
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i)<< endl;
    }
    cout<<v.at(n-1);
    return 0;
}