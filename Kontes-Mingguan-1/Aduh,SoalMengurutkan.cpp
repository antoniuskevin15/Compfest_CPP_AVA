#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N, M;
    int temp1, temp2 = 0;

    cin>>N>>M;

    string input[N];
    string temp = NULL;

    for(int i=0; i<N; i++){
        cin>>input[i];
    }

    sort(input, input + N);

    for(int i=1; i<=M; i++){
        if((i+1)%2==0){
            temp1 = 0;
            temp2 = 0;
            for(int j=0; j<N; j++){
                if(temp == NULL){
                    for(int k=0; k<i){
                        temp += input[temp1][k];
                    }
                }
                if(temp != input[j][i]){
                    temp2 = j;
                    sort(input, temp1, temp2, greater<int>());
                    temp = NULL;
                    temp1 = j;
                }
            }
        }
    }

    for(string x: input){

        cout<<x<<"\n";
    }

    return 0;
}
