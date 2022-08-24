#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n,k;
    int x;
    cin>> n>>k;
    int a[n+1];
    for(int i = 1; i<=n; i++){
        a[i] = 0;
    }
    while(k-->0){
        cin>>x;
        a[x]= 1;
    }
    for(int i = 1; i<=n; i++){
        if(a[i]==0){
            cout<<i<<" ";
        }
    }
    return 0;
}