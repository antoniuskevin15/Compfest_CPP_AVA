#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool Hamiltonian_path(
    vector<vector<int> >& adj, int N)
{
    int dp[N][(1 << N)];

    // Initialize the table
    memset(dp, 0, sizeof dp);

    // Set all dp[i][(1 << i)] to
    // true
    for (int i = 0; i < N; i++)
        dp[i][(1 << i)] = true;

    // Iterate over each subset
    // of nodes
    for (int i = 0; i < (1 << N); i++) {

        for (int j = 0; j < N; j++) {

            // If the jth nodes is included
            // in the current subset
            if (i & (1 << j)) {

                // Find K, neighbour of j
                // also present in the
                // current subset
                for (int k = 0; k < N; k++) {

                    if (i & (1 << k)
                        && adj[k][j]
                        && j != k
                        && dp[k][i ^ (1 << j)]) {

                        // Update dp[j][i]
                        // to true
                        dp[j][i] = true;
                        break;
                    }
                }
            }
        }
    }

    // Traverse the vertices
    for (int i = 0; i < N; i++) {

        // Hamiltonian Path exists
        if (dp[i][(1 << N) - 1])
            return true;
    }

    // Otherwise, return false
    return false;
}

int main(){
    int V, E, t1, t2;
    int adj[V][V];
    cin>>V>>E;
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            adj[i][j] = 0;
        }
    }
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<E; i++){
        cin>>t1>>t2;
        cout<<t1<<t2;
        adj[t1-1][t2-1] = 1;
    }
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

}
