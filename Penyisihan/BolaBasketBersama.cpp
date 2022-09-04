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
    ll n, d;
    vector< pair<ll, int> > p;
    ll power, res = 0, idx = 0;
    ll count = 0;
    bool stat = false;
    cin >> n >> d;
    for (ll i = 0; i < n; i++)
    {
        cin >> power;
        p.push_back(make_pair(power,0));
    }
    sort(p.begin(), p.end());
    ll max = p[n-1].first;
    if(max * n < d){
        count = 0;
    }else{
        for(int i = n-1; i>=0; i--){
            if(p[i].second != 1){
                res += d/p[i].first;
                while(idx < res){
                    if(p[idx+1].second != 1){
                        p[idx].second = 1;
                        stat = true;
                        // cout<<p[idx].first<<" "<<p[idx].second<<" "<<stat<<endl;
                    }else{
                        stat = false;
                        // cout<<p[idx].first<<" "<<p[idx].second<<" "<<stat<<endl;
                        break;
                    }
                    idx++;
                }
                if(stat){
                    count++;
                    p[i].second = 1;
                    // cout<<p[i].first<<" "<<p[i].second<<" "<<stat<<endl;
                }
            }
            // cout<<p[i].first<<" "<<p[i].second<<endl;
        }
    }
    cout<<count;
    return 0;
}