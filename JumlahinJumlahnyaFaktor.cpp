#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, count = 0;
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j <= i; j++){
            if(i%j==0){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}