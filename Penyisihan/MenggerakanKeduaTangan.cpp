#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int> *adj;
    public:
        Graph(int V);
        void addEdge(int v, int w, int weight);

        int findShortestPath(int s, int d);

        int printShortestPath(int parent[], int s, int d);
};

Graph::Graph(int V){
    this->V = V;
    adj = new list<int>[2*V];
}

void Graph::addEdge(int v, int w, int weight){
    if (weight==2)
    {
        adj[v].push_back(v+V);
        adj[v+V].push_back(w);
    }
    else
        adj[v].push_back(w);
}

int Graph::printShortestPath(int parent[], int s, int d){
    static int level = 0;

    if (parent[s] == -1)
    {
        return level;
    }

    printShortestPath(parent, parent[s], d);

    level++;

    return level;
}

int Graph::findShortestPath(int src, int dest){
    bool *visited = new bool[2*V];
    int *parent = new int[2*V];

    for (int i = 0; i < 2*V; i++){
        visited[i] = false;
        parent[i] = -1;
    }

    list<int> queue;

    visited[src] = true;
    queue.push_back(src);

    list<int>::iterator i;

    while (!queue.empty()){
        int s = queue.front();

        if (s == dest)
            return printShortestPath(parent, s, dest);

        queue.pop_front();

        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
                parent[*i] = s;
            }
        }
    }
}

int main(){
    int V, E;
    cin>>V>>E;
    Graph g(V);
    for(int i=0; i<E; i++){
        int s, e, w;
        cin>>s>>e>>w;
        g.addEdge(s-1, e-1, w);
    }

    for(int i=1; i<V; i++){
        cout << g.findShortestPath(0, i)<<" ";
    }

    return 0;
}
