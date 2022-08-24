#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int m,n;
    cin>>n>>m;
    int maze[n][m];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(i == 0 || j == 0){
                maze[i][j] = 1;
            }else{
                maze[i][j] = maze[i-1][j] + maze[i][j-1];
            }
        }
    }
    cout<<maze[n-1][m-1];
    return 0;
}