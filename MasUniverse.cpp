#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    int max = 0;
    cin >> n;
    int p;
    for(int i = 0; i<n; i++){
        cin>> p;
        if(p>=max){
            max = p;
        }
    }
    cout<<max;
    return 0;
}
