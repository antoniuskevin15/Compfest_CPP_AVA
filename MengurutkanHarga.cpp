#include<iostream>

using namespace std;
void swap(int list[],int i, int j){
    int temp = list[i];
    list[i] = list[j];
    list[j] = temp;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int list[n];
    for(int i = 0; i<n; i++){
        cin>> list[i];
    }

    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(list[i]>list[j]){
                swap(list,i,j);
                cout<<i+1<<" "<<j+1<<endl;
            }
        }
    }
    return 0;
}