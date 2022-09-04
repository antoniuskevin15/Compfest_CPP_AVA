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
    int n, u,v;
    cin>>n;
    ll jalan[n][n];
    ll w;
    for(int i = 0; i<n; i++){
        cin>>u>>v>>w;
        jalan[u-1][v-1] = w;
        jalan[v-1][u-1] = w;
    }
    ll s = 0;
    cout << tsp()
    return 0;
}