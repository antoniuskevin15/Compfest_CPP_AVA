#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int sz = 0;
    int sum = 0, x;
    cin >> sz;
    for(int i = 0; i< sz; i++){
        for(int j = 0; j< sz; j++){
            cin>>x;
            if(i==j){
                sum+=x;
            }
        }
    }
    cout<<sum;
    return 0;
}