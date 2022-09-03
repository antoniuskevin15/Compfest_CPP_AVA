#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long N, pangkat = 0, jenis = 0;
    cin>>N;
    long long temp = N;
    while(temp>=10){
        temp/=10;
        pangkat++;
    }
    temp = N;
    for(int i=pangkat; i>=0; i--){
        if(temp>=(5*pow(10,i))){
            temp-=(5*pow(10,i));
            jenis++;
        }
        if(temp>=(2*pow(10,i))){
            int count2 = temp/(2*pow(10,i));
            temp = temp - (count2*(2*pow(10,i)));
            jenis++;
        }
        if(temp>=(1*pow(10,i))){
            temp-=(1*pow(10,i));
            jenis++;
        }
    }
    printf("%lld\n", jenis);
    for(int i=pangkat; i>=0; i--){
        if(N>=(5*pow(10,i))){
            temp=(5*pow(10,i));
            N = N - temp;
            printf("%lld %d\n", temp, 1);
            jenis++;
        }
        if(N>=(2*pow(10,i))){
            temp=(2*pow(10,i));
            int count2 = N/temp;
            N = N - (count2*temp);
            printf("%lld %d\n", temp, count2);
            jenis++;
        }
        if(N>=(1*pow(10,i))){
            temp=(1*pow(10,i));
            N = N - temp;
            printf("%lld %d\n", temp, 1);
            jenis++;
        }
    }
}
