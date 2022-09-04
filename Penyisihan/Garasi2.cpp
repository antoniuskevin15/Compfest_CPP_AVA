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
    cin>>n;
    if(n==1){
        cout<<3<<endl;
    }else if(n==2){
        cout<<5<<endl;
    }else{
        cout<<(4*n + 9)/3<<endl;
    }
    return 0;
}