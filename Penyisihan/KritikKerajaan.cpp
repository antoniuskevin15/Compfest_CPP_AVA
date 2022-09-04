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

void binarySearch(ll a[], int n, ll l, ll r){
    int left = 0;
    int right = n - 1;
 
    while (left <= right) {
        int mid = (right + left) / 2;
        if (a[mid] <= r && a[mid] >= l) {
            if((a[mid] - l)<(r - a[mid])){
                a[mid] = a[mid] - (a[mid] - l +1);
            }else if((r - a[mid])<(a[mid] - l)){
                a[mid] = a[mid] + (r - a[mid] +1);
            }
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
}

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
            // cout<<a[k-1]<<endl;
            v.push_back(a[k-1]);
        }else if(qr==3){
            cin>>l>>r;
            binarySearch(a,n,l,r);
            // for(int j = 0; j<n; j++){
            //     if(a[j]>=l && a[j]<=r){
            //         if((a[j] - l)<(r - a[j])){
            //             a[j] = a[j] - (a[j] - l +1);
            //         }else if((r - a[j])<(a[j] - l)){
            //             a[j] = a[j] + (r - a[j] +1);
            //         }
            //     }
            // }
        }
    }
    for(ll i = 0; i<v.size(); i++){
        cout<<v.at(i)<<endl;
    }
    return 0;
}